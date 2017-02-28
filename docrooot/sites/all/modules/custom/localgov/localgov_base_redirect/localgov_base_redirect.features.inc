<?php
/**
 * @file
 * localgov_base_redirect.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_base_redirect_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
