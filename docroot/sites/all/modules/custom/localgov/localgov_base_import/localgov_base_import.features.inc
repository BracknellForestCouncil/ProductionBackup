<?php
/**
 * @file
 * localgov_base_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_base_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
