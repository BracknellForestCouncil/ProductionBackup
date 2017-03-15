<?php
/**
 * @file
 * localgov_base_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_base_editor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
