<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<article class="showcase-item">
  <div class="showcase-media-wrap">
    <div class="showcase-media">
      <?php print render($content['field_showcase_image']); ?>
    </div>
  </div>
  <div class="showcase-overlay">
    <?php print render($content['field_showcase_title']); ?>
    <div class="showcase-item-content">
      <?php print render($content['field_showcase_summary']); ?>
      <?php print render($content['field_showcase_link']); ?>
    </div>
  </div>
</article>
