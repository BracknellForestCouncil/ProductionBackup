<?php
/**
 * @file
 * bracknell_feature_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
