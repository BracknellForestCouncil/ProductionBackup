<?php
/**
 * @file
 * bracknell_content_promotional_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bracknell_content_promotional_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-promotional_page-field_category'.
  $field_instances['node-promotional_page-field_category'] = array(
    'bundle' => 'promotional_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_category',
    'is_property' => 0,
    'label' => 'Category',
    'required' => 0,
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promotional_page-field_moderation'.
  $field_instances['node-promotional_page-field_moderation'] = array(
    'bundle' => 'promotional_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the team responsible for editing/moderating this content.',
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
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
    'workbench_access_field' => 1,
  );

  // Exported field_instance: 'node-promotional_page-field_promotional_content'.
  $field_instances['node-promotional_page-field_promotional_content'] = array(
    'bundle' => 'promotional_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_promotional_content',
    'is_property' => 0,
    'label' => 'Content',
    'required' => 0,
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
        'document' => -1,
        'featured_box' => -1,
        'highlighted' => -1,
        'image' => -1,
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
        'map' => -1,
        'promotional_area' => -1,
        'tab_panel' => -1,
        'table' => -1,
        'tabs' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'accordion' => 2,
        'accordion_pane' => 3,
        'basic' => 4,
        'blockquote' => 5,
        'carousel' => 6,
        'carousel_slide' => 7,
        'category_showcase' => 8,
        'document' => 9,
        'featured_box' => 10,
        'highlighted' => 11,
        'image' => 12,
        'key_fact' => 13,
        'key_fact_item' => 14,
        'layout_1_col_12' => 15,
        'layout_2_col_4_8' => 16,
        'layout_2_col_6_6' => 17,
        'layout_2_col_8_4' => 18,
        'layout_3_col_3_3_6' => 19,
        'layout_3_col_4_4_4' => 20,
        'layout_3_col_6_3_3' => 21,
        'link' => 22,
        'map' => 23,
        'promotional_area' => 24,
        'tab_panel' => 27,
        'table' => 25,
        'tabs' => 26,
        'video' => 28,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promotional_page-field_promotional_hero'.
  $field_instances['node-promotional_page-field_promotional_hero'] = array(
    'bundle' => 'promotional_page',
    'deleted' => 0,
    'description' => 'The image at the top of the list will be shown on the page, any remaining images will only be shown in the gallery.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
          'localgov_image' => 'localgov_image',
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promotional_page-field_promotional_slogan'.
  $field_instances['node-promotional_page-field_promotional_slogan'] = array(
    'bundle' => 'promotional_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'full',
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
    'field_name' => 'field_promotional_slogan',
    'is_property' => 0,
    'label' => 'Slogan',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promotional_page-field_related_pages'.
  $field_instances['node-promotional_page-field_related_pages'] = array(
    'bundle' => 'promotional_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entity_reference_multiple',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entity_reference_multiple_label',
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
    'field_name' => 'field_related_pages',
    'is_property' => 0,
    'label' => 'Related Pages',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entity_reference_multiple',
      'settings' => array(
        'autocomplete_limit' => 15,
        'autocomplete_path' => '',
        'autocomplete_query_like_type' => 'STARTS_WITH',
      ),
      'type' => 'entity_reference_multiple_autocomplete',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promotional_page-field_related_pages_view'.
  $field_instances['node-promotional_page-field_related_pages_view'] = array(
    'bundle' => 'promotional_page',
    'default_value' => array(
      0 => array(
        'vname' => 'localgov_base_taxonomy_node|block_1',
        'vargs' => '[node:field-category:tid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_pages_view',
    'is_property' => 0,
    'label' => 'Related Pages View',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_file' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'administration_external_links' => 0,
        'administration_slogans' => 0,
        'contactinfo' => 0,
        'help' => 0,
        'home_feature' => 0,
        'home_keyfact' => 0,
        'localgov_base_admin_node' => 0,
        'localgov_base_file_administration' => 0,
        'localgov_base_moderation_content' => 0,
        'localgov_base_taxonomy_children' => 0,
        'localgov_base_taxonomy_node' => 'localgov_base_taxonomy_node',
        'localgov_base_weight_node' => 0,
        'localgov_base_weight_taxonomy' => 0,
        'media_default' => 0,
        'news' => 0,
        'news_archive' => 0,
        'related_links_node' => 0,
        'related_links_taxonomy_' => 0,
        'search_page' => 0,
        'workbench_access_content' => 0,
        'workbench_current_user' => 0,
        'workbench_edited' => 0,
        'workbench_moderation' => 0,
        'workbench_recent_content' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Content');
  t('Editorial Group');
  t('Promotional Hero');
  t('Related Pages');
  t('Related Pages View');
  t('Select the team responsible for editing/moderating this content.');
  t('Slogan');
  t('The image at the top of the list will be shown on the page, any remaining images will only be shown in the gallery.');

  return $field_instances;
}
