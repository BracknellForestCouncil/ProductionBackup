<?php
/**
 * @file
 * localgov_feature_feedback.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_feedback_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_feedback'.
  $permissions['access localgov_feature_feedback'] = array(
    'name' => 'access localgov_feature_feedback',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_feedback',
  );

  // Exported permission: 'administer localgov_feature_feedback'.
  $permissions['administer localgov_feature_feedback'] = array(
    'name' => 'administer localgov_feature_feedback',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_feedback',
  );

  return $permissions;
}
