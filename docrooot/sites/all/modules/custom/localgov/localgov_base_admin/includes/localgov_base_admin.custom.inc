<?php
/**
 * @file
 * localgov_base_admin.inc
 * TODO: Add file description
 *
 * @package   localgov_base_admin
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Gets only the top level items below the 'admin/localgov' path.
  *
  * @return
  *   An array containing a menu tree of top level items below the 'admin/localgov' path.
  */
 function localgov_base_admin_get_menu_tree() {
   $tree = array();
  //  $tree = menu_build_tree('localgov', array(
  //    'min_depth' => 0,
  //    'max_depth' => 5,
  //  ));
  //  return $tree;

  $tree = menu_tree_all_data('localgov');
    foreach ($tree as $branch) {
      if ($branch['link']['title'] == 'LocalGov') {
        return $branch['below'];
      }
    }

 }

 /**
  * TODO: Add description
  */
function localgov_base_admin_config_page() {
  // Check for status report errors.
  $blocks = array();
  if ($admin = db_query("SELECT menu_name, mlid FROM {menu_links} WHERE link_path = 'admin/localgov'")->fetchAssoc()) {
    $result = db_query("
      SELECT m.*, ml.*
      FROM {menu_links} ml
      INNER JOIN {menu_router} m ON ml.router_path = m.path
      WHERE ml.link_path <> 'admin/help' AND menu_name = :menu_name AND ml.plid = :mlid AND hidden = 0", $admin, array('fetch' => PDO::FETCH_ASSOC));
    foreach ($result as $item) {
      _menu_link_translate($item);
      if (!$item['access']) {
        continue;
      }
      // The link description, either derived from 'description' in hook_menu()
      // or customized via menu module is used as title attribute.
      if (!empty($item['localized_options']['attributes']['title'])) {
        $item['description'] = $item['localized_options']['attributes']['title'];
        unset($item['localized_options']['attributes']['title']);
      }
      $block = $item;
      $block['content'] = '';
      $block['content'] .= theme('admin_block_content', array('content' => system_admin_menu_block($item)));
      if (!empty($block['content'])) {
        $block['show'] = TRUE;
      }

      // Prepare for sorting as in function _menu_tree_check_access().
      // The weight is offset so it is always positive, with a uniform 5-digits.
      $blocks[(50000 + $item['weight']) . ' ' . $item['title'] . ' ' . $item['mlid']] = $block;
    }
  }
  if ($blocks) {
    ksort($blocks);
    return theme('admin_page', array('blocks' => $blocks));
  }
  else {
    return t('You do not have any administrative items.');
  }
}
