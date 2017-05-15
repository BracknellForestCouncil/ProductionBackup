<?php
/**
 * @file
 * bracknell_feature_directory.entity.inc
 */

/**
 * Implements hook_entity_view_mode_info().
 */
function bracknell_feature_directory_entity_view_mode_info() {
  $info = array();

  $info['directory_entry']['address_only'] = array(
    'label' => 'Address only',
    'custom settings' => 1,
  );

  $info['directory_entry']['address_with_phone'] = array(
    'label' => 'Address with Phone',
    'custom settings' => 1,
  );

  $info['directory_entry']['directions'] = array(
    'label' => 'Directions',
    'custom settings' => 1,
  );

  $info['directory_entry']['location_overview_map'] = array(
    'label' => 'Location rendered as overview map',
    'custom settings' => 1,
  );

  $info['directory_entry']['location_zoomed_map'] = array(
    'label' => 'Location rendered as zoomed map',
    'custom settings' => 1,
  );

  return $info;
}
