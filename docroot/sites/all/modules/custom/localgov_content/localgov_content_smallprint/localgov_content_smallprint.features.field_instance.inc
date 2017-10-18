<?php
/**
 * @file
 * localgov_content_smallprint.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function localgov_content_smallprint_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-smallprint-field_contactinfo'.
  $field_instances['node-smallprint-field_contactinfo'] = array(
    'bundle' => 'smallprint',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select contact information to display on this page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contactinfo',
    'is_property' => 0,
    'label' => 'Contact Information',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-smallprint-field_contactinfo_style'.
  $field_instances['node-smallprint-field_contactinfo_style'] = array(
    'bundle' => 'smallprint',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contactinfo_style',
    'is_property' => 0,
    'label' => 'Contact Information Style',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-smallprint-field_content'.
  $field_instances['node-smallprint-field_content'] = array(
    'bundle' => 'smallprint',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content',
    'is_property' => 0,
    'label' => 'Content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'accordion' => -1,
        'accordion_pane' => -1,
        'basic' => -1,
        'blockquote' => -1,
        'carousel' => -1,
        'carousel_slide' => -1,
        'category_showcase' => -1,
        'category_showcase_item' => -1,
        'document' => -1,
        'featured_box' => -1,
        'grid_display' => -1,
        'grid_display_item' => -1,
        'highlighted' => -1,
        'image' => -1,
        'key_contact' => -1,
        'key_contact_item' => -1,
        'key_fact' => -1,
        'key_fact_item' => -1,
        'layout_1_col_12' => 'layout_1_col_12',
        'layout_2_col_4_8' => 'layout_2_col_4_8',
        'layout_2_col_6_6' => 'layout_2_col_6_6',
        'layout_2_col_8_4' => 'layout_2_col_8_4',
        'layout_3_col_3_3_6' => 'layout_3_col_3_3_6',
        'layout_3_col_4_4_4' => 'layout_3_col_4_4_4',
        'layout_3_col_6_3_3' => 'layout_3_col_6_3_3',
        'link' => -1,
        'promotional_area' => -1,
        'tab_panel' => -1,
        'table' => -1,
        'tabs' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'accordion' => 2,
        'accordion_pane' => 3,
        'basic' => -16,
        'blockquote' => -15,
        'carousel' => 6,
        'carousel_slide' => 7,
        'category_showcase' => 8,
        'category_showcase_item' => 9,
        'document' => -14,
        'featured_box' => 11,
        'grid_display' => 12,
        'grid_display_item' => 13,
        'highlighted' => -12,
        'image' => -11,
        'key_contact' => 16,
        'key_contact_item' => 17,
        'key_fact' => 18,
        'key_fact_item' => 19,
        'layout_1_col_12' => 20,
        'layout_2_col_4_8' => 21,
        'layout_2_col_6_6' => 22,
        'layout_2_col_8_4' => 23,
        'layout_3_col_3_3_6' => 24,
        'layout_3_col_4_4_4' => 25,
        'layout_3_col_6_3_3' => 26,
        'link' => -10,
        'promotional_area' => 28,
        'tab_panel' => 31,
        'table' => -9,
        'tabs' => 30,
        'video' => 32,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-smallprint-field_description'.
  $field_instances['node-smallprint-field_description'] = array(
    'bundle' => 'smallprint',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a description of the page to be used in search results and list of pages.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'is_property' => 0,
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-smallprint-field_moderation'.
  $field_instances['node-smallprint-field_moderation'] = array(
    'bundle' => 'smallprint',
    'default_value' => array(
      0 => array(
        'tid' => 7,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the team responsible for editing/moderating this content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_moderation',
    'is_property' => 1,
    'label' => 'Editorial Group',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -10,
    ),
    'workbench_access_field' => TRUE,
  );

  // Exported field_instance: 'node-smallprint-field_related'.
  $field_instances['node-smallprint-field_related'] = array(
    'bundle' => 'smallprint',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'is_property' => 0,
    'label' => 'Related Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'rel_remove_internal',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-smallprint-field_tags'.
  $field_instances['node-smallprint-field_tags'] = array(
    'bundle' => 'smallprint',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-smallprint-field_weight'.
  $field_instances['node-smallprint-field_weight'] = array(
    'bundle' => 'smallprint',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_weight',
    'is_property' => 0,
    'label' => 'Weight',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a description of the page to be used in search results and list of pages.');
  t('Contact Information');
  t('Contact Information Style');
  t('Content');
  t('Description');
  t('Editorial Group');
  t('Related Links');
  t('Select contact information to display on this page.');
  t('Select the team responsible for editing/moderating this content.');
  t('TODO: Add help text.');
  t('Tags');
  t('Weight');

  return $field_instances;
}
