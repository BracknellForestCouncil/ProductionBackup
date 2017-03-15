<?php
/**
 * @file
 * localgov_feature_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function localgov_feature_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news_archive-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_archive-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news
news?*
news/*/*/*',
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
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
