<?php
/**
 * @file
 * Contains the guide root from current node argument default plugin.
 */

/**
 * Default argument plugin to get the current node's guide root.
 */
class views_plugin_argument_default_guide_root extends views_plugin_argument_default_node {
  function get_argument() {
    // Use the argument_default_node plugin to get the nid argument.
    $nid = parent::get_argument();
    if (!empty($nid)) {
      $node = node_load($nid);
      if (isset($node->guide['gid'])) {
        return $node->guide['gid'];
      }
    }
  }
}
