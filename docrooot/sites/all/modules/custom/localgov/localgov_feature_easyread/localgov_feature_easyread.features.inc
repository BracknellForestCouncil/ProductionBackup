<?php
/**
 * @file
 * localgov_feature_easyread.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_feature_easyread_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
