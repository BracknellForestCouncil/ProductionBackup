<?php
/**
 * @file
 * bracknell_feature_townandcountry.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bracknell_feature_townandcountry_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-bracknell_townandcountry'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'bracknell_townandcountry',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'bracknell_theme_base' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bracknell_theme_base',
        'weight' => 0,
      ),
    ),
    'title' => 'Town & Country',
    'visibility' => 1,
  );

  return $export;
}
