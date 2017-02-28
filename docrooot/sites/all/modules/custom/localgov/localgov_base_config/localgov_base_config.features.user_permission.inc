<?php
/**
 * @file
 * localgov_base_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_config'.
  $permissions['access localgov_base_config'] = array(
    'name' => 'access localgov_base_config',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_config',
  );

  // Exported permission: 'administer localgov_base_config'.
  $permissions['administer localgov_base_config'] = array(
    'name' => 'administer localgov_base_config',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_config',
  );

  return $permissions;
}
