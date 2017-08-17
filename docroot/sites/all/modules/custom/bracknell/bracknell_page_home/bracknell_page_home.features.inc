<?php
/**
 * @file
 * bracknell_page_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_page_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function bracknell_page_home_image_default_styles() {
  $styles = array();

  // Exported image style: home_feature.
  $styles['home_feature'] = array(
    'label' => 'home_feature',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 572,
          'height' => 381,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
