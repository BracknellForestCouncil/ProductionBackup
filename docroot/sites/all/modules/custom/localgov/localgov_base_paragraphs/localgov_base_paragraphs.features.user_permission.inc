<?php
/**
 * @file
 * localgov_base_paragraphs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_paragraphs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_paragraphs'.
  $permissions['access localgov_base_paragraphs'] = array(
    'name' => 'access localgov_base_paragraphs',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_paragraphs',
  );

  // Exported permission: 'administer localgov_base_paragraphs'.
  $permissions['administer localgov_base_paragraphs'] = array(
    'name' => 'administer localgov_base_paragraphs',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_paragraphs',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'bypass maxlength'.
  $permissions['bypass maxlength'] = array(
    'name' => 'bypass maxlength',
    'roles' => array(),
    'module' => 'maxlength',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'manualcrop',
  );

  return $permissions;
}
