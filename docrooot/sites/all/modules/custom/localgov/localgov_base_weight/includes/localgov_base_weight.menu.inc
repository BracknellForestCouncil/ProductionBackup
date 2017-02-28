<?php
/**
 * @file
 * localgov_base_weight.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_weight
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_weight_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_weight'] = array(
     'title' => 'LocalGov Base: Weight',
     'description' => 'LocalGov Base: Weight tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_weight'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_weight/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: Weight administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_weight'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
