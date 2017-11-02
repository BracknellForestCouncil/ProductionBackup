<?php
/**
 * @file
 * bracknell_feature_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bracknell_feature_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function bracknell_feature_directory_eck_bundle_info() {
  $items = array(
    'directory_entry_directory_entry' => array(
      'machine_name' => 'directory_entry_directory_entry',
      'entity_type' => 'directory_entry',
      'name' => 'directory_entry',
      'label' => 'directory entry',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function bracknell_feature_directory_eck_entity_type_info() {
  $items = array(
    'directory_entry' => array(
      'name' => 'directory_entry',
      'label' => 'directory entry',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function bracknell_feature_directory_node_info() {
  $items = array(
    'directory_landing_page' => array(
      'name' => t('Directory Landing Page'),
      'base' => 'node_content',
      'description' => t('Use for displaying lists of directory information for a particular location type e.g. all schools'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use for displaying lists of directory information for a particular location type e.g. all schools'),
    ),
    'location_car_park' => array(
      'name' => t('Location - Car park'),
      'base' => 'node_content',
      'description' => t('Use to add a car park directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add a car park directory listing'),
    ),
    'location_community' => array(
      'name' => t('Location - Community venue'),
      'base' => 'node_content',
      'description' => t('Use to add a community venue directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add a community venue directory listing'),
    ),
    'location_council' => array(
      'name' => t('Location - Town or Parish council'),
      'base' => 'node_content',
      'description' => t('Use to add a council directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add a council directory listing'),
    ),
    'location_leisure' => array(
      'name' => t('Location - Leisure site'),
      'base' => 'node_content',
      'description' => t('Use to add a leisure service directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add a leisure service directory listing'),
    ),
    'location_library' => array(
      'name' => t('Location - Library'),
      'base' => 'node_content',
      'description' => t('Use to add a library directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add a library directory listing'),
    ),
    'location_main' => array(
      'name' => t('Location - Main'),
      'base' => 'node_content',
      'description' => t('Use where a specific location type does not apply, e.g. offices'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use where a specific location type does not apply, e.g.offices'),
    ),
    'location_park' => array(
      'name' => t('Location - Park'),
      'base' => 'node_content',
      'description' => t('Use to add parks to visit pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add parks to visit pages'),
    ),
    'location_playground' => array(
      'name' => t('Location - Playground'),
      'base' => 'node_content',
      'description' => t('Use to add playgrounds to directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add playgrounds to directory listing'),
    ),
    'location_school' => array(
      'name' => t('Location - School'),
      'base' => 'node_content',
      'description' => t('Use to add schools to directory listing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add schools to directory listing'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
