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

  // Exported permission: 'access localgov_content_fact'.
  $permissions['access localgov_content_fact'] = array(
    'name' => 'access localgov_content_fact',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_fact',
  );

  // Exported permission: 'administer localgov_content_fact'.
  $permissions['administer localgov_content_fact'] = array(
    'name' => 'administer localgov_content_fact',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_fact',
  );

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
