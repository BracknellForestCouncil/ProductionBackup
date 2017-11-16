<?php
/**
 * @file
 * localgov_content_miscellaneous.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function localgov_content_miscellaneous_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-miscellaneous-field_contactinfo'.
  $field_instances['node-miscellaneous-field_contactinfo'] = array(
    'bundle' => 'miscellaneous',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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

  // Exported field_instance: 'node-miscellaneous-field_contactinfo_style'.
  $field_instances['node-miscellaneous-field_contactinfo_style'] = array(
    'bundle' => 'miscellaneous',
    'default_value' => array(
      0 => array(
        'value' => 'mini',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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

  // Exported field_instance: 'node-miscellaneous-field_content'.
  $field_instances['node-miscellaneous-field_content'] = array(
    'bundle' => 'miscellaneous',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add content for this page.',
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
        'weight' => 0,
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
        'accordion' => 10,
        'accordion_pane' => 11,
        'basic' => 2,
        'blockquote' => 3,
        'carousel' => 14,
        'carousel_slide' => 15,
        'category_showcase' => 16,
        'category_showcase_item' => 17,
        'document' => 4,
        'featured_box' => 19,
        'grid_display' => 20,
        'grid_display_item' => 21,
        'highlighted' => 5,
        'image' => 6,
        'key_contact' => 24,
        'key_contact_item' => 25,
        'key_fact' => 26,
        'key_fact_item' => 27,
        'layout_1_col_12' => 28,
        'layout_2_col_4_8' => 29,
        'layout_2_col_6_6' => 30,
        'layout_2_col_8_4' => 31,
        'layout_3_col_3_3_6' => 32,
        'layout_3_col_4_4_4' => 33,
        'layout_3_col_6_3_3' => 34,
        'link' => 7,
        'promotional_area' => 36,
        'tab_panel' => 39,
        'table' => 8,
        'tabs' => 38,
        'video' => 40,
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-miscellaneous-field_description'.
  $field_instances['node-miscellaneous-field_description'] = array(
    'bundle' => 'miscellaneous',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a description to be used in search results and lists of pages.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-miscellaneous-field_moderation'.
  $field_instances['node-miscellaneous-field_moderation'] = array(
    'bundle' => 'miscellaneous',
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

  // Exported field_instance: 'node-miscellaneous-field_node_display_title'.
  $field_instances['node-miscellaneous-field_node_display_title'] = array(
    'bundle' => 'miscellaneous',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_node_display_title',
    'label' => 'Display title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-miscellaneous-field_weight'.
  $field_instances['node-miscellaneous-field_weight'] = array(
    'bundle' => 'miscellaneous',
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
        'weight' => 5,
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
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a description to be used in search results and lists of pages.');
  t('Add content for this page.');
  t('Contact Information');
  t('Contact Information Style');
  t('Content');
  t('Description');
  t('Display title');
  t('Editorial Group');
  t('Select the team responsible for editing/moderating this content.');
  t('TODO: Add help text.');
  t('Weight');

  return $field_instances;
}
