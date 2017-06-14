<?php

/**
 * @file
 * bracknell_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_pub_defaults().
 */
function bracknell_base_custom_pub_defaults() {
  $options = array();
  // Exported option: readspeak.
  $options['readspeak'] = array(
    'type' => 'readspeak',
    'name' => t('Readspeak Enabled'),
    'node_types' => array(
      'basic' => t('Basic Page'),
      'directory_landing_page' => t('Directory Landing Page'),
      'form' => t('Form Page'),
      'guide' => t('Guide'),
      'guide_section' => t('Guide Page'),
      'landing_page' => t('Landing Page'),
      'location_car_park' => t('Location - Car park'),
      'location_community' => t('Location - Community venue'),
      'location_leisure' => t('Location - Leisure site'),
      'location_library' => t('Location - Library'),
      'location_main' => t('Location - Main'),
      'location_park' => t('Location - Park'),
      'location_playground' => t('Location - Playground'),
      'location_school' => t('Location - School'),
      'location_council' => t('Location - Town or Parish council'),
      'miscellaneous' => t('Miscellaneous page'),
      'article' => t('News Article'),
      'promo' => t('News Promo'),
      'promotional_page' => t('Promotional Page'),
      'smallprint' => t('Smallprint Page'),
    ),
  );

  return $options;
}
