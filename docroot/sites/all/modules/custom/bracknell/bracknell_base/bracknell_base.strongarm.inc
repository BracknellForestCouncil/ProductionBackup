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
    'node' => array(
      'carousel_slide' => array(
        'label' => 'Carousel slide',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
