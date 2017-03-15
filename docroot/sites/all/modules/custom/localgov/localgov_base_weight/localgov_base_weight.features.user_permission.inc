<?php
/**
 * @file
 * localgov_base_weight.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_weight_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access localgov_base_weight'.
  $permissions['access localgov_base_weight'] = array(
    'name' => 'access localgov_base_weight',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_weight',
  );

  // Exported permission: 'administer localgov_base_weight'.
  $permissions['administer localgov_base_weight'] = array(
    'name' => 'administer localgov_base_weight',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_weight',
  );

  return $permissions;
}
