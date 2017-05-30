<?php
/**
 * @file
 * bracknell_feature_performance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_performance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(),
    'module' => 'advagg',
  );

  return $permissions;
}
