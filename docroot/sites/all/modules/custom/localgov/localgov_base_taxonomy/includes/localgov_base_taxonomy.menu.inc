<?php

/**
 * @file
 * localgov_base_taxonomy.menu.inc
 */

/**
* Implements hook_menu().
*/
function localgov_base_taxonomy_menu() {
   $items = array();

  $items['admin/localgov/modules/localgov/localgov_base_taxonomy'] = array(
    'title' => 'LocalGov Base: Taxonomy',
    'description' => 'LocalGov Base: Taxonomy tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_taxonomy'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/modules/localgov/localgov_base_taxonomy/admin'] = array(
    'title' => 'Configuration',
    'description' => 'LocalGov Base: Taxonomy administrative tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_taxonomy'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/categories'] = array(
    'title' => 'Categorisation',
    'description' => 'LocalGov categories',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_taxonomy'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '1',
  );

  $items['admin/localgov/categories/%taxonomy_vocabulary_machine_name'] = array(
    'title callback' => 'entity_label',
    'title arguments' => array('taxonomy_vocabulary', 3),
    'menu_name' => 'localgov',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('localgov_base_taxonomy_overview_terms', 3),
    'access arguments' => array('administer taxonomy'),
    'file path' => drupal_get_path('module','localgov_base_taxonomy') . '/includes',
    'file' => 'localgov_base_taxonomy.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );
  $items['admin/localgov/categories/%taxonomy_vocabulary_machine_name/list'] = array(
    'title' => 'List',
    'menu_name' => 'localgov',
    'type' => MENU_DEFAULT_LOCAL_TASK,
    'weight' => -20,
  );

  $items['admin/localgov/categories/%taxonomy_vocabulary_machine_name/add'] = array(
    'title' => 'Add term',
    'menu_name' => 'localgov',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('localgov_base_taxonomy_form_term', array(), 3),
    'access arguments' => array('administer taxonomy'),
    'type' => MENU_LOCAL_TASK,
    'file path' => drupal_get_path('module','localgov_base_taxonomy') . '/includes',
    'file' => 'localgov_base_taxonomy.admin.inc',
  );

  return $items;
}
