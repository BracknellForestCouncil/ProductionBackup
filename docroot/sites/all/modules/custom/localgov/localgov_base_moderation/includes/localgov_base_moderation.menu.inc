<?php
/**
 * @file
 * localgov_base_moderation.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_moderation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_moderation_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_moderation'] = array(
     'title' => 'LocalGov Base: Moderation',
     'description' => 'LocalGov Base: Moderation tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_moderation'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_moderation/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: Moderation administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_moderation'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

  $items['admin/localgov/moderation'] = array(
    'title' => 'Moderation',
    'description' => 'LocalGov Content Moderation',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '5',
  );

  $items['admin/localgov/moderation/list'] = array(
    'title' => 'List Content: All (Moderation)',
    'description' => 'Edit, Moderate and Review content',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'views_embed_view',
    'page arguments' => array('localgov_base_moderation_content', 'page_list'),
    'file path' => drupal_get_path('module','views'),
    'file' => 'views.module',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/state'] = array(
    'title' => 'List Content: By Moderation Status',
    'description' => 'LocalGov Base Moderation administration pages',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_moderation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/state/draft'] = array(
    'title' => 'Draft',
    'description' => '',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'views_embed_view',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'draft'),
    'file path' => drupal_get_path('module','views'),
    'file' => 'views.module',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/state/needs_editing'] = array(
    'title' => 'Needs Editing',
    'description' => '',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'views_embed_view',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'needs_editing'),
    'file path' => drupal_get_path('module','views'),
    'file' => 'views.module',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/state/needs_review'] = array(
    'title' => 'Needs Review',
    'description' => '',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'views_embed_view',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'needs_review'),
    'file path' => drupal_get_path('module','views'),
    'file' => 'views.module',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/state/published'] = array(
    'title' => 'Published',
    'description' => '',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'views_embed_view',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'published'),
    'file path' => drupal_get_path('module','views'),
    'file' => 'views.module',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/state/archived'] = array(
    'title' => 'Archived',
    'description' => '',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'views_embed_view',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'archived'),
    'file path' => drupal_get_path('module','views'),
    'file' => 'views.module',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/group'] = array(
    'title' => 'List Content: By Moderation Group',
    'description' => 'LocalGov Base Moderation administration pages',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_moderation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/moderation/sections'] = array(
    'title' => 'Manage moderation',
    'description' => 'LocalGov Content Moderation',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_moderation'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module','system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '-10',
  );

  $items['admin/localgov/moderation/sections/manage'] = array(
    'title' => 'Manage moderation sections',
    'description' => 'LocalGov Content Moderation',
    'menu_name' => 'localgov',
    'page callback' => 'drupal_goto',
    'page arguments' => array('admin/localgov/categories/moderation'),
    'access arguments' => array('administer taxonomy'),
    'file path' => drupal_get_path('module','taxonomy'),
    'file' => 'taxonomy.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => '-10',
  );

  $items['admin/localgov/moderation/sections/users'] = array(
    'title' => 'Assign users to moderation sections',
    'description' => 'Workbench access control settings',
    'page callback' => 'workbench_access_editors',
    'access arguments' => array('assign workbench access'),
    'file path' => drupal_get_path('module','workbench_access'),
    'file' => 'workbench_access.admin.inc',
  );

  $items['admin/localgov/workbench'] = array(
    'title' => 'My Workbench',
    'description' => 'My Workbench area',
    'menu_name' => 'localgov',
    'page callback' => 'localgov_base_moderation_workbench',
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -20,
  );

  $items['admin/localgov/workbench/create'] = array(
    'title' => 'Create content',
    'menu_name' => 'localgov',
    'page callback' => 'localgov_base_moderation_workbench_create',
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -25,
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/localgov/workbench/content'] = array(
    'title' => 'My content',
    'menu_name' => 'localgov',
    'page callback' => 'localgov_base_moderation_workbench',
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -24,
    'type' => MENU_DEFAULT_LOCAL_TASK,
  );

  $items['admin/localgov/workbench/draft'] = array(
    'title' => '"Draft" content',
    'description' => 'This list displays content in the "Draft (not submitted for moderation)" state that you can edit.',
    'menu_name' => 'localgov',
    'page callback' => 'views_page',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'needs_review'),
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -20,
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/localgov/workbench/needs-editing'] = array(
    'title' => '"Needs editing" content',
    'description' => 'This list displays content in the "Needs editing (rejected by moderator)" state that you can edit.',
    'menu_name' => 'localgov',
    'page callback' => 'views_page',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'needs_editing'),
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -19,
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/localgov/workbench/needs-review'] = array(
    'title' => '"Needs review" content',
    'description' => 'This list displays content in the "Needs review (awaiting moderation)" state that you can edit.',
    'menu_name' => 'localgov',
    'page callback' => 'views_page',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'needs_review'),
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -18,
    'type' => MENU_LOCAL_TASK,
  );

  $items['admin/localgov/workbench/published'] = array(
    'title' => '"Published" content',
    'description' => 'This list displays published content that you can edit.',
    'menu_name' => 'localgov',
    'page callback' => 'views_page',
    'page arguments' => array('localgov_base_moderation_content', 'page_status', 'published'),
    'access arguments' => array('access localgov_base_moderation'),
    'weight' => -17,
    'type' => MENU_LOCAL_TASK,
  );

  return $items;
}
