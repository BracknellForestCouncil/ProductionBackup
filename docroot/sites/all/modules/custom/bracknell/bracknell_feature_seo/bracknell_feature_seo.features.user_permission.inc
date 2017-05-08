<?php
/**
 * @file
 * bracknell_feature_seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(),
    'module' => 'metatag',
  );

  return $permissions;
}
