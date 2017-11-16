<?php
/**
 * @file
 * localgov_base_code_embed_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_code_embed_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer add to head'.
  $permissions['administer add to head'] = array(
    'name' => 'administer add to head',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'add_to_head',
  );

  return $permissions;
}
