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
<?php hide($content); ?>

<div class="key-contact-item"<?php print $attributes; ?>>
  <article class="key-contact-item-inner <?php print $classes; ?>"<?php print $attributes; ?>>
    <?php if (!empty($content['field_key_contact_image'])): ?>
      <div class="key-contact-item-image">
        <?php print render($content['field_key_contact_image']); ?>
      </div>
    <?php endif; ?>
    <div class="key-contact-item-content">
      <?php if (!empty($content['field_key_contact_item_title'])): ?>
        <h3 class="key-contact-item-title"<?php print $title_attributes; ?>>
          <?php print render($content['field_key_contact_item_title']); ?>
        </h3>
      <?php endif; ?>
      <?php if (!empty($content['field_key_contact_email'])): ?>
        <p class="key-contact-item-email">
          <?php print render($content['field_key_contact_email']); ?>
        </p>
      <?php endif; ?>
    </div>
  </article>
</div>
