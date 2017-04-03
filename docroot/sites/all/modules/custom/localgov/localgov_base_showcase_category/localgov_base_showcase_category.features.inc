<?php
/**
 * @file
 * localgov_base_showcase_category.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function localgov_base_showcase_category_paragraphs_info() {
  $items = array(
    'category_showcase_item' => array(
      'name' => 'Category Showcase Item',
      'bundle' => 'category_showcase_item',
      'locked' => '1',
    ),
  );
  return $items;
}
