<?php
/**
 * @file
 * bracknell_feature_beta.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bracknell_feature_beta_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-beta_message'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'beta_message',
    'module' => 'block',
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'bracknell_theme_base',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
