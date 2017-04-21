<?php
/**
 * @file
 * bracknell_feature_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_feeds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bracknell_feature_feeds_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
