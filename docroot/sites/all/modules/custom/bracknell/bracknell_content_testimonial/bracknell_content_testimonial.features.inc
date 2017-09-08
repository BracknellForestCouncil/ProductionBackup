<?php
/**
 * @file
 * bracknell_content_testimonial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_content_testimonial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bracknell_content_testimonial_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Use to add content for use in a carousel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add content for use in a carousel'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
