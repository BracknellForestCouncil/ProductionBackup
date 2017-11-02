<?php
/**
 * @file
 * localgov_content_guidesection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_guidesection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_guidesection_node_info() {
  $items = array(
    'guide_section' => array(
      'name' => t('Guide Page'),
      'base' => 'node_content',
      'description' => t('Use to create a page within a guide'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to create a page within a guide'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
