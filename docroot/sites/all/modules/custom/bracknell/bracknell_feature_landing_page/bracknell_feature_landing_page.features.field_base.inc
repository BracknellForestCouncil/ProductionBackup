<?php
/**
 * @file
 * bracknell_feature_landing_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bracknell_feature_landing_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_theme'.
  $field_bases['field_theme'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_theme',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'default' => 'Default',
        'leisure-blue' => 'Leisure blue',
        'downshire-purple' => 'Downshire purple',
        'coral-reef-blue' => 'Coral reef blue',
        'discovery-green' => 'Discovery green',
        'parks-green' => 'Parks - Bright Green',
        'business' => 'Business',
        'fostering' => 'Fostering',
        'forestcare' => 'Forestcare',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
