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

  // Exported field_base: 'field_related_links'.
  $field_bases['field_related_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_links',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_related_pages'.
  $field_bases['field_related_pages'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_pages',
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
            'landing_page' => 'landing_page',
          ),
        ),
      ),
      'target_types' => array(
        'file' => 0,
        'node' => 'node',
        'paragraphs_item' => 0,
        'redirect' => 0,
        'taxonomy_term' => 0,
        'taxonomy_vocabulary' => 0,
        'user' => 0,
        'workbench_moderation_transition' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'entity_reference_multiple',
  );

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

  // Exported field_base: 'field_top_tasks'.
  $field_bases['field_top_tasks'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_top_tasks',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entity_reference_multiple',
    'settings' => array(
      'target_entities_bundles' => array(
        'external_link' => array(
          'target_bundles' => array(
            'external_link' => 'external_link',
          ),
        ),
        'node' => array(
          'target_bundles' => array(
            'basic' => 'basic',
            'form' => 'form',
            'guide' => 'guide',
            'landing_page' => 'landing_page',
            'miscellaneous' => 'miscellaneous',
            'promotional_page' => 'promotional_page',
          ),
        ),
      ),
      'target_types' => array(
        'external_link' => 'external_link',
        'file' => 0,
        'node' => 'node',
        'paragraphs_item' => 0,
        'redirect' => 0,
        'search_api_autocomplete_search' => 0,
        'search_api_index' => 0,
        'search_api_server' => 0,
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

  return $field_bases;
}
