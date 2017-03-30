<?php
/**
 * @file
 * bracknell_feature_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function bracknell_feature_directory_eck_bundle_info() {
  $items = array(
    'directory_entry_directory_entry' => array(
      'machine_name' => 'directory_entry_directory_entry',
      'entity_type' => 'directory_entry',
      'name' => 'directory_entry',
      'label' => 'Directory entry',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function bracknell_feature_directory_eck_entity_type_info() {
  $items = array(
    'directory_entry' => array(
      'name' => 'directory_entry',
      'label' => 'Directory entry',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}
