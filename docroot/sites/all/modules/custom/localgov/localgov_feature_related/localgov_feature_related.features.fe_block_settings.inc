<?php
/**
 * @file
 * localgov_feature_related.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function localgov_feature_related_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-related_links_node-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_links_node-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bracknell_theme_base' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bracknell_theme_base',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
