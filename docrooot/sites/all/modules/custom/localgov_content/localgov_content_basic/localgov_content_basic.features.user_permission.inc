<?php
/**
 * @file
 * localgov_content_basic.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_basic_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_basic'.
  $permissions['access localgov_content_basic'] = array(
    'name' => 'access localgov_content_basic',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_basic',
  );

  // Exported permission: 'administer localgov_content_basic'.
  $permissions['administer localgov_content_basic'] = array(
    'name' => 'administer localgov_content_basic',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_basic',
  );

  // Exported permission: 'create basic content'.
  $permissions['create basic content'] = array(
    'name' => 'create basic content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any basic content'.
  $permissions['delete any basic content'] = array(
    'name' => 'delete any basic content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own basic content'.
  $permissions['delete own basic content'] = array(
    'name' => 'delete own basic content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any basic content'.
  $permissions['edit any basic content'] = array(
    'name' => 'edit any basic content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own basic content'.
  $permissions['edit own basic content'] = array(
    'name' => 'edit own basic content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
