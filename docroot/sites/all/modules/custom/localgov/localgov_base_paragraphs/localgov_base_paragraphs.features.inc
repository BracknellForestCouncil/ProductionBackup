<?php
/**
 * @file
 * localgov_base_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localgov_base_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function localgov_base_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: category_showcase.
  $styles['category_showcase'] = array(
    'label' => 'Category Showcase',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 370,
          'height' => 247,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'category_showcase',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function localgov_base_paragraphs_paragraphs_info() {
  $items = array(
    'accordion' => array(
      'name' => 'Accordion',
      'bundle' => 'accordion',
      'locked' => '1',
    ),
    'accordion_pane' => array(
      'name' => 'Accordion Pane',
      'bundle' => 'accordion_pane',
      'locked' => '1',
    ),
    'basic' => array(
      'name' => 'Basic',
      'bundle' => 'basic',
      'locked' => '1',
    ),
    'blockquote' => array(
      'name' => 'Blockquote',
      'bundle' => 'blockquote',
      'locked' => '1',
    ),
    'carousel' => array(
      'name' => 'Carousel',
      'bundle' => 'carousel',
      'locked' => '1',
    ),
    'carousel_slide' => array(
      'name' => 'Carousel Slide',
      'bundle' => 'carousel_slide',
      'locked' => '1',
    ),
    'category_showcase' => array(
      'name' => 'Category Showcase',
      'bundle' => 'category_showcase',
      'locked' => '1',
    ),
    'category_showcase_item' => array(
      'name' => 'Category Showcase Item',
      'bundle' => 'category_showcase_item',
      'locked' => '1',
    ),
    'document' => array(
      'name' => 'Document',
      'bundle' => 'document',
      'locked' => '1',
    ),
    'featured_box' => array(
      'name' => 'Featured Box',
      'bundle' => 'featured_box',
      'locked' => '1',
    ),
    'highlighted' => array(
      'name' => 'Highlighted',
      'bundle' => 'highlighted',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'key_fact' => array(
      'name' => 'Key Fact',
      'bundle' => 'key_fact',
      'locked' => '1',
    ),
    'key_fact_item' => array(
      'name' => 'Key Fact Item',
      'bundle' => 'key_fact_item',
      'locked' => '1',
    ),
    'layout_1_col_12' => array(
      'name' => 'Layout - 1 Column',
      'bundle' => 'layout_1_col_12',
      'locked' => '1',
    ),
    'layout_2_col_4_8' => array(
      'name' => 'Layout - 2 Columns Narrow Wide',
      'bundle' => 'layout_2_col_4_8',
      'locked' => '1',
    ),
    'layout_2_col_6_6' => array(
      'name' => 'Layout - 2 Columns Equal Width',
      'bundle' => 'layout_2_col_6_6',
      'locked' => '1',
    ),
    'layout_2_col_8_4' => array(
      'name' => 'Layout - 2 Columns Wide Narrow',
      'bundle' => 'layout_2_col_8_4',
      'locked' => '1',
    ),
    'layout_3_col_3_3_6' => array(
      'name' => 'Layout - 3 Columns Narrow Narrow Wide',
      'bundle' => 'layout_3_col_3_3_6',
      'locked' => '1',
    ),
    'layout_3_col_4_4_4' => array(
      'name' => 'Layout - 3 Columns',
      'bundle' => 'layout_3_col_4_4_4',
      'locked' => '1',
    ),
    'layout_3_col_6_3_3' => array(
      'name' => 'Layout - 3 Columns Wide Narrow Narrow',
      'bundle' => 'layout_3_col_6_3_3',
      'locked' => '1',
    ),
    'link' => array(
      'name' => 'Link',
      'bundle' => 'link',
      'locked' => '1',
    ),
    'promotional_area' => array(
      'name' => 'Promotional Area',
      'bundle' => 'promotional_area',
      'locked' => '1',
    ),
    'tab_panel' => array(
      'name' => 'Tab Panel',
      'bundle' => 'tab_panel',
      'locked' => '1',
    ),
    'table' => array(
      'name' => 'Table',
      'bundle' => 'table',
      'locked' => '1',
    ),
    'tabs' => array(
      'name' => 'Tabs',
      'bundle' => 'tabs',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
