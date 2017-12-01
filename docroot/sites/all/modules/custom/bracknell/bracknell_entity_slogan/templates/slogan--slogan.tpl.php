<?php

/**
 * @file
 * Default theme implementation for entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="slogan-content <?php print $classes; ?>">
  <div class="slogan-inner">
    <div class="slogan-top">
      <?php if (isset($content['field_slogan_image'])) : ?>
        <div class="slogan-image">
          <?php print render($content['field_slogan_image']); ?>
        </div>
      <?php endif; ?>

      <div class="slogan-text">
      <?php if (isset($content['field_slogan_title'])) : ?>
        <h2 class="slogan-title">
          <?php print render($content['field_slogan_title']); ?>
        </h2>
      <?php endif; ?>

      <?php if (isset($content['field_slogan_strapline'])) : ?>
        <p class="slogan-strapline">
          <?php print render($content['field_slogan_strapline']); ?>
        </p>
      <?php endif; ?>
      </div>
    </div>

    <div class="slogan-bottom">
      <?php if (isset($content['field_slogan_call_to_action'])) : ?>
        <div class="slogan-call-to-action">
          <?php print render($content['field_slogan_call_to_action']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
