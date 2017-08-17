<?php
/**
 * @file
 * localgov_base_import.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_import'.
  $permissions['access localgov_base_import'] = array(
    'name' => 'access localgov_base_import',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_import',
  );

  // Exported permission: 'administer localgov_base_import'.
  $permissions['administer localgov_base_import'] = array(
    'name' => 'administer localgov_base_import',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_import',
  );

  return $permissions;
}
