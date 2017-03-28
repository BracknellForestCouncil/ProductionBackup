<?php
/**
 * @file
 * bracknell_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bracknell_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'directory_entry' => array(
      'address_only' => array(
        'label' => 'Address only',
        'custom settings' => 1,
      ),
      'address_with_phone' => array(
        'label' => 'Address with Phone',
        'custom settings' => 1,
      ),
      'location_overview_map' => array(
        'label' => 'Location rendered as overview map',
        'custom settings' => 1,
      ),
      'location_zoomed_map' => array(
        'label' => 'Location rendered as zoomed map',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
