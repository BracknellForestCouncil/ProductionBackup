<?php
/**
 * @file
 * bracknell_entity_external_link.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_entity_external_link_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add external_link bundles'.
  $permissions['eck add external_link bundles'] = array(
    'name' => 'eck add external_link bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add external_link external_link entities'.
  $permissions['eck add external_link external_link entities'] = array(
    'name' => 'eck add external_link external_link entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer external_link bundles'.
  $permissions['eck administer external_link bundles'] = array(
    'name' => 'eck administer external_link bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer external_link external_link entities'.
  $permissions['eck administer external_link external_link entities'] = array(
    'name' => 'eck administer external_link external_link entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete external_link bundles'.
  $permissions['eck delete external_link bundles'] = array(
    'name' => 'eck delete external_link bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete external_link external_link entities'.
  $permissions['eck delete external_link external_link entities'] = array(
    'name' => 'eck delete external_link external_link entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit external_link bundles'.
  $permissions['eck edit external_link bundles'] = array(
    'name' => 'eck edit external_link bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit external_link external_link entities'.
  $permissions['eck edit external_link external_link entities'] = array(
    'name' => 'eck edit external_link external_link entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list external_link bundles'.
  $permissions['eck list external_link bundles'] = array(
    'name' => 'eck list external_link bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list external_link external_link entities'.
  $permissions['eck list external_link external_link entities'] = array(
    'name' => 'eck list external_link external_link entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view external_link bundles'.
  $permissions['eck view external_link bundles'] = array(
    'name' => 'eck view external_link bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view external_link external_link entities'.
  $permissions['eck view external_link external_link entities'] = array(
    'name' => 'eck view external_link external_link entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'manage external_link properties'.
  $permissions['manage external_link properties'] = array(
    'name' => 'manage external_link properties',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
