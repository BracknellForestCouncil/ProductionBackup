<?php
/**
 * @file
 * localgov_content_contactinfo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_contactinfo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_contactinfo_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact Information'),
      'base' => 'node_content',
      'description' => t('TODO: Add content type description.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('TODO: Add help for content type.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
