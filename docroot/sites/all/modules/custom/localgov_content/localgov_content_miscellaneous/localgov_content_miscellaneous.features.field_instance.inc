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
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => -6,
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => -5,
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
        'weight' => -8,
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
        'basic' => 'basic',
        'blockquote' => 'blockquote',
        'document' => 'document',
        'highlighted' => 'highlighted',
        'image' => 'image',
        'link' => 'link',
        'table' => 'table',
      ),
      'bundle_weights' => array(
        'basic' => 2,
        'blockquote' => 3,
        'document' => 4,
        'highlighted' => 5,
        'image' => 6,
        'link' => 7,
        'table' => 8,
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
        'weight' => -9,
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
        'weight' => -7,
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
  t('TODO: Add help text.');
  t('Weight');

  return $field_instances;
}
