<?php
/**
 * @file
 * localgov_content_guidesection.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function localgov_content_guidesection_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-guide_section-field_category'.
  $field_instances['node-guide_section-field_category'] = array(
    'bundle' => 'guide_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'weight' => 90,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'is_property' => 0,
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-guide_section-field_contactinfo'.
  $field_instances['node-guide_section-field_contactinfo'] = array(
    'bundle' => 'guide_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select contact information to display on this page.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => TRUE,
          'use_content_language' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
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

  // Exported field_instance: 'node-guide_section-field_contactinfo_style'.
  $field_instances['node-guide_section-field_contactinfo_style'] = array(
    'bundle' => 'guide_section',
    'default_value' => array(
      0 => array(
        'value' => 'mini',
      ),
    ),
    'deleted' => 0,
    'description' => 'TODO: Add help text',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
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
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-guide_section-field_content'.
  $field_instances['node-guide_section-field_content'] = array(
    'bundle' => 'guide_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'grid_display' => 41,
        'grid_display_item' => 42,
        'highlighted' => -12,
        'image' => -11,
        'key_contact' => 45,
        'key_contact_item' => 46,
        'key_fact' => 14,
        'key_fact_item' => 15,
        'layout_1_col_12' => 16,
        'layout_2_col_4_8' => 17,
        'layout_2_col_6_6' => 18,
        'layout_2_col_8_4' => 19,
        'layout_3_col_3_3_6' => 20,
        'layout_3_col_4_4_4' => 21,
        'layout_3_col_6_3_3' => 22,
        'link' => -10,
        'promotional_area' => 25,
        'tab_panel' => 28,
        'table' => -9,
        'tabs' => 27,
        'video' => 29,
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-guide_section-field_moderation'.
  $field_instances['node-guide_section-field_moderation'] = array(
    'bundle' => 'guide_section',
    'default_value' => array(
      0 => array(
        'tid' => 7,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the team responsible for editing/moderating this content.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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

  // Exported field_instance: 'node-guide_section-field_node_display_title'.
  $field_instances['node-guide_section-field_node_display_title'] = array(
    'bundle' => 'guide_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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

  // Exported field_instance: 'node-guide_section-field_promotional_hero'.
  $field_instances['node-guide_section-field_promotional_hero'] = array(
    'bundle' => 'guide_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_promotional_hero',
    'is_property' => 0,
    'label' => 'Promotional Hero',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          's3' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'localgov_document' => 0,
          'localgov_image' => 0,
          'localgov_image_header' => 0,
          'localgov_video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => FALSE,
      ),
      'type' => 'media_generic',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-guide_section-field_related'.
  $field_instances['node-guide_section-field_related'] = array(
    'bundle' => 'guide_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
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
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
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
        'urls_allowed' => 'internal',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-guide_section-field_tags'.
  $field_instances['node-guide_section-field_tags'] = array(
    'bundle' => 'guide_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'weight' => 90,
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
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Contact Information');
  t('Contact Information Style');
  t('Content');
  t('Display title');
  t('Editorial Group');
  t('Promotional Hero');
  t('Related Links');
  t('Select contact information to display on this page.');
  t('Select the team responsible for editing/moderating this content.');
  t('TODO: Add help text');
  t('TODO: Add help text.');
  t('Tags');

  return $field_instances;
}
