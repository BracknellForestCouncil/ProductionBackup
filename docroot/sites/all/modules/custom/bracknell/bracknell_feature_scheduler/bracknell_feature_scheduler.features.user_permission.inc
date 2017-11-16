<?php
/**
 * @file
 * bracknell_feature_scheduler.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_scheduler_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(),
    'module' => 'scheduler',
  );

  return $permissions;
}
