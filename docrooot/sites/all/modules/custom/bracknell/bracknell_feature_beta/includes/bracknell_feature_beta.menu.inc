<?php
/**
 * @file
 * bracknell_feature_beta.menu.inc
 * TODO: Add file description
 *
 * @package   bracknell_feature_beta
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function bracknell_feature_beta_menu() {
   $items = array();

   $items['admin/localgov/modules/bracknell/bracknell_feature_beta'] = array(
     'title' => 'Bracknell Feature: Beta',
     'description' => 'Bracknell Feature: Beta tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access bracknell_feature_beta'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/bracknell/bracknell_feature_beta/admin'] = array(
     'title' => 'Configuration',
     'description' => 'Bracknell Feature: Beta administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer bracknell_feature_beta'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   return $items;
 }
