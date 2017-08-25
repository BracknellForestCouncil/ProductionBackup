<?php

/**
 * @file
 * localgov_base_admin.menu.inc
 */

/**
* Implements hook_menu().
*/
function localgov_base_admin_menu() {
  $items = array();

  $items['admin/localgov/modules/localgov/localgov_base_admin'] = array(
    'title' => 'LocalGov Base: Admin',
    'description' => 'LocalGov Base: Admin tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_admin'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/modules/localgov/localgov_base_admin/admin'] = array(
    'title' => 'Configuration',
    'description' => 'LocalGov Base: Admin administrative tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_admin'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov'] = array(
    'title' => 'LocalGov',
    'description' => 'LocalGov administration pages',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_admin'),
    'page callback' => 'localgov_base_admin_config_page',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/modules'] = array(
    'title' => 'LocalGov Modules',
    'description' => 'LocalGov module configuration pages',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_admin'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => 50,
  );

  return $items;
}
