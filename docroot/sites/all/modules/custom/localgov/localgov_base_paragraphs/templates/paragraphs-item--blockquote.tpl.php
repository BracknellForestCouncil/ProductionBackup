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

<?php
  // Please note that the "autho" isn't a typo on my part, it's the field being
  // truncated because it got too long.
  hide($content['field_paragraph_body']);
  hide($content['field_paragraph_blockquote_autho']);
  hide($content['field_paragraph_blockquote_title']);

  $citations = array_filter(array(
    '<cite>' . $content['field_paragraph_blockquote_autho']['#items'][0]['value'] . '</cite>',
    $content['field_paragraph_blockquote_title']['#items'][0]['value'],
  ));
?>

<blockquote
  class='content-section-blockquote clearfix'
  <?php if ($custom_colour): ?>style='border-left-color: <?php print $custom_colour; ?>'<?php endif; ?>
>
  <div class='blockquote-quote'>
    <?php print render($content['field_paragraph_body']); ?>
  </div>
  <footer>
    <?php print join($citations, ', '); ?>
  </footer>
  <?php print render($content); ?>
</blockquote>
