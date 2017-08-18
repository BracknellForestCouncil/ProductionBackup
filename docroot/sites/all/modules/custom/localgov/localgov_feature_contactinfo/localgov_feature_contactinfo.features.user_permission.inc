<?php
/**
 * @file
 * localgov_feature_contactinfo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_contactinfo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_contactinfo'.
  $permissions['access localgov_feature_contactinfo'] = array(
    'name' => 'access localgov_feature_contactinfo',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_contactinfo',
  );

  // Exported permission: 'administer localgov_feature_contactinfo'.
  $permissions['administer localgov_feature_contactinfo'] = array(
    'name' => 'administer localgov_feature_contactinfo',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_contactinfo',
  );

  return $permissions;
}
