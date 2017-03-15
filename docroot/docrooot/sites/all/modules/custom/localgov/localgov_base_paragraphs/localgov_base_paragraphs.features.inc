<?php
/**
 * @file
 * localgov_base_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_base_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function localgov_base_paragraphs_paragraphs_info() {
  $items = array(
    'basic' => array(
      'name' => 'Basic',
      'bundle' => 'basic',
      'locked' => '1',
    ),
    'blockquote' => array(
      'name' => 'Blockquote',
      'bundle' => 'blockquote',
      'locked' => '1',
    ),
    'document' => array(
      'name' => 'Document',
      'bundle' => 'document',
      'locked' => '1',
    ),
    'highlighted' => array(
      'name' => 'Highlighted',
      'bundle' => 'highlighted',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'link' => array(
      'name' => 'Link',
      'bundle' => 'link',
      'locked' => '1',
    ),
    'table' => array(
      'name' => 'Table',
      'bundle' => 'table',
      'locked' => '1',
    ),
  );
  return $items;
}
