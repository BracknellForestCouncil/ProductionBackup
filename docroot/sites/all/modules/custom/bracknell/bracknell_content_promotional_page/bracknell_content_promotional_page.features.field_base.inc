<?php
/**
 * @file
 * bracknell_content_promotional_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bracknell_content_promotional_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_promotional_content'.
  $field_bases['field_promotional_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_promotional_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_promotional_hero'.
  $field_bases['field_promotional_hero'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_promotional_hero',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_promotional_related_pages'.
  $field_bases['field_promotional_related_pages'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_promotional_related_pages',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entity_reference_multiple',
    'settings' => array(
      'target_entities_bundles' => array(
        'node' => array(
          'target_bundles' => array(
            'basic' => 'basic',
            'guide' => 'guide',
            'promotional_page' => 'promotional_page',
          ),
        ),
      ),
      'target_types' => array(
        'file' => 0,
        'node' => 'node',
        'paragraphs_item' => 0,
        'redirect' => 0,
        'slogan' => 0,
        'taxonomy_term' => 0,
        'taxonomy_vocabulary' => 0,
        'user' => 0,
        'workbench_moderation_transition' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'entity_reference_multiple',
  );

  // Exported field_base: 'field_promotional_slogan'.
  $field_bases['field_promotional_slogan'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_promotional_slogan',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'slogan' => 'slogan',
        ),
      ),
      'target_type' => 'slogan',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
