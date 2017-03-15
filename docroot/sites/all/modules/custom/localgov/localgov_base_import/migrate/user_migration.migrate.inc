<?php
/**
 * @file
 * filename.migrate.inc
 */

/**
 * User migration
 */
class UserMigration extends LocalGovMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_import') . '/data';
    }else{
      $location = variable_get('localgov_import_location');
    }

    $columns = array(
      // "Source": ('Fieldname', 'Description')
      0 => array('id', 'ID'),
      1 => array('uuid', 'UUID'),
      2 => array('email', 'Email'),
      3 => array('name', 'Name'),
      4 => array('password', 'Password'),
      5 => array('roles', 'Roles'),
    );

    // The Description of the import. This desription is shown on the Migrate GUI
    $this->description = t('Import users from a CSV file.');

    // The Source of the import
    $this->source = new MigrateSourceCSV($location . '/user.csv', $columns, array('header_rows' => 1));

    // The destination bundle
    $this->destination = new MigrateDestinationUser();

    // Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
    $this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'import'
        )
      ),
      MigrateDestinationUser::getKeySchema()
    );

    // Field mapping
    $this->addFieldMapping('uid', 'id');
    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('pass', 'password')
    ->defaultValue('Pa55w0rd')
    ->description(t("User's password (plain text)"));
    //$this->addFieldMapping('roles', 'roles');
    $this->addFieldMapping('is_new')
      ->defaultValue(TRUE)
      ->description(t('Build the new user (0|1)'));
    $this->addFieldMapping('role_names','roles')
      ->defaultValue(array('authenticated user'));
    $this->addFieldMapping('theme')
      ->defaultValue('')
      ->description(t("User's default theme"));
    $this->addFieldMapping('signature')
      ->defaultValue('')
      ->description(t("User's signature"));
    $this->addFieldMapping('signature_format')
      ->defaultValue('basic')
      ->description(t('Which filter applies to this signature'));
    $this->addFieldMapping('created')
      ->defaultValue(time())
      ->description(t('UNIX timestamp of user creation date'));
    $this->addFieldMapping('access')
      ->defaultValue(0)
      ->description(t('UNIX timestamp for previous time user accessed the site'));
    $this->addFieldMapping('login')
      ->defaultValue(0)
      ->description(t('UNIX timestamp for user\'s last login'));
    $this->addFieldMapping('status')
      ->defaultValue(1)
      ->description(t('Whether the user is active(1) or blocked(0)'));
    $this->addFieldMapping('timezone')
      ->defaultValue(t('Europe/London'))
      ->description(t("User's time zone"));
    $this->addFieldMapping('language')
      ->defaultValue(t('en'))
      ->description(t("User's default language"));
    $this->addFieldMapping('picture')
      ->defaultValue(0)
      ->description(t('Avatar of the user'));
    if (module_exists('path')) {
      $this->addFieldMapping('path')
           ->defaultValue(NULL)
           ->description(t('Path alias'));
    }
    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('init', 'data', 'roles'));

  }
  // public function prepareRow($row) {
  //   $user_roles = explode(",", $row->roles);
  //   $roles = array('2' => '2');
  //   foreach ($user_roles as $role_name) {
  //     $rid = db_query('SELECT rid FROM {role} WHERE name = :name', array(':name' => $role_name))->fetchField();
  //     $roles[$rid] = $rid;
  //   }
  //   $row->roles = $roles;
  //   return TRUE;
  // }
}
