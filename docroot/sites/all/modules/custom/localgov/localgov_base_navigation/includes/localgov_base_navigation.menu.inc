<?php
/**
 * @file
 * localgov_base_navigation.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
* Implements hook_menu().
*/
function localgov_base_navigation_menu() {
  $items = array();

  $items['admin/localgov/modules/localgov/localgov_base_navigation'] = array(
    'title' => 'LocalGov Base: Navigation',
    'description' => 'LocalGov Base: Navigation tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_navigation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/modules/localgov/localgov_base_navigation/admin'] = array(
    'title' => 'Configuration',
    'description' => 'LocalGov Base: Navigation administrative tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_navigation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/menu'] = array(
    'title' => 'Menus',
    'description' => 'LocalGov navigation',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_navigation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '4',
  );

  $items['admin/localgov/menu/%menu'] = array(
    'title' => 'Main Menu',
    'description' => 'Manage Main Menu',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_navigation'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('menu_overview_form', 3),
    'file path' => drupal_get_path('module','menu'),
    'file' => 'menu.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '4',
  );

  $items['admin/localgov/menu/%menu/list'] = array(
    'title' => 'List links',
    'weight' => -10,
    'type' => MENU_DEFAULT_LOCAL_TASK,
  );

  $items['admin/localgov/menu/%menu/add'] = array(
    'title' => 'Add link',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('menu_edit_item', 'add', NULL, 3),
    'access arguments' => array('administer menu'),
    'type' => MENU_LOCAL_TASK,
    'file path' => drupal_get_path('module','menu'),
    'file' => 'menu.admin.inc',
  );

  $items['admin/localgov/menu/menu-item/%menu_link/edit'] = array(
    'title' => 'Edit menu link',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('menu_edit_item', 'edit', 4, NULL),
    'access arguments' => array('administer menu'),
    'file' => 'menu.admin.inc',
  );
  $items['admin/localgov/menu/menu-item/%menu_link/reset'] = array(
    'title' => 'Reset menu link',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('menu_reset_item_confirm', 4),
    'access arguments' => array('administer menu'),
    'file' => 'menu.admin.inc',
  );
  $items['admin/localgov/menu/menu-item/%menu_link/delete'] = array(
    'title' => 'Delete menu link',
    'page callback' => 'menu_item_delete_page',
    'page arguments' => array(4),
    'access arguments' => array('administer menu'),
    'file' => 'menu.admin.inc',
  );

  return $items;
}
