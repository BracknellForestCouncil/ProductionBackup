<?php
/**
 * @file
 * bracknell_feature_landing_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bracknell_feature_landing_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing_page-body'.
  $field_instances['node-landing_page-body'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => -9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_category'.
  $field_instances['node-landing_page-field_category'] = array(
    'bundle' => 'landing_page',
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
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing_page-field_moderation'.
  $field_instances['node-landing_page-field_moderation'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the team responsible for editing/moderating this content.',
    'display' => array(
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
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
    'workbench_access_field' => 1,
  );

  // Exported field_instance: 'node-landing_page-field_node_display_title'.
  $field_instances['node-landing_page-field_node_display_title'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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

  // Exported field_instance: 'node-landing_page-field_related_links'.
  $field_instances['node-landing_page-field_related_links'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_related_links',
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
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing_page-field_related_links_view'.
  $field_instances['node-landing_page-field_related_links_view'] = array(
    'bundle' => 'landing_page',
    'default_value' => array(
      0 => array(
        'vname' => 'related_links_taxonomy_|block',
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
    'field_name' => 'field_related_links_view',
    'is_property' => 0,
    'label' => 'Related Links View',
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
        'localgov_base_taxonomy_node' => 0,
        'localgov_base_weight_node' => 0,
        'localgov_base_weight_taxonomy' => 0,
        'media_default' => 0,
        'news' => 0,
        'news_archive' => 0,
        'related_links_node' => 0,
        'related_links_taxonomy_' => 'related_links_taxonomy_',
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
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing_page-field_related_pages'.
  $field_instances['node-landing_page-field_related_pages'] = array(
    'bundle' => 'landing_page',
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing_page-field_related_pages_view'.
  $field_instances['node-landing_page-field_related_pages_view'] = array(
    'bundle' => 'landing_page',
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-landing_page-field_top_tasks'.
  $field_instances['node-landing_page-field_top_tasks'] = array(
    'bundle' => 'landing_page',
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
    'field_name' => 'field_top_tasks',
    'is_property' => 0,
    'label' => 'Top Tasks',
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Category');
  t('Display title');
  t('Editorial Group');
  t('Related Links');
  t('Related Links View');
  t('Related Pages');
  t('Related Pages View');
  t('Select the team responsible for editing/moderating this content.');
  t('Top Tasks');

  return $field_instances;
}
