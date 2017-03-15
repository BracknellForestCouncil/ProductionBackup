<?php

/**
 * @file
 * Default theme implementation for rendering guide structures within a block.
 *
 * This template is used only when the block is configured to "show block on all
 * pages", which presents multiple independent guides on all pages.
 *
 * Available variables:
 * - $guide_menus: Array of guide structures keyed to the parent guide ID. Call
 *   render() on each to print it as an unordered list.
 *
 * @see template_preprocess_guide_all_guides_block()
 *
 * @ingroup themeable
 */
?>
<?php foreach ($guide_menus as $guide_id => $menu): ?>
  <div id="guide-block-menu-<?php print $guide_id; ?>" class="guide-block-menu">
    <?php print render($menu); ?>
  </div>
<?php endforeach; ?>
