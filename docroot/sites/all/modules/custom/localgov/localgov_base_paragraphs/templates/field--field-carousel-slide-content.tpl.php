<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class='carousel-slide-inner'>
    <div class='carousel-slide-flex-wrapper'>
      <?php foreach ($items as $delta => $item): ?>
        <?php print render($item); ?>
      <?php endforeach; ?>
    </div>
  </div>
</div>
