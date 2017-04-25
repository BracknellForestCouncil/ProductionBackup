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
  $strongarm->name = 'custom_pub_types';
  $strongarm->value = array(
    'readspeak' => array(
      'type' => 'readspeak',
      'name' => 'Readspeak Enabled',
      'node_types' => array(
        'basic' => 'Basic Page',
        'form' => 'Form Page',
        'guide' => 'Guide',
        'guide_section' => 'Guide Page',
        'landing_page' => 'Landing Page',
        'location_car_park' => 'Location - Car park',
        'location_community' => 'Location - Community venue',
        'location_leisure' => 'Location - Leisure site',
        'location_library' => 'Location - Library',
        'location_main' => 'Location - Main',
        'location_park' => 'Location - Park',
        'location_playground' => 'Location - Playground',
        'location_school' => 'Location - School',
        'location_council' => 'Location - Town or Parish council',
        'miscellaneous' => 'Miscellaneous page',
        'article' => 'News Article',
        'promo' => 'News Promo',
        'promotional_page' => 'Promotional Page',
        'smallprint' => 'Smallprint Page',
      ),
    ),
  );
  $export['custom_pub_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eck_clear_caches';
  $strongarm->value = FALSE;
  $export['eck_clear_caches'] = $strongarm;

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

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_display_title_settings';
  $strongarm->value = array(
    0 => 'landing_page',
    1 => 'promotional_page',
    2 => 'article',
    3 => 'form',
    4 => 'promo',
    5 => 'guide',
    6 => 'miscellaneous',
    7 => 'location_car_park',
    8 => 'location_community',
    9 => 'location_council',
    10 => 'location_leisure',
    11 => 'location_library',
    12 => 'location_main',
    13 => 'location_park',
    14 => 'location_playground',
    15 => 'location_school',
    16 => 'contact',
    17 => 'basic',
    18 => 'guide_section',
    19 => 'fact',
  );
  $export['node_display_title_settings'] = $strongarm;

  return $export;
}
