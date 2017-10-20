<?php
/**
 * @file
 * localgov_content_miscellaneous.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_miscellaneous_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_miscellaneous_node_info() {
  $items = array(
    'miscellaneous' => array(
      'name' => t('Miscellaneous page'),
      'base' => 'node_content',
      'description' => t('Use only where no other page type is appropriate'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use only where no other page type is appropriate'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
