<?php
/**
 * @file
 * localgov_content_guidesection.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function localgov_content_guidesection_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_node_display_title'.
  $field_bases['field_node_display_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_display_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'no_ui' => TRUE,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
