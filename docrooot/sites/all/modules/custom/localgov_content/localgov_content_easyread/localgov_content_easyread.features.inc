<?php
/**
 * @file
 * localgov_content_easyread.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_easyread_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_easyread_node_info() {
  $items = array(
    'easyread' => array(
      'name' => t('Easy Read Page'),
      'base' => 'node_content',
      'description' => t('TODO: Add content type description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('TODO: Add help for content type.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function localgov_content_easyread_paragraphs_info() {
  $items = array(
    'easyread' => array(
      'name' => 'Easy Read Paragraph',
      'bundle' => 'easyread',
      'locked' => '1',
    ),
  );
  return $items;
}
