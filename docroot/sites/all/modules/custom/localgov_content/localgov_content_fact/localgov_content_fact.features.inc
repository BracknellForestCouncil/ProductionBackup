<?php
/**
 * @file
 * localgov_content_fact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_fact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_fact_node_info() {
  $items = array(
    'fact' => array(
      'name' => t('Fact'),
      'base' => 'node_content',
      'description' => t('Key facts are displayed on the home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
