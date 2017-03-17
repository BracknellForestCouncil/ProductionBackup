<?php
/**
 * @file
 * bracknell_entity_slogan.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bracknell_entity_slogan_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'slogan-slogan-field_slogan_call_to_action'.
  $field_instances['slogan-slogan-field_slogan_call_to_action'] = array(
    'bundle' => 'slogan',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'slogan',
    'field_name' => 'field_slogan_call_to_action',
    'is_property' => FALSE,
    'label' => 'Link',
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
      'enable_tokens' => 0,
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
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'slogan-slogan-field_slogan_image'.
  $field_instances['slogan-slogan-field_slogan_image'] = array(
    'bundle' => 'slogan',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'slogan',
    'field_name' => 'field_slogan_image',
    'is_property' => FALSE,
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 's3fs_cors',
      'settings' => array(),
      'type' => 's3fs_cors',
      'weight' => 33,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'slogan-slogan-field_slogan_strapline'.
  $field_instances['slogan-slogan-field_slogan_strapline'] = array(
    'bundle' => 'slogan',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'slogan',
    'field_name' => 'field_slogan_strapline',
    'is_property' => FALSE,
    'label' => 'Strapline',
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
      'weight' => 31,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link');
  t('Logo');
  t('Strapline');

  return $field_instances;
}
