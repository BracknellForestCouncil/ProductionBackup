<?php
/**
 * @file
 * bracknell_feature_directory.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bracknell_feature_directory_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'directory_entry-directory_entry-field_directory_address'.
  $field_instances['directory_entry-directory_entry-field_directory_address'] = array(
    'bundle' => 'directory_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'directory_entry',
    'field_name' => 'field_directory_address',
    'is_property' => FALSE,
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'directory_entry-directory_entry-field_directory_category'.
  $field_instances['directory_entry-directory_entry-field_directory_category'] = array(
    'bundle' => 'directory_entry',
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
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'directory_entry',
    'field_name' => 'field_directory_category',
    'is_property' => FALSE,
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'directory_entry-directory_entry-field_directory_directions'.
  $field_instances['directory_entry-directory_entry-field_directory_directions'] = array(
    'bundle' => 'directory_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'directory_entry',
    'field_name' => 'field_directory_directions',
    'is_property' => FALSE,
    'label' => 'Directions',
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
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'directory_entry-directory_entry-field_directory_location'.
  $field_instances['directory_entry-directory_entry-field_directory_location'] = array(
    'bundle' => 'directory_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'directory_entry',
    'field_name' => 'field_directory_location',
    'is_property' => FALSE,
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
      ),
      'type' => 'geofield_latlon',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'directory_entry-directory_entry-field_directory_phone'.
  $field_instances['directory_entry-directory_entry-field_directory_phone'] = array(
    'bundle' => 'directory_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'directory_entry',
    'field_name' => 'field_directory_phone',
    'is_property' => FALSE,
    'label' => 'Phone',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Category');
  t('Directions');
  t('Location');
  t('Phone');

  return $field_instances;
}
