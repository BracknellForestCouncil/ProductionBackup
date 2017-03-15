<?php
/**
 * @file
 * localgov_base_content.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_content
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_content_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_content'] = array(
     'title' => 'LocalGov Base: Content',
     'description' => 'LocalGov Base: Content tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_content'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_content/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: Content administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_content'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

  $items['admin/localgov/content'] = array(
    'title' => 'Content',
    'description' => 'LocalGov content',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_content'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '2',
  );
  $items['admin/localgov/content/add'] = array(
    'title' => 'Add content',
    'description' => 'Add Content',
    'page callback' => 'node_add_page',
    'access arguments' => array('access localgov_base_content'),
    'file path' => drupal_get_path('module','node'),
    'file' => 'node.pages.inc',
    'type' => MENU_NORMAL_ITEM,
  );
  node_type_cache_reset();
  foreach (node_type_get_types() as $type) {
    $type_url_str = str_replace('_', '-', $type->type);
    $items['admin/localgov/content/add/' . $type_url_str] = array(
      'title' => $type->name,
      'title callback' => 'check_plain',
      'page callback' => 'node_add',
      'page arguments' => array($type->type),
      'access callback' => 'node_access',
      'access arguments' => array('create', $type->type),
      'description' => $type->description,
      'file path' => drupal_get_path('module','node'),
      'file' => 'node.pages.inc',
    );
  }

  $items['admin/localgov/content/list'] = array(
    'title' => 'List content',
    'description' => 'List content.',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('node_admin_content'),
    'access arguments' => array('access content overview'),
    'file path' => drupal_get_path('module','node'),
    'file' => 'node.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

   return $items;
 }
