<?php
/**
 * @file
 * bracknell_entity_external_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_entity_external_link_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bracknell_entity_external_link_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function bracknell_entity_external_link_eck_bundle_info() {
  $items = array(
    'external_link_external_link' => array(
      'machine_name' => 'external_link_external_link',
      'entity_type' => 'external_link',
      'name' => 'external_link',
      'label' => 'external link',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function bracknell_entity_external_link_eck_entity_type_info() {
  $items = array(
    'external_link' => array(
      'name' => 'external_link',
      'label' => 'external link',
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
        'uuid' => array(
          'label' => 'UUID',
          'type' => 'text',
          'behavior' => 'uuid',
        ),
      ),
    ),
  );
  return $items;
}
