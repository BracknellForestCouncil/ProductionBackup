<?php
/**
 * @file
 * localgov_feature_related.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_related_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_related'.
  $permissions['access localgov_feature_related'] = array(
    'name' => 'access localgov_feature_related',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_related',
  );

  // Exported permission: 'administer localgov_feature_related'.
  $permissions['administer localgov_feature_related'] = array(
    'name' => 'administer localgov_feature_related',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_related',
  );

  return $permissions;
}
