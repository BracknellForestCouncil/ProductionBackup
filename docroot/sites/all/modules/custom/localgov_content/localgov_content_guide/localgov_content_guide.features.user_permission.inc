<?php
/**
 * @file
 * localgov_content_guide.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_guide_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_guide'.
  $permissions['access localgov_content_guide'] = array(
    'name' => 'access localgov_content_guide',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_guide',
  );

  // Exported permission: 'administer localgov_content_guide'.
  $permissions['administer localgov_content_guide'] = array(
    'name' => 'administer localgov_content_guide',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_guide',
  );

  // Exported permission: 'create guide content'.
  $permissions['create guide content'] = array(
    'name' => 'create guide content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any guide content'.
  $permissions['delete any guide content'] = array(
    'name' => 'delete any guide content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own guide content'.
  $permissions['delete own guide content'] = array(
    'name' => 'delete own guide content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any guide content'.
  $permissions['edit any guide content'] = array(
    'name' => 'edit any guide content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own guide content'.
  $permissions['edit own guide content'] = array(
    'name' => 'edit own guide content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
