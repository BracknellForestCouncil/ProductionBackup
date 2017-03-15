<?php
/**
 * @file
 * localgov_feature_guide.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function localgov_feature_guide_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'guide_allowed_types';
  $strongarm->value = array(
    0 => 'guide',
    1 => 'guide_section',
  );
  $export['guide_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'guide_child_type';
  $strongarm->value = 'guide_section';
  $export['guide_child_type'] = $strongarm;

  return $export;
}
