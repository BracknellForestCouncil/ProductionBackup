<?php
/**
 * @file
 * localgov_base_user.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_user
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_user_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_user'] = array(
     'title' => 'LocalGov Base: User',
     'description' => 'LocalGov Base: User tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_user'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_user/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: User administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_user'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
