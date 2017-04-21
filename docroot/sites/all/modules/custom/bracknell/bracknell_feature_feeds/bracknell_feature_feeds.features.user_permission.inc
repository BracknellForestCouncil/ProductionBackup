<?php
/**
 * @file
 * bracknell_feature_feeds.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_feeds_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(),
    'module' => 'aggregator',
  );

  return $permissions;
}
