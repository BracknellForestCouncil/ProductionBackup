<?php

/**
 * @file
 * Default theme implementation to navigate guides.
 *
 * Presented under nodes that are a part of guide structures.
 *
 * Available variables:
 * - $tree: The immediate children of the current node rendered as an unordered
 *   list.
 * - $current_depth: Depth of the current node within the guide structure. Provided
 *   for context.
 * - $prev_url: URL to the previous node.
 * - $prev_title: Title of the previous node.
 * - $parent_url: URL to the parent node.
 * - $parent_title: Title of the parent node. Not printed by default. Provided
 *   as an option.
 * - $next_url: URL to the next node.
 * - $next_title: Title of the next node.
 * - $has_links: Flags TRUE whenever the previous, parent or next data has a
 *   value.
 * - $guide_id: The guide ID of the current structure being viewed. Same as the node
 *   ID containing the entire structure. Provided for context.
 * - $guide_url: The guide/node URL of the current structure being viewed. Provided
 *   as an option. Not used by default.
 * - $guide_title: The guide/node title of the current structure being viewed.
 *   Provided as an option. Not used by default.
 *
 * @see template_preprocess_guide_navigation()
 *
 * @ingroup themeable
 */
?>
<?php if ($tree || $has_links): ?>
  <div id="guide-navigation-<?php print $guide_id; ?>" class="guide-navigation-primary">

    <!-- <h1 id="guide-title">
      <?php print $parent_title; ?>
    </h1> -->

    <?php print str_replace("<ul","<ol",str_replace("</ul","</ol",$tree)); ?>

    <?php if ($has_links): ?>
    <div class="page-links clearfix">
      <?php if ($prev_url): ?>
        <a href="<?php print $prev_url; ?>" class="page-previous" title="<?php print t('Go to previous page'); ?>"><?php print t('‹ ') . $prev_title; ?></a>
      <?php endif; ?>
      <!-- <?php if ($parent_url): ?>
        <a href="<?php print $parent_url; ?>" class="page-up" title="<?php print t('Go to parent page'); ?>"><?php print t('up'); ?></a>
      <?php endif; ?> -->
      <?php if ($next_url): ?>
        <a href="<?php print $next_url; ?>" class="page-next" title="<?php print t('Go to next page'); ?>"><?php print $next_title . t(' ›'); ?></a>
      <?php endif; ?>
    </div>
    <?php endif; ?>

  </div>
<?php endif; ?>
