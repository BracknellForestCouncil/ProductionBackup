<?php
/**
 * @file
 * bracknell_content_promotional_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_content_promotional_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bracknell_content_promotional_page_node_info() {
  $items = array(
    'promotional_page' => array(
      'name' => t('Promotional Page'),
      'base' => 'node_content',
      'description' => t('Use \'promotional page\' for displaying promotional content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
