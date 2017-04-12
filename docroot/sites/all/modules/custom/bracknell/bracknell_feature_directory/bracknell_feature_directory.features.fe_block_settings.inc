<?php
/**
 * @file
 * bracknell_feature_directory.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bracknell_feature_directory_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-directory_accessibility-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'directory_accessibility-block',
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
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-directory_address-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'directory_address-block',
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
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-directory_image-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'directory_image-block',
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
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
