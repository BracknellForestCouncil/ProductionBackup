<?php
/**
 * @file
 * bracknell_feature_feeds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bracknell_feature_feeds_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aggregator_allowed_html_tags';
  $strongarm->value = '<a> <b> <br> <dd> <dl> <dt> <em> <i> <li> <ol> <p> <strong> <u> <ul>';
  $export['aggregator_allowed_html_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aggregator_category_selector';
  $strongarm->value = 'checkboxes';
  $export['aggregator_category_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aggregator_clear';
  $strongarm->value = '0';
  $export['aggregator_clear'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aggregator_parser';
  $strongarm->value = 'bracknell_feeds';
  $export['aggregator_parser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aggregator_summary_items';
  $strongarm->value = '20';
  $export['aggregator_summary_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aggregator_teaser_length';
  $strongarm->value = '600';
  $export['aggregator_teaser_length'] = $strongarm;

  return $export;
}
