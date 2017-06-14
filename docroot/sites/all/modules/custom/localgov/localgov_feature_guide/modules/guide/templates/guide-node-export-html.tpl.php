<?php

/**
 * @file
 * Default theme implementation for a single node in a printer-friendly structure.
 *
 * @see guide-node-export-html.tpl.php
 * Where it is collected and printed out.
 *
 * Available variables:
 * - $depth: Depth of the current node inside the structure.
 * - $title: Node title.
 * - $content: Node content.
 * - $children: All the child nodes recursively rendered through this file.
 *
 * @see template_preprocess_guide_node_export_html()
 *
 * @ingroup themeable
 */
?>
<div id="node-<?php print $node->nid; ?>" class="section-<?php print $depth; ?> guide-export">
  <h1 class="guide-heading"><?php print $title; ?></h1>
  <?php print $content; ?>
  <?php print $children; ?>
</div>
