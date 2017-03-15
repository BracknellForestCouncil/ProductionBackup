<?php
/**
 * @file
 * bracknell_entity_slogan.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_entity_slogan_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add slogan bundles'.
  $permissions['eck add slogan bundles'] = array(
    'name' => 'eck add slogan bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add slogan slogan entities'.
  $permissions['eck add slogan slogan entities'] = array(
    'name' => 'eck add slogan slogan entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer slogan bundles'.
  $permissions['eck administer slogan bundles'] = array(
    'name' => 'eck administer slogan bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer slogan slogan entities'.
  $permissions['eck administer slogan slogan entities'] = array(
    'name' => 'eck administer slogan slogan entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete slogan bundles'.
  $permissions['eck delete slogan bundles'] = array(
    'name' => 'eck delete slogan bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete slogan slogan entities'.
  $permissions['eck delete slogan slogan entities'] = array(
    'name' => 'eck delete slogan slogan entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit slogan bundles'.
  $permissions['eck edit slogan bundles'] = array(
    'name' => 'eck edit slogan bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit slogan slogan entities'.
  $permissions['eck edit slogan slogan entities'] = array(
    'name' => 'eck edit slogan slogan entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list slogan bundles'.
  $permissions['eck list slogan bundles'] = array(
    'name' => 'eck list slogan bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list slogan slogan entities'.
  $permissions['eck list slogan slogan entities'] = array(
    'name' => 'eck list slogan slogan entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view slogan bundles'.
  $permissions['eck view slogan bundles'] = array(
    'name' => 'eck view slogan bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view slogan slogan entities'.
  $permissions['eck view slogan slogan entities'] = array(
    'name' => 'eck view slogan slogan entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'manage slogan properties'.
  $permissions['manage slogan properties'] = array(
    'name' => 'manage slogan properties',
    'roles' => array(
      'site administrator' => 'site administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
