<?php
/**
 * @file
 * localgov_feature_easyread.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_easyread_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_easyread'.
  $permissions['access localgov_feature_easyread'] = array(
    'name' => 'access localgov_feature_easyread',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_easyread',
  );

  // Exported permission: 'administer localgov_feature_easyread'.
  $permissions['administer localgov_feature_easyread'] = array(
    'name' => 'administer localgov_feature_easyread',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_easyread',
  );

  return $permissions;
}
