<?php
/**
 * @file
 * localgov_base_navigation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_navigation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_navigation'.
  $permissions['access localgov_base_navigation'] = array(
    'name' => 'access localgov_base_navigation',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_navigation',
  );

  // Exported permission: 'administer localgov_base_navigation'.
  $permissions['administer localgov_base_navigation'] = array(
    'name' => 'administer localgov_base_navigation',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_navigation',
  );

  return $permissions;
}
