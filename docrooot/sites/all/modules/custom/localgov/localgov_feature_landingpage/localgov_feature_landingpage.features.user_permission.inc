<?php
/**
 * @file
 * localgov_feature_landingpage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_landingpage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_landingpage'.
  $permissions['access localgov_feature_landingpage'] = array(
    'name' => 'access localgov_feature_landingpage',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_landingpage',
  );

  // Exported permission: 'administer localgov_feature_landingpage'.
  $permissions['administer localgov_feature_landingpage'] = array(
    'name' => 'administer localgov_feature_landingpage',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_landingpage',
  );

  return $permissions;
}
