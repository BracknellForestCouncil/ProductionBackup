<?php
/**
 * @file
 * bracknell_feature_directory.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add directory_entry bundles'.
  $permissions['eck add directory_entry bundles'] = array(
    'name' => 'eck add directory_entry bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add directory_entry directory_entry entities'.
  $permissions['eck add directory_entry directory_entry entities'] = array(
    'name' => 'eck add directory_entry directory_entry entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer directory_entry bundles'.
  $permissions['eck administer directory_entry bundles'] = array(
    'name' => 'eck administer directory_entry bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer directory_entry directory_entry entities'.
  $permissions['eck administer directory_entry directory_entry entities'] = array(
    'name' => 'eck administer directory_entry directory_entry entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete directory_entry bundles'.
  $permissions['eck delete directory_entry bundles'] = array(
    'name' => 'eck delete directory_entry bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete directory_entry directory_entry entities'.
  $permissions['eck delete directory_entry directory_entry entities'] = array(
    'name' => 'eck delete directory_entry directory_entry entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit directory_entry bundles'.
  $permissions['eck edit directory_entry bundles'] = array(
    'name' => 'eck edit directory_entry bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit directory_entry directory_entry entities'.
  $permissions['eck edit directory_entry directory_entry entities'] = array(
    'name' => 'eck edit directory_entry directory_entry entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list directory_entry bundles'.
  $permissions['eck list directory_entry bundles'] = array(
    'name' => 'eck list directory_entry bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list directory_entry directory_entry entities'.
  $permissions['eck list directory_entry directory_entry entities'] = array(
    'name' => 'eck list directory_entry directory_entry entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view directory_entry bundles'.
  $permissions['eck view directory_entry bundles'] = array(
    'name' => 'eck view directory_entry bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view directory_entry directory_entry entities'.
  $permissions['eck view directory_entry directory_entry entities'] = array(
    'name' => 'eck view directory_entry directory_entry entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage directory_entry properties'.
  $permissions['manage directory_entry properties'] = array(
    'name' => 'manage directory_entry properties',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
