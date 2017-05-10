<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<?php if (!empty($hero_images)): ?>
  <div class="hero-images">
    <?php if ($show_gallery): ?>
      <?php
      // Render out all the promotional hero images as a slideshow.
      foreach ($hero_images as $key => $hero_image):
        $hero_image_alt = $hero_image['#item']['alt'];
        $hero_image_src = $hero_image['#item']['uri'];
      ?>
        <a
          href="<?php print file_create_url($hero_image_src); ?>"
          rel="lightbox[hero_image]"
          title=""
          class="hero-image <?php print $key > 0 ? 'hidden' : 'first-image'; ?>">
          <img alt="<?php print $hero_image_alt; ?>" src="<?php print file_create_url($hero_image_src); ?>" />
        </a>
      <?php endforeach; ?>
      <div aria-hidden="true" class='hero-buttons'>
        <div class='hero-button action-open'>View gallery</div>
      </div>
    <?php else : ?>
      <?php if (!empty($cover_hero_image)): ?>
      <div class="hero-images">
        <img alt="<?php print $cover_hero_image_alt; ?>" src="<?php print $cover_hero_image_src; ?>" />
      <?php endif; ?>
    <?php endif; ?>
  </div>
<?php endif; ?>
