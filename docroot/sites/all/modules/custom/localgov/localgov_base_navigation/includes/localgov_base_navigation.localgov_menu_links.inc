<?php
/**
 * @file
 * localgov_base_navigation.localgov_menu_links.inc
 * TODO: Add file description
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */


/**
 * Implements hook_localgov_menu_links().
 */
function localgov_base_navigation_localgov_menu_links() {
  menu_rebuild();

  $base_link = db_query("SELECT mlid AS plid, menu_name FROM {menu_links} WHERE link_path = 'admin/localgov/menu' AND module = 'system'")->fetchAssoc();
  $base_link['router_path'] = 'admin/localgov/menu/%';
  $base_link['module'] = 'localgov_base_navigation';

  $result = db_query("SELECT * FROM {menu_custom} m WHERE m.menu_name = 'main-menu'", array(), array('fetch' => PDO::FETCH_ASSOC));

  foreach ($result as $menu) {
    // $link is passed by reference to menu_link_save(), so we make a copy of $base_link.
    $link = $base_link;
    $link['mlid'] = 0;
    $link['link_title'] =  'Manage  "' . $menu['title'] . '"';
    $link['link_path'] = 'admin/localgov/menu/' . $menu['menu_name'];
    $link['menu_name'] = 'localgov';
    $link['weight'] = 0;
    $menu_link = db_query("SELECT mlid FROM {menu_links} WHERE link_path = :path AND plid = :plid", array(
      ':path' => $link['link_path'],
      ':plid' => $link['plid']
    ))
    ->fetchField();
    if (!$menu_link) {
      menu_link_save($link);
    }
  }

  $result = db_query("SELECT * FROM {menu_custom} m WHERE m.menu_name = 'footer-menu'", array(), array('fetch' => PDO::FETCH_ASSOC));

  foreach ($result as $menu) {
    // $link is passed by reference to menu_link_save(), so we make a copy of $base_link.
    $link = $base_link;
    $link['mlid'] = 0;
    $link['link_title'] =  'Manage  "' . $menu['title'] . '"';
    $link['link_path'] = 'admin/localgov/menu/' . $menu['menu_name'];
    $link['menu_name'] = 'localgov';
    $link['weight'] = 1;
    $menu_link = db_query("SELECT mlid FROM {menu_links} WHERE link_path = :path AND plid = :plid", array(
      ':path' => $link['link_path'],
      ':plid' => $link['plid']
    ))
    ->fetchField();
    if (!$menu_link) {
      menu_link_save($link);
    }
  }

  menu_cache_clear_all();
}
