<?php
/**
 * @file
 * localgov_base_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function localgov_base_user_user_default_roles() {
  $roles = array();

  // Exported role: content administrator.
  $roles['content administrator'] = array(
    'name' => 'content administrator',
    'weight' => 3,
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  // Exported role: site administrator.
  $roles['site administrator'] = array(
    'name' => 'site administrator',
    'weight' => 5,
  );

  // Exported role: site editor.
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => 4,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 6,
  );

  return $roles;
}
