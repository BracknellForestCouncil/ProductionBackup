<?php
/**
 * @file
 * localgov_content_basic.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_content_basic
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_content_basic_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov_content/localgov_content_basic'] = array(
     'title' => 'LocalGov Content: Basic',
     'description' => 'LocalGov Content: Basic tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_content_basic'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov_content/localgov_content_basic/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Content: Basic administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_content_basic'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
