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
  hide($content['field_promotional_area_layout']);
  hide($content['field_promotional_area_media']);
?>

<div class="promotional-area <?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="row">
    <div class="col-md-6 promotional-area-content <?php if (!empty($content_position)): print $content_position; endif; ?>">
      <div class="promo-text">
        <?php if (array_key_exists('field_promotional_area_title', $content)): ?>
          <h2><?php print render($content['field_promotional_area_title']); ?></h2>
        <?php endif; ?>
        <?php if (array_key_exists('field_promotional_area_descripti', $content)): ?>
          <div class="promo-description">
            <?php print render($content['field_promotional_area_descripti']); ?>
          </div>
        <?php endif; ?>
        <?php if (array_key_exists('field_promotional_area_link', $content)): ?>
          <?php print render($content['field_promotional_area_link']); ?>
        <?php endif; ?>

        <?php if (array_key_exists('field_promotional_area_related_c', $content)): ?>
          <?php print render($content['field_promotional_area_related_c']); ?>
        <?php endif; ?>
      </div>
    </div>
    <div class="col-md-6 promotional-area-media <?php if (!empty($image_position)) : print $image_position; endif; ?>">
      <?php if (!empty($media_type)): ?>
        <div class="promo-image">
        <?php if ($media_type == 'image'): ?>
          <?php if (array_key_exists('field_promotional_area_image', $content)): ?>
            <div class="img-responsive">
              <?php print render($content['field_promotional_area_image']); ?>
            </div>
          <?php endif; ?>
        <?php endif; ?>
        <?php if ($media_type == 'video'): ?>
          <?php if (array_key_exists('field_promotional_area_video', $content)): ?>
             <div class="video">
                <?php print render($content['field_promotional_area_video']); ?>
            </div>
          <?php endif; ?>
        </div>
        <?php endif; ?>
      <?php endif; ?>
    </div>
  </div>
</div>
