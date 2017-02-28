<?php
/**
 * @file
 * localgov_content_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => 'TODO: Add content type description.',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => 'TODO: Add help for content type.',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
