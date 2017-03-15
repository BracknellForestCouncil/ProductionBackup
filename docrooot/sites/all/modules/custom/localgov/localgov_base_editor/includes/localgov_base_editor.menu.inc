<?php
/**
 * @file
 * localgov_base_editor.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_editor
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_editor_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_editor'] = array(
     'title' => 'LocalGov Base: Editor',
     'description' => 'LocalGov Base: Editor tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_editor'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_editor/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: Editor administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_editor'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
