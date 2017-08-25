<?php
/**
 * @file
 * localgov_content_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_content_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function localgov_content_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('Use to add a news story within the news section'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use to add a news story within the news section'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
