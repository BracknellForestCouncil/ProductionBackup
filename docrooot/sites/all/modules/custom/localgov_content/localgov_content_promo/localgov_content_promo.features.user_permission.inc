<?php
/**
 * @file
 * localgov_content_promo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_content_promo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_content_promo'.
  $permissions['access localgov_content_promo'] = array(
    'name' => 'access localgov_content_promo',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_promo',
  );

  // Exported permission: 'administer localgov_content_promo'.
  $permissions['administer localgov_content_promo'] = array(
    'name' => 'administer localgov_content_promo',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_content_promo',
  );

  // Exported permission: 'create promo content'.
  $permissions['create promo content'] = array(
    'name' => 'create promo content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any promo content'.
  $permissions['delete any promo content'] = array(
    'name' => 'delete any promo content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own promo content'.
  $permissions['delete own promo content'] = array(
    'name' => 'delete own promo content',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any promo content'.
  $permissions['edit any promo content'] = array(
    'name' => 'edit any promo content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own promo content'.
  $permissions['edit own promo content'] = array(
    'name' => 'edit own promo content',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
