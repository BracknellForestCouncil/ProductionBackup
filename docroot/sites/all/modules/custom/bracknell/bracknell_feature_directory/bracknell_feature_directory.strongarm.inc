<?php
/**
 * @file
 * bracknell_feature_directory.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bracknell_feature_directory_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_directory_entry__directory_entry';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_directory_entry__directory_entry'] = $strongarm;

  return $export;
}
