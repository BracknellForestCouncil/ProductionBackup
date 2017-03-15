<?php
/**
 * @file
 * localgov_base_cookies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_cookies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_cookies'.
  $permissions['access localgov_base_cookies'] = array(
    'name' => 'access localgov_base_cookies',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_cookies',
  );

  // Exported permission: 'administer localgov_base_cookies'.
  $permissions['administer localgov_base_cookies'] = array(
    'name' => 'administer localgov_base_cookies',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_cookies',
  );

  return $permissions;
}
