<?php
/**
 * @file
 * localgov_content_location.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function localgov_content_location_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-location-body'.
  $field_instances['node-location-body'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => -9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'General Information',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-location-field_location_accessibility'.
  $field_instances['node-location-field_location_accessibility'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter accessibility information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_accessibility',
    'is_property' => 0,
    'label' => 'Accessibility',
    'required' => 0,
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_activities'.
  $field_instances['node-location-field_location_activities'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter activities information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_activities',
    'is_property' => 0,
    'label' => 'Activities',
    'required' => 0,
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_additional'.
  $field_instances['node-location-field_location_additional'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter additional information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_additional',
    'is_property' => 0,
    'label' => 'Additional information',
    'required' => 0,
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_address'.
  $field_instances['node-location-field_location_address'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
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
    'field_name' => 'field_location_address',
    'is_property' => 0,
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'GB' => 'GB',
        ),
        'default_country' => 'GB',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 31,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_agesuitability'.
  $field_instances['node-location-field_location_agesuitability'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the age suitability for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
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
    'entity_type' => 'node',
    'field_name' => 'field_location_agesuitability',
    'is_property' => 0,
    'label' => 'Age Suitability',
    'required' => 0,
    'settings' => array(
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
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_area'.
  $field_instances['node-location-field_location_area'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter information about shops and facilities in the immediate area of this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_area',
    'is_property' => 0,
    'label' => 'Nearby shops',
    'required' => 0,
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
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_charges'.
  $field_instances['node-location-field_location_charges'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter charges information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_charges',
    'is_property' => 0,
    'label' => 'Charges',
    'required' => 0,
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
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_email'.
  $field_instances['node-location-field_location_email'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'email_default',
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
    'field_name' => 'field_location_email',
    'is_property' => 0,
    'label' => 'Email Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 29,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_equipment'.
  $field_instances['node-location-field_location_equipment'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter equipment information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_equipment',
    'is_property' => 0,
    'label' => 'Equipment',
    'required' => 0,
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
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_facilities'.
  $field_instances['node-location-field_location_facilities'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter facilities information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_facilities',
    'is_property' => 0,
    'label' => 'Facilities',
    'required' => 0,
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
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_fax'.
  $field_instances['node-location-field_location_fax'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_plain',
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
    'field_name' => 'field_location_fax',
    'is_property' => 0,
    'label' => 'Fax Number',
    'required' => 0,
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
      'weight' => 28,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_geolocation'.
  $field_instances['node-location-field_location_geolocation'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geolocation_googlemaps',
        'settings' => array(
          'map_height' => '450px',
          'map_imageformat' => 'png8',
          'map_maptype' => 'hybrid',
          'map_scrollwheel' => 0,
          'map_width' => '450px',
          'map_zoomlevel' => 12,
          'marker_icon' => '',
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'geolocation_googlemaps_dynamic',
        'weight' => -3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_geolocation',
    'is_property' => 0,
    'label' => 'Map',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geolocation_googlemaps',
      'settings' => array(
        'marker_draggable' => 1,
        'scrollwheel' => 0,
      ),
      'type' => 'geolocation_googlemap',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_headteacher'.
  $field_instances['node-location-field_location_headteacher'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the headteacher for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
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
    'entity_type' => 'node',
    'field_name' => 'field_location_headteacher',
    'is_property' => 0,
    'label' => 'Headteacher',
    'required' => 0,
    'settings' => array(
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
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_it'.
  $field_instances['node-location-field_location_it'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter IT facilities information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_it',
    'is_property' => 0,
    'label' => 'IT facilities',
    'required' => 0,
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
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_management'.
  $field_instances['node-location-field_location_management'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter management information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_management',
    'is_property' => 0,
    'label' => 'Management information',
    'required' => 0,
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
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_manager'.
  $field_instances['node-location-field_location_manager'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the manager for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
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
    'entity_type' => 'node',
    'field_name' => 'field_location_manager',
    'is_property' => 0,
    'label' => 'Manager',
    'required' => 0,
    'settings' => array(
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
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_openingtimes'.
  $field_instances['node-location-field_location_openingtimes'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter opening times information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_openingtimes',
    'is_property' => 0,
    'label' => 'Opening times',
    'required' => 0,
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
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_park_facilities'.
  $field_instances['node-location-field_location_park_facilities'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the facilities available at this park.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
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
    'field_name' => 'field_location_park_facilities',
    'is_property' => 0,
    'label' => 'Park Facilities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_parking'.
  $field_instances['node-location-field_location_parking'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter parking information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_parking',
    'is_property' => 0,
    'label' => 'Parking',
    'required' => 0,
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
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_parkingspaces'.
  $field_instances['node-location-field_location_parkingspaces'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter parking space information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_parkingspaces',
    'is_property' => 0,
    'label' => 'Parking spaces',
    'required' => 0,
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
      'weight' => 20,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_payment'.
  $field_instances['node-location-field_location_payment'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter payment information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_payment',
    'is_property' => 0,
    'label' => 'Payment options',
    'required' => 0,
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
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_schooltype'.
  $field_instances['node-location-field_location_schooltype'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the type of school.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
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
    'entity_type' => 'node',
    'field_name' => 'field_location_schooltype',
    'is_property' => 0,
    'label' => 'School Type',
    'required' => 0,
    'settings' => array(
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
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_security'.
  $field_instances['node-location-field_location_security'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter security information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_security',
    'is_property' => 0,
    'label' => 'Security',
    'required' => 0,
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
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_stock'.
  $field_instances['node-location-field_location_stock'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter stock information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_stock',
    'is_property' => 0,
    'label' => 'Stock facilities',
    'required' => 0,
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
      'weight' => 24,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_telephone'.
  $field_instances['node-location-field_location_telephone'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_plain',
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
    'field_name' => 'field_location_telephone',
    'is_property' => 0,
    'label' => 'Telephone Number',
    'required' => 0,
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
      'weight' => 27,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_travel'.
  $field_instances['node-location-field_location_travel'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter travel information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_travel',
    'is_property' => 0,
    'label' => 'Travel information',
    'required' => 0,
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
      'weight' => 25,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_type'.
  $field_instances['node-location-field_location_type'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_type',
    'is_property' => 0,
    'label' => 'Location Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_url'.
  $field_instances['node-location-field_location_url'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_url',
    'is_property' => 0,
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 30,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_location_wildlife'.
  $field_instances['node-location-field_location_wildlife'] = array(
    'bundle' => 'location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter wildlife information for this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_wildlife',
    'is_property' => 0,
    'label' => 'Wildlife information',
    'required' => 0,
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
      'weight' => 26,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-location-field_related'.
  $field_instances['node-location-field_related'] = array(
    'bundle' => 'location',
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
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibility');
  t('Activities');
  t('Additional information');
  t('Address');
  t('Age Suitability');
  t('Charges');
  t('Related Links');
  t('Email Address');
  t('Enter IT facilities information for this location.');
  t('Enter accessibility information for this location.');
  t('Enter activities information for this location.');
  t('Enter additional information for this location.');
  t('Enter charges information for this location.');
  t('Enter equipment information for this location.');
  t('Enter facilities information for this location.');
  t('Enter information about shops and facilities in the immediate area of this location.');
  t('Enter management information for this location.');
  t('Enter opening times information for this location.');
  t('Enter parking information for this location.');
  t('Enter parking space information for this location.');
  t('Enter payment information for this location.');
  t('Enter security information for this location.');
  t('Enter stock information for this location.');
  t('Enter the name of the age suitability for this location.');
  t('Enter the name of the headteacher for this location.');
  t('Enter the name of the manager for this location.');
  t('Enter the type of school.');
  t('Enter travel information for this location.');
  t('Enter wildlife information for this location.');
  t('Equipment');
  t('Facilities');
  t('Fax Number');
  t('General Information');
  t('Headteacher');
  t('IT facilities');
  t('Location Type');
  t('Management information');
  t('Manager');
  t('Map');
  t('Nearby shops');
  t('Opening times');
  t('Park Facilities');
  t('Parking');
  t('Parking spaces');
  t('Payment options');
  t('School Type');
  t('Security');
  t('Select the facilities available at this park.');
  t('Select the team responsible for editing/moderating this content.');
  t('Stock facilities');
  t('Telephone Number');
  t('Travel information');
  t('URL');
  t('Wildlife information');

  return $field_instances;
}
