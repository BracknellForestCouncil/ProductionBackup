<?php
/**
 * @file
 * localgov_content_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_form'.
  $permissions['access localgov_content_form'] = array(
    'name' => 'access localgov_content_form',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_form',
  );

  // Exported permission: 'administer localgov_content_form'.
  $permissions['administer localgov_content_form'] = array(
    'name' => 'administer localgov_content_form',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_form',
  );

  // Exported permission: 'create form content'.
  $permissions['create form content'] = array(
    'name' => 'create form content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any form content'.
  $permissions['delete any form content'] = array(
    'name' => 'delete any form content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own form content'.
  $permissions['delete own form content'] = array(
    'name' => 'delete own form content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any form content'.
  $permissions['edit any form content'] = array(
    'name' => 'edit any form content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own form content'.
  $permissions['edit own form content'] = array(
    'name' => 'edit own form content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
