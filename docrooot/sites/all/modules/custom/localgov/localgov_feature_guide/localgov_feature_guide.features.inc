<?php
/**
 * @file
 * localgov_feature_guide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_feature_guide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
