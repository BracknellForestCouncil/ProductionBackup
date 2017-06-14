<?php
/**
 * @file
 * bracknell_entity_slogan.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bracknell_entity_slogan_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function bracknell_entity_slogan_eck_bundle_info() {
  $items = array(
    'slogan_slogan' => array(
      'machine_name' => 'slogan_slogan',
      'entity_type' => 'slogan',
      'name' => 'slogan',
      'label' => 'slogan',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function bracknell_entity_slogan_eck_entity_type_info() {
  $items = array(
    'slogan' => array(
      'name' => 'slogan',
      'label' => 'slogan',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
