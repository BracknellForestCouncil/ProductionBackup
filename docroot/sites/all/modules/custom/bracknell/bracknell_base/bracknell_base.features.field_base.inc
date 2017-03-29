<?php
/**
 * @file
 * bracknell_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bracknell_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_related_pages_view'.
  $field_bases['field_related_pages_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_pages_view',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  return $field_bases;
}
