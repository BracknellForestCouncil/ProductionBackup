<?php
/**
 * @file
 * localgov_feature_landingpage.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_landingpage
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_feature_landingpage_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_feature_landingpage'] = array(
     'title' => 'LocalGov Feature: Landing Page',
     'description' => 'LocalGov Feature: Landing Page tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_feature_landingpage'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_feature_landingpage/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Feature: Landing Page administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_feature_landingpage'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
