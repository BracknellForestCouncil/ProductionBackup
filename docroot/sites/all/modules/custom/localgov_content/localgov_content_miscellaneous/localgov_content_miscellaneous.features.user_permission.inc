<?php
/**
 * @file
 * localgov_content_miscellaneous.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_miscellaneous_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_miscellaneous'.
  $permissions['access localgov_content_miscellaneous'] = array(
    'name' => 'access localgov_content_miscellaneous',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_miscellaneous',
  );

  // Exported permission: 'administer localgov_content_miscellaneous'.
  $permissions['administer localgov_content_miscellaneous'] = array(
    'name' => 'administer localgov_content_miscellaneous',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_miscellaneous',
  );

  // Exported permission: 'create miscellaneous content'.
  $permissions['create miscellaneous content'] = array(
    'name' => 'create miscellaneous content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any miscellaneous content'.
  $permissions['delete any miscellaneous content'] = array(
    'name' => 'delete any miscellaneous content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own miscellaneous content'.
  $permissions['delete own miscellaneous content'] = array(
    'name' => 'delete own miscellaneous content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any miscellaneous content'.
  $permissions['edit any miscellaneous content'] = array(
    'name' => 'edit any miscellaneous content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own miscellaneous content'.
  $permissions['edit own miscellaneous content'] = array(
    'name' => 'edit own miscellaneous content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
