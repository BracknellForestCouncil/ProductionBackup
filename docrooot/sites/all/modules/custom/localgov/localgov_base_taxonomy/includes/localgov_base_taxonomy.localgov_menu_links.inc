<?php
/**
 * @file
 * localgov_base_taxonomy.localgov_menu_links.inc
 * TODO: Add file description
 *
 * @package   localgov_base_taxonomy
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_localgov_menu_links().
  */
 function localgov_base_taxonomy_localgov_menu_links() {
 menu_rebuild();

 $base_link = db_query("SELECT mlid AS plid, menu_name FROM {menu_links} WHERE link_path = 'admin/localgov/categories' AND module = 'system'")->fetchAssoc();
 $base_link['router_path'] = 'admin/localgov/menu/%';
 $base_link['module'] = 'localgov_base_navigation';

 $vocabularies = taxonomy_get_vocabularies();

 foreach ($vocabularies as $vocabulary) {
   // $link is passed by reference to menu_link_save(), so we make a copy of $base_link.
   $link = $base_link;
   $link['mlid'] = 0;
   $link['link_title'] = $vocabulary->name;
   $link['link_path'] = 'admin/localgov/categories/' . $vocabulary->machine_name;
   $link['menu_name'] = 'localgov';
   $link['weight'] = $vocabulary->weight;
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
