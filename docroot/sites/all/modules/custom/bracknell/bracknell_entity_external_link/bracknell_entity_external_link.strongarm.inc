<?php
/**
 * @file
 * bracknell_entity_external_link.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bracknell_entity_external_link_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_external_link__external_link';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_external_link__external_link'] = $strongarm;

  return $export;
}
