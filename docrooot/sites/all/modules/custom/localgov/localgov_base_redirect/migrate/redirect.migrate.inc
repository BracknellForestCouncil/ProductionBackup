<?php

/**
 * @file
 * Migrate support for Redirect module.
 */

/**
 * Redirect as main destination for migrate.
 */
class MigrateDestinationRedirect extends MigrateDestinationEntity {
  /**
   * Constructor.
   */
  public function __construct($bundle = 'redirect', array $options = array()) {
    parent::__construct('redirect', $bundle, $options);
  }

  /**
   * Return the schema for the key to be used in destination.
   */
  static public function getKeySchema() {
    return array(
      'rid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => 'Primary Key: Unique redirect ID.',
      ),
    );
  }

  /**
   * Return string representation for the object.
   */
  public function __toString() {
    return t('Redirects');
  }

  /**
   * Returns a list of fields available to be mapped for a flag.
   *
   * @return array
   *   Keys: machine names of the fields (to be passed to addFieldMapping)
   *   Values: Human-friendly descriptions of the fields.
   */
  public function fields() {
    return array(
      'rid' => t('Primary Key: Unique redirect ID.'),
      'hash' => t('A unique hash based on source, source_options, and language.'),
      'type' => t("The redirect type; if value is 'redirect' it is a normal redirect handled by the module."),
      'uid' => t('The {users}.uid of the user who created the redirect.'),
      'source' => t('The source path to redirect from.'),
      'source_options' => t('A serialized array of source options.'),
      'redirect' => t('The destination path to redirect to.'),
      'redirect_options' => t('A serialized array of redirect options.'),
      'language' => t('The language this redirect is for; if blank, the alias will be used for unknown languages.'),
      'status_code' => t('The HTTP status code to use for the redirect.'),
      'count' => t('The number of times the redirect has been used.'),
      'access' => t('The timestamp of when the redirect was last accessed.'),
      'is_new' => t('Option: Indicates a new redirect with the specified rid should be created'),
    );
  }

  /**
   * Validate a redirect.
   *
   * We need to check if a redirect already exists otherwise if we call
   * redirect_save in complete we get an db error due to duplicate entries.
   *
   * This function is similar to the validate function in the redirect module
   * but the feedback is handled via the Migrate saveMessage functionality.
   */
  protected function redirectValidate($redirect) {
    $redirect = (object) $redirect;

    // check that there there are no redirect loops
    $migration = Migration::currentMigration();
    if (url($redirect->source) == url($redirect->redirect)) {
      $migration->saveMessage(t('Redirect to self (!redirect) ignored',
          array('!redirect' => $redirect->redirect)),
        MigrationBase::MESSAGE_INFORMATIONAL);

      return FALSE;
    }

    redirect_hash($redirect);
    if ($existing = redirect_load_by_hash($redirect->hash)) {
      if ($redirect->rid != $existing->rid) {
        $migration->saveMessage(t('The source path is already being redirected.'),
          MigrationBase::MESSAGE_INFORMATIONAL);

        return FALSE;
      }
    }

    return TRUE;
  }

  /**
   * Import a single row.
   *
   * @param $redirect
   *   Redirect object to build. Prefilled with any fields mapped in the Migration.
   * @param $row
   *   Raw source data object - passed through to prepare/complete handlers.
   * @return array
   *   Array of key fields of the object that was saved if successful. FALSE on
   *   failure.
   *
   * @throws MigrateException
   */
  public function import(stdClass $redirect, stdClass $row) {
    // Updating previously-migrated content?
    $migration = Migration::currentMigration();
    if (isset($row->migrate_map_destid1)) {
      if (isset($redirect->rid)) {
        // Make sure is_new is off.
        $redirect->is_new = FALSE;
        if ($redirect->rid != $row->migrate_map_destid1) {
          throw new MigrateException(t("Incoming rid !rid and map destination rid !destid1 don't match",
            array(
              '!rid' => $redirect->rid,
              '!destid1' => $row->migrate_map_destid1
            )));
        }
        else {
          $redirect->rid = $row->migrate_map_destid1;
        }
      }
    }
    if ($migration->getSystemOfRecord() == Migration::DESTINATION) {
      if (!isset($redirect->rid)) {
        throw new MigrateException(t('System-of-record is DESTINATION, but no destination rid provided'));
      }
      $old_redirect = redirect_load($redirect->rid);
      if (empty($old_redirect)) {
        throw new MigrateException(t('System-of-record is DESTINATION, but redirect !rid does not exist',
          array('!rid' => $redirect->rid)));
      }
    }
    elseif (!isset($redirect->type)) {
      // Default the type to our designated destination bundle (by doing this
      // conditionally, we permit some flexibility in terms of implementing
      // migrations which can affect more than one type).
      $redirect->type = $this->bundle;
    }

    // Set some required properties.
    if ($migration->getSystemOfRecord() == Migration::SOURCE) {
      if (empty($redirect->language)) {
        $redirect->language = $this->language;
      }
    }

    redirect_object_prepare($redirect);

    // Parse source and destination and extract options.
    $this->extractUrlOptions($redirect, 'source');
    $this->extractUrlOptions($redirect, 'redirect');

    // Handle provided hashes.
    if (empty($redirect->hash)) {
      $redirect->hash = redirect_hash($redirect);
    }

    // Invoke migration prepare handlers.
    $this->prepare($redirect, $row);

    // Trying to update an existing redirect.
    if ($migration->getSystemOfRecord() == Migration::DESTINATION) {
      // Incoming data overrides existing, so only copy non-existent fields.
      foreach (array_keys($old_redirect) as $field) {
        // An explicit NULL in the source data means to wipe to old value
        // (i.e., don't copy it over from $old_redirect)
        if (property_exists($redirect, $field) && $redirect->$field === NULL) {
          // Ignore this field.
        }
        elseif (!isset($redirect->$field)) {
          $redirect->$field = $old_redirect->$field;
        }
      }
    }

    if (isset($redirect->rid) && !(isset($redirect->is_new) && $redirect->is_new)) {
      $updating = TRUE;
    }
    else {
      $updating = FALSE;
    }

    // Only save if the redirect does not already exist.
    if ($this->redirectValidate($redirect)) {
      migrate_instrument_start('redirect_save');
      redirect_save($redirect);
      migrate_instrument_stop('redirect_save');
    }

    if (isset($redirect->rid)) {
      if ($updating) {
        $this->numUpdated++;
      }
      else {
        $this->numCreated++;
      }

      $return = array($redirect->rid);
    }
    else {
      $return = FALSE;
    }

    // Invoke migration complete handlers.
    $this->complete($redirect, $row);

    return $return;
  }

  /**
   * Delete redirects.
   *
   * @param array $rids
   *   IDs to be deleted.
   */
  public function bulkRollback(array $rids) {
    migrate_instrument_start('redirect_delete_multiple');
    $this->prepareRollback($rids);
    redirect_delete_multiple($rids);
    $this->completeRollback($rids);
    migrate_instrument_stop('redirect_delete_multiple');
  }

  /**
   * Extract the query and fragment parts out of an URL field.
   *
   * Inspired by _redirect_extract_url_options().
   */
  protected function extractUrlOptions(stdClass &$redirect, $type) {
    $url = &$redirect->{$type};
    $options_type = $type . '_options';
    $options = &$redirect->{$options_type};

    $parsed = redirect_parse_url($url);

    if (isset($parsed['fragment'])) {
      $options['fragment'] = $parsed['fragment'];
    }
    else {
      unset($options['fragment']);
    }

    if (isset($parsed['query'])) {
      $options['query'] = $parsed['query'];
    }
    else {
      unset($options['query']);
    }

    if (isset($parsed['scheme']) && $parsed['scheme'] == 'https') {
      $options['https'] = TRUE;
    }
    else {
      unset($options['https']);
    }

    if (!url_is_external($parsed['url'])) {
      $parsed['url'] = drupal_get_normal_path($parsed['url'], $redirect->language);
    }

    $url = $parsed['url'];
  }
}

class MigrateRedirectEntityHandler extends MigrateDestinationHandler {

  /**
   * Constructor.
   */
  public function __construct() {
    $this->registerTypes(array('entity'));
  }

  /**
   * Overrides fields().
   */
  public function fields() {
    return array('migrate_redirects' => t('Original path(s) to redirect from.'));
  }

  /**
   * Validates a redirect.
   *
   * We need to check if a redirect already exists
   * otherwise if we call redirect_save in complete we get an db
   * error due to duplicate entries.
   *
   * This function is similar to the validate function in the
   * redirect module but the feedback is handled via the Migrate
   * saveMessage functionality.
   */
  protected function redirectValidate($redirect) {
    $redirect = (object) $redirect;

    // Check that there there are no redirect loops.
    $migration = Migration::currentMigration();
    if (url($redirect->source) == url($redirect->redirect)) {
      $migration->saveMessage(t('Redirect to self (!redirect) ignored',
                              array('!redirect' => $redirect->redirect)),
                  MigrationBase::MESSAGE_INFORMATIONAL);
      return FALSE;
    }
    redirect_hash($redirect);
    if ($existing = redirect_load_by_hash($redirect->hash)) {
      if ($redirect->rid != $existing->rid) {
        $migration->saveMessage(t('The source path is already being redirected.'),
          MigrationBase::MESSAGE_INFORMATIONAL);
        return FALSE;
      }
    }

    return TRUE;
  }

  /**
   * Get redirects from entity or row.
   */
  protected function getRedirects($entity, $row) {
    // If there are multiple redirects defined for the entity, they will be in
    // $row. If there is just one, it will be in $entity.
    $migrate_redirects = array();
    if (isset($row->migrate_redirects) && !empty($row->migrate_redirects)) {
      $migrate_redirects = $row->migrate_redirects;
    }
    else {
      $migrate_redirects = isset($entity->migrate_redirects) ? $entity->migrate_redirects : NULL;
    }
    // If it is not an array already, make it one now.
    if (!is_array($migrate_redirects)) {
      $migrate_redirects = array($migrate_redirects);
    }
    return $migrate_redirects;
  }

  /**
   * Overrides complete().
   *
   * @param object $entity
   *   The Drupal entity.
   * @param stdClass $row
   *   The row being migrated.
   */
  public function complete($entity, stdClass $row) {

    $migration = Migration::currentMigration();
    $destination = $migration->getDestination();
    $entity_type = $destination->getEntityType();
    $migrate_redirects = $this->getRedirects($entity, $row);

    // We looked up the destination entity_type in the constructor.
    if ($migrate_redirects && ($redirect_destination = entity_uri($entity_type, $entity))) {
      foreach ($migrate_redirects as $path) {
        $redirect_defaults = array(
          'status_code' => 301,
        );
        if (isset($entity->uid)) {
          $redirect_defaults['uid'] = $entity->uid;
        }
        if (isset($entity->language)) {
          if ($entity->language == '') {
            $redirect_defaults['language'] = LANGUAGE_NONE;
          }
          else {
            $redirect_defaults['language'] = $entity->language;
          }
        }
        $redirect = new stdClass();
        redirect_object_prepare($redirect, $redirect_defaults);
        $redirect->redirect = $redirect_destination['path'];
        $parsed = redirect_parse_url($path);
        $redirect->source = isset($parsed['path']) ? ltrim($parsed['path'], '/') : '';
        if (!empty($parsed['query'])) {
          $redirect->source_options['query'] = $parsed['query'];
        }

        // Only save if the redirect does not already exist.
        if ($this->redirectValidate($redirect) && $redirect->source != '') {
          redirect_save($redirect);
        }
      }
    }
  }
}
