<?php
/**
 * @file
 * localgov_content_guidesection.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_guidesection_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_guidesection'.
  $permissions['access localgov_content_guidesection'] = array(
    'name' => 'access localgov_content_guidesection',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_guidesection',
  );

  // Exported permission: 'administer localgov_content_guidesection'.
  $permissions['administer localgov_content_guidesection'] = array(
    'name' => 'administer localgov_content_guidesection',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_guidesection',
  );

  // Exported permission: 'create guide_section content'.
  $permissions['create guide_section content'] = array(
    'name' => 'create guide_section content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any guide_section content'.
  $permissions['delete any guide_section content'] = array(
    'name' => 'delete any guide_section content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own guide_section content'.
  $permissions['delete own guide_section content'] = array(
    'name' => 'delete own guide_section content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any guide_section content'.
  $permissions['edit any guide_section content'] = array(
    'name' => 'edit any guide_section content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own guide_section content'.
  $permissions['edit own guide_section content'] = array(
    'name' => 'edit own guide_section content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
