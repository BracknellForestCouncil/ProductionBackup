<?php
/**
 * @file
 * localgov_content_easyread.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function localgov_content_easyread_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-easyread-field_category'.
  $field_instances['node-easyread-field_category'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'hidden',
        'weight' => 90,
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
      'weight' => -2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-easyread-field_contactinfo'.
  $field_instances['node-easyread-field_contactinfo'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select contact information to display on this page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 95,
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
      'weight' => 95,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-easyread-field_contactinfo_style'.
  $field_instances['node-easyread-field_contactinfo_style'] = array(
    'bundle' => 'easyread',
    'default_value' => array(
      0 => array(
        'value' => 'mini',
      ),
    ),
    'deleted' => 0,
    'description' => 'TODO: Add help text',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
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
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 96,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-easyread-field_description'.
  $field_instances['node-easyread-field_description'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This will be used as the page\'s description in search listings.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 98,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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

  // Exported field_instance: 'node-easyread-field_easyread_content'.
  $field_instances['node-easyread-field_easyread_content'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add "Easy Read" paragraphs.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_easyread_content',
    'is_property' => 0,
    'label' => 'Easy Read Content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'basic' => -1,
        'blockquote' => -1,
        'document' => -1,
        'easyread' => 'easyread',
        'highlighted' => -1,
        'link' => -1,
      ),
      'bundle_weights' => array(
        'basic' => 2,
        'blockquote' => 3,
        'document' => 4,
        'easyread' => 5,
        'highlighted' => 6,
        'link' => 7,
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-easyread-field_easyread_image'.
  $field_instances['node-easyread-field_easyread_image'] = array(
    'bundle' => 'easyread',
    'deleted' => 0,
    'description' => 'Add an image for this page. This will be used in search results and lists of Easy Read pages. ',
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
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_easyread_image',
    'is_property' => 0,
    'label' => 'Easy Read Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/easy-read',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-easyread-field_related'.
  $field_instances['node-easyread-field_related'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
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
      'weight' => 97,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-easyread-field_tags'.
  $field_instances['node-easyread-field_tags'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'hidden',
        'weight' => 90,
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
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-easyread-field_paragraph_body'.
  $field_instances['paragraphs_item-easyread-field_paragraph_body'] = array(
    'bundle' => 'easyread',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a short "Eas Read" paragraph.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_body',
    'is_property' => 0,
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
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
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'paragraphs_item-easyread-field_paragraph_easyread_image'.
  $field_instances['paragraphs_item-easyread-field_paragraph_easyread_image'] = array(
    'bundle' => 'easyread',
    'deleted' => 0,
    'description' => 'Upload an "Easy Read" image to accompany this paragraph.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph_easyread_image',
    'is_property' => 0,
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/easyread',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 0,
          's3' => 's3',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'localgov_document' => 0,
          'localgov_image' => 0,
          'localgov_image_easyread' => 'localgov_image_easyread',
          'localgov_image_header' => 0,
          'localgov_video' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add "Easy Read" paragraphs.');
  t('Add an image for this page. This will be used in search results and lists of Easy Read pages. ');
  t('Body');
  t('Category');
  t('Contact Information');
  t('Contact Information Style');
  t('Description');
  t('Easy Read Content');
  t('Easy Read Image');
  t('Enter a short "Eas Read" paragraph.');
  t('Image');
  t('Related Links');
  t('Select contact information to display on this page.');
  t('TODO: Add help text');
  t('TODO: Add help text.');
  t('Tags');
  t('This will be used as the page\'s description in search listings.');
  t('Upload an "Easy Read" image to accompany this paragraph.');

  return $field_instances;
}
