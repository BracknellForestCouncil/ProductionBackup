<?php
/**
 * @file
 * bracknell_feature_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bracknell_feature_landing_page_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('Use to create landing pages for sections of the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to create landing pages for sections of the site'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
