<?php
/**
 * @file
 * localgov_feature_directory.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_directory'.
  $permissions['access localgov_feature_directory'] = array(
    'name' => 'access localgov_feature_directory',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_directory',
  );

  // Exported permission: 'administer localgov_feature_directory'.
  $permissions['administer localgov_feature_directory'] = array(
    'name' => 'administer localgov_feature_directory',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_directory',
  );

  return $permissions;
}
