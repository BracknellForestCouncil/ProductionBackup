<?php
/**
 * @file
 * localgov_feature_contactinfo.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function localgov_feature_contactinfo_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-contactinfo-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'contactinfo-block',
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
