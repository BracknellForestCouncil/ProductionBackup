<?php
/**
 * @file
 * localgov_feature_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_feature_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_feature_news'.
  $permissions['access localgov_feature_news'] = array(
    'name' => 'access localgov_feature_news',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_news',
  );

  // Exported permission: 'administer localgov_feature_news'.
  $permissions['administer localgov_feature_news'] = array(
    'name' => 'administer localgov_feature_news',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_feature_news',
  );

  return $permissions;
}
