<?php
/**
 * @file
 * localgov_feature_landingpage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function localgov_feature_landingpage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  return $export;
}
