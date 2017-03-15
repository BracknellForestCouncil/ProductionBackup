<?php
/**
 * @file
 * localgov_content_fact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_fact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fact content'.
  $permissions['create fact content'] = array(
    'name' => 'create fact content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fact content'.
  $permissions['delete any fact content'] = array(
    'name' => 'delete any fact content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fact content'.
  $permissions['delete own fact content'] = array(
    'name' => 'delete own fact content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fact content'.
  $permissions['edit any fact content'] = array(
    'name' => 'edit any fact content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fact content'.
  $permissions['edit own fact content'] = array(
    'name' => 'edit own fact content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
