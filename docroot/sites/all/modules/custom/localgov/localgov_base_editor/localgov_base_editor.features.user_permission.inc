<?php
/**
 * @file
 * localgov_base_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_editor'.
  $permissions['access localgov_base_editor'] = array(
    'name' => 'access localgov_base_editor',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_editor',
  );

  // Exported permission: 'administer localgov_base_editor'.
  $permissions['administer localgov_base_editor'] = array(
    'name' => 'administer localgov_base_editor',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_editor',
  );

  // Exported permission: 'use text format html_basic'.
  $permissions['use text format html_basic'] = array(
    'name' => 'use text format html_basic',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format html_full'.
  $permissions['use text format html_full'] = array(
    'name' => 'use text format html_full',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
