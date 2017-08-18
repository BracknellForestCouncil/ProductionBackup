<?php
/**
 * @file
 * localgov_base_redirect.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_redirect_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_redirect'.
  $permissions['access localgov_base_redirect'] = array(
    'name' => 'access localgov_base_redirect',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_redirect',
  );

  // Exported permission: 'administer localgov_base_redirect'.
  $permissions['administer localgov_base_redirect'] = array(
    'name' => 'administer localgov_base_redirect',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_redirect',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'redirect',
  );

  return $permissions;
}
