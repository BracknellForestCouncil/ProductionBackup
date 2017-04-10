<?php
/**
 * @file
 * bracknell_content_testimonial.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bracknell_content_testimonial_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-testimonial-body'.
  $field_instances['node-testimonial-body'] = array(
    'bundle' => 'testimonial',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 224,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => -9,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-testimonial-field_moderation'.
  $field_instances['node-testimonial-field_moderation'] = array(
    'bundle' => 'testimonial',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the team responsible for editing/moderating this content.',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -10,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
      'weight' => -10,
    ),
    'workbench_access_field' => 1,
  );

  // Exported field_instance: 'node-testimonial-field_testimonial_author'.
  $field_instances['node-testimonial-field_testimonial_author'] = array(
    'bundle' => 'testimonial',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -8,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_testimonial_author',
    'is_property' => 0,
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-testimonial-field_testimonial_image'.
  $field_instances['node-testimonial-field_testimonial_image'] = array(
    'bundle' => 'testimonial',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_testimonial_image',
    'is_property' => 0,
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
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
      'active' => 0,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'image' => 'image',
        ),
        'browser_plugins' => array(),
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
      'weight' => 35,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-testimonial-field_testimonial_job_title'.
  $field_instances['node-testimonial-field_testimonial_job_title'] = array(
    'bundle' => 'testimonial',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_testimonial_job_title',
    'is_property' => 0,
    'label' => 'Author Job Title',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-testimonial-field_testimonial_video'.
  $field_instances['node-testimonial-field_testimonial_video'] = array(
    'bundle' => 'testimonial',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'carousel_slide' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'youtube_autohide' => 0,
          'youtube_autoplay' => 0,
          'youtube_controls' => 0,
          'youtube_height' => '',
          'youtube_iv_load_policy' => 0,
          'youtube_loop' => 0,
          'youtube_showinfo' => 1,
          'youtube_size' => 'responsive',
          'youtube_width' => '',
        ),
        'type' => 'youtube_video',
        'weight' => -4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'youtube_autohide' => 0,
          'youtube_autoplay' => 0,
          'youtube_controls' => 0,
          'youtube_height' => '',
          'youtube_iv_load_policy' => 0,
          'youtube_loop' => 0,
          'youtube_showinfo' => 1,
          'youtube_size' => '420x315',
          'youtube_width' => '',
        ),
        'type' => 'youtube_video',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'youtube',
        'settings' => array(
          'youtube_autohide' => FALSE,
          'youtube_autoplay' => FALSE,
          'youtube_controls' => FALSE,
          'youtube_height' => NULL,
          'youtube_iv_load_policy' => FALSE,
          'youtube_loop' => FALSE,
          'youtube_showinfo' => FALSE,
          'youtube_size' => '420x315',
          'youtube_width' => NULL,
        ),
        'type' => 'youtube_video',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_testimonial_video',
    'is_property' => 0,
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'youtube',
      'settings' => array(),
      'type' => 'youtube',
      'weight' => 36,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author');
  t('Author Job Title');
  t('Body');
  t('Editorial Group');
  t('Image');
  t('Select the team responsible for editing/moderating this content.');
  t('Video');

  return $field_instances;
}
