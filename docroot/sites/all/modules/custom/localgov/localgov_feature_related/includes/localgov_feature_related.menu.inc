<?php
/**
 * @file
 * localgov_feature_related.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_related
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_feature_related_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_feature_related'] = array(
     'title' => 'LocalGov Feature: Related',
     'description' => 'LocalGov Feature: Related tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_feature_related'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_feature_related/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Feature: Related administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_feature_related'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
