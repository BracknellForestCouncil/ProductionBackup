<?php
/**
 * @file
 * localgov_content_promo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_promo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_promo_node_info() {
  $items = array(
    'promo' => array(
      'name' => t('News Promo'),
      'base' => 'node_content',
      'description' => t('Use to promote an item to the homepage without a news story'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to promote an item to the homepage without a news story'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
