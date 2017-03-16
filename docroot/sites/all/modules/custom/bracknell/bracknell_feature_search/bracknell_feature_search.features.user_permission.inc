<?php
/**
 * @file
 * bracknell_feature_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer search_api_exclude'.
  $permissions['administer search_api_exclude'] = array(
    'name' => 'administer search_api_exclude',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'search_api_exclude',
  );

  // Exported permission: 'use search_api_autocomplete for search_api_views_search_page'.
  $permissions['use search_api_autocomplete for search_api_views_search_page'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_search_page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
