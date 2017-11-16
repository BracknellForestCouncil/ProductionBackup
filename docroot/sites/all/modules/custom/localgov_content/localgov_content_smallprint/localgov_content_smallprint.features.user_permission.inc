<?php
/**
 * @file
 * localgov_content_smallprint.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_smallprint_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_smallprint'.
  $permissions['access localgov_content_smallprint'] = array(
    'name' => 'access localgov_content_smallprint',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_smallprint',
  );

  // Exported permission: 'administer localgov_content_smallprint'.
  $permissions['administer localgov_content_smallprint'] = array(
    'name' => 'administer localgov_content_smallprint',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_smallprint',
  );

  // Exported permission: 'create smallprint content'.
  $permissions['create smallprint content'] = array(
    'name' => 'create smallprint content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any smallprint content'.
  $permissions['delete any smallprint content'] = array(
    'name' => 'delete any smallprint content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own smallprint content'.
  $permissions['delete own smallprint content'] = array(
    'name' => 'delete own smallprint content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any smallprint content'.
  $permissions['edit any smallprint content'] = array(
    'name' => 'edit any smallprint content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own smallprint content'.
  $permissions['edit own smallprint content'] = array(
    'name' => 'edit own smallprint content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
