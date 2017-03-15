<?php
/**
 * @file
 * localgov_base_config.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_config
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_config_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_config'] = array(
     'title' => 'LocalGov Base: Config',
     'description' => 'LocalGov Base: Config tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_config'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_config/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: Config administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_config'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
