<?php
/**
 * @file
 * localgov_content_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_basic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_basic_node_info() {
  $items = array(
    'basic' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Use for standard content pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use for standard content pages'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
