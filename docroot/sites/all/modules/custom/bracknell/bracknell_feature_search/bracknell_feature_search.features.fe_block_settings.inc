<?php
/**
 * @file
 * bracknell_feature_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bracknell_feature_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-search_page-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-search_page-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bracknell_theme_base' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bracknell_theme_base',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
