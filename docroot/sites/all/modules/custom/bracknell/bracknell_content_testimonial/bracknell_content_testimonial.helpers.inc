<?php

/**
 * @file
 * Helper functions for bracknell_content_testimonial.
 */

/**
 * Add classes to carousel slides.
 *
 * @param array $variables
 *   The variables array from the pre-process function.
 *
 * @see bracknell_content_testimonial_preprocess_field()
 */
function _bracknell_content_testimonial_add_carousel_slide_classes(array &$variables) {
  if ($variables['element']['#bundle'] != 'carousel_slide') {
    return;
  }

  $wrapper = entity_metadata_wrapper('paragraphs_item', $variables['element']['#object']);

  $layout = $wrapper->get('field_carousel_slide_layout')->value();

  $variables['classes_array'][] = 'carousel-slide';
  $variables['classes_array'][] = "carousel-slide-media-{$layout}";
}
