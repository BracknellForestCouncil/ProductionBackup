<?php
/**
 * @file
 * localgov_feature_help.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_help
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_feature_help_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_feature_help'] = array(
     'title' => 'LocalGov Feature: Help',
     'description' => 'LocalGov Feature: Help tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_feature_help'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_feature_help/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Feature: Help administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_feature_help'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
