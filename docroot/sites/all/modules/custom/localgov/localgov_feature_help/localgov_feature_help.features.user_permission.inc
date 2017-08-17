<?php
/**
 * @file
 * localgov_feature_help.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_help_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_help'.
  $permissions['access localgov_feature_help'] = array(
    'name' => 'access localgov_feature_help',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_help',
  );

  // Exported permission: 'administer localgov_feature_help'.
  $permissions['administer localgov_feature_help'] = array(
    'name' => 'administer localgov_feature_help',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_help',
  );

  return $permissions;
}
