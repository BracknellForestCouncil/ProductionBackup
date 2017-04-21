<?php
/**
 * @file
 * bracknell_feature_feeds.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bracknell_feature_feeds_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['aggregator-category-2'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'category-2',
    'module' => 'aggregator',
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
        'region' => '',
        'status' => 0,
        'theme' => 'bracknell_theme_base',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['aggregator-feed-2'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'feed-2',
    'module' => 'aggregator',
    'node_types' => array(),
    'pages' => 'consultations/current-consultations',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
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

  $export['views-consultations-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'consultations-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'consultations/current-consultations',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bracknell_theme_base' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bracknell_theme_base',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
