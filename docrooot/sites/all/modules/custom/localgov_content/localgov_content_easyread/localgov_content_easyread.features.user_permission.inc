<?php
/**
 * @file
 * localgov_content_easyread.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_easyread_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_easyread'.
  $permissions['access localgov_content_easyread'] = array(
    'name' => 'access localgov_content_easyread',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_easyread',
  );

  // Exported permission: 'administer localgov_content_easyread'.
  $permissions['administer localgov_content_easyread'] = array(
    'name' => 'administer localgov_content_easyread',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_easyread',
  );

  // Exported permission: 'create easyread content'.
  $permissions['create easyread content'] = array(
    'name' => 'create easyread content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any easyread content'.
  $permissions['delete any easyread content'] = array(
    'name' => 'delete any easyread content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own easyread content'.
  $permissions['delete own easyread content'] = array(
    'name' => 'delete own easyread content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any easyread content'.
  $permissions['edit any easyread content'] = array(
    'name' => 'edit any easyread content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own easyread content'.
  $permissions['edit own easyread content'] = array(
    'name' => 'edit own easyread content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
