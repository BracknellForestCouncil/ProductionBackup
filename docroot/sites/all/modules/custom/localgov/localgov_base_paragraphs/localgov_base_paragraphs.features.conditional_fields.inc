<?php
/**
 * @file
 * localgov_base_paragraphs.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function localgov_base_paragraphs_conditional_fields_default_fields() {
  $items = array();

  $items["paragraphs_item:grid_display:0"] = array(
    'entity' => 'paragraphs_item',
    'bundle' => 'grid_display',
    'dependent' => 'field_grid_display_title_level',
    'dependee' => 'field_grid_display_title',
    'options' => array(
      'state' => 'required',
      'condition' => '!empty',
      'grouping' => 'AND',
      'effect' => FALSE,
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        7 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        4 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
        6 => array(
          1 => 1,
          3 => 0,
        ),
        5 => array(
          1 => 1,
          3 => 0,
        ),
        7 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  return $items;
}
