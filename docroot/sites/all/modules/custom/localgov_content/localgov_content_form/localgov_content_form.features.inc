<?php
/**
 * @file
 * localgov_content_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_form_node_info() {
  $items = array(
    'form' => array(
      'name' => t('Form Page'),
      'base' => 'node_content',
      'description' => t('Use to create form start page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to create form start page'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
