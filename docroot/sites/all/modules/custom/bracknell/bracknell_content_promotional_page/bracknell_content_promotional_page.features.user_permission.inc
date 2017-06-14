<?php
/**
 * @file
 * bracknell_content_promotional_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_content_promotional_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create promotional_page content'.
  $permissions['create promotional_page content'] = array(
    'name' => 'create promotional_page content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any promotional_page content'.
  $permissions['delete any promotional_page content'] = array(
    'name' => 'delete any promotional_page content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own promotional_page content'.
  $permissions['delete own promotional_page content'] = array(
    'name' => 'delete own promotional_page content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any promotional_page content'.
  $permissions['edit any promotional_page content'] = array(
    'name' => 'edit any promotional_page content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own promotional_page content'.
  $permissions['edit own promotional_page content'] = array(
    'name' => 'edit own promotional_page content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
