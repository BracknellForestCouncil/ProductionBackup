<?php
/**
 * @file
 * bracknell_feature_twitter.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bracknell_feature_twitter_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-bracknell_twitter'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bracknell_twitter',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'news
news/*',
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
        'weight' => -12,
      ),
    ),
    'title' => 'Twitter',
    'visibility' => 1,
  );

  return $export;
}
