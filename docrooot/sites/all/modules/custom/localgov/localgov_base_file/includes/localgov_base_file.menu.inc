<?php
/**
 * @file
 * localgov_base_file.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_file
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_menu().
  */
 function localgov_base_file_menu() {
   $items = array();

   $items['admin/localgov/modules/localgov/localgov_base_file'] = array(
     'title' => 'LocalGov Base: File',
     'description' => 'LocalGov Base: File tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('access localgov_base_file'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

   $items['admin/localgov/modules/localgov/localgov_base_file/admin'] = array(
     'title' => 'Configuration',
     'description' => 'LocalGov Base: File administrative tasks',
     'menu_name' => 'localgov',
     'access arguments' => array('administer localgov_base_file'),
     'page callback' => 'system_admin_menu_block_page',
     'file path' => drupal_get_path('module', 'system'),
     'file' => 'system.admin.inc',
     'type' => MENU_NORMAL_ITEM,
   );

    $items['admin/localgov/files'] = array(
      'title' => 'Files',
      'description' => 'LocalGov files',
      'menu_name' => 'localgov',
      'access arguments' => array('access localgov_base_file'),
      'page callback' => 'system_admin_menu_block_page',
      'file path' => drupal_get_path('module','system'),
      'file' => 'system.admin.inc',
      'type' => MENU_NORMAL_ITEM,
      'weight' => '3',
    );

    $items['admin/localgov/files/add'] = array(
      'title' => 'Add file',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('file_entity_add_upload', array()),
      'access callback' => 'file_entity_access',
      'access arguments' => array('create'),
      'file path' => drupal_get_path('module','file_entity'),
      'file' => 'file_entity.pages.inc',
    );
    $items['admin/localgov/files/add/upload'] = array(
      'title' => 'Upload',
      'type' => MENU_DEFAULT_LOCAL_TASK,
      'weight' => -10,
    );
    $items['admin/localgov/files/add/upload/file'] = array(
      'title' => 'File',
      'type' => MENU_DEFAULT_LOCAL_TASK,
      'weight' => -10,
    );
    $items['admin/localgov/files/add/upload/archive'] = array(
      'title' => 'Archive',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('file_entity_upload_archive_form'),
      'access arguments' => array('administer files'),
      'file path' => drupal_get_path('module','file_entity'),
      'file' => 'file_entity.pages.inc',
      'type' => MENU_LOCAL_TASK,
      'weight' => -5,
    );
    $items['admin/localgov/files/add/web'] = array(
      'title' => 'Web',
      'description' => 'Add internet files to your media library.',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('media_internet_add_upload'),
      'access callback' => 'media_internet_access',
      'type' => MENU_LOCAL_TASK,
      'file' => 'file_entity.pages.inc',
      'file path' => drupal_get_path('module', 'file_entity'),
    );

   return $items;
 }
