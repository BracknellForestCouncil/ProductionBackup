<?php
/**
 * @file
 * localgov_feature_guide.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_guide_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_guide'.
  $permissions['access localgov_feature_guide'] = array(
    'name' => 'access localgov_feature_guide',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_guide',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'guide',
  );

  // Exported permission: 'add content to guides'.
  $permissions['add content to guides'] = array(
    'name' => 'add content to guides',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'guide',
  );

  // Exported permission: 'administer guide structures'.
  $permissions['administer guide structures'] = array(
    'name' => 'administer guide structures',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'guide',
  );

  // Exported permission: 'administer localgov_feature_guide'.
  $permissions['administer localgov_feature_guide'] = array(
    'name' => 'administer localgov_feature_guide',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_guide',
  );

  // Exported permission: 'create new guides'.
  $permissions['create new guides'] = array(
    'name' => 'create new guides',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'guide',
  );

  return $permissions;
}
