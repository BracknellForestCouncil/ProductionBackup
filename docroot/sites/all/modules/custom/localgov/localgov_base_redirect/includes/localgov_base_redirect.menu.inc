<?php
/**
 * @file
 * localgov_base_redirect.menu.inc
 * TODO: Add file description
 *
 * @package   localgov_base_redirect
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
* Implements hook_menu().
*/
function localgov_base_redirect_menu() {
  $items = array();

  $items['admin/localgov/modules/localgov/localgov_base_redirect'] = array(
    'title' => 'LocalGov Base: Redirect',
    'description' => 'LocalGov Base: Redirect tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('access localgov_base_redirect'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/modules/localgov/localgov_base_redirect/admin'] = array(
    'title' => 'Configuration',
    'description' => 'LocalGov Base: Redirect administrative tasks',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_redirect'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/redirect'] = array(
    'title' => 'Redirects',
    'description' => 'Manage redirects.',
    'menu_name' => 'localgov',
    'access arguments' => array('administer localgov_base_redirect'),
    'page callback' => 'system_admin_menu_block_page',
    'file path' => drupal_get_path('module', 'system'),
    'file' => 'system.admin.inc',
    'type' => MENU_NORMAL_ITEM,
    'weight' => 6,
  );

  $items['admin/localgov/redirect/list'] = array(
    'title' => 'List redirects',
    'type' => MENU_LOCAL_TASK | MENU_NORMAL_ITEM ,
    'description' => 'Redirect users from one URL to another.',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('redirect_list_form'),
    'access arguments' => array('administer redirects'),
    'file path' => drupal_get_path('module', 'redirect'),
    'file' => 'redirect.admin.inc',
    'weight' => -10,
  );

  $items['admin/localgov/redirect/add'] = array(
    'title' => 'Add redirect',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('redirect_edit_form'),
    'access callback' => 'redirect_access',
    'access arguments' => array('create', 'redirect'),
    'file path' => drupal_get_path('module', 'redirect'),
    'file' => 'redirect.admin.inc',
    'type' => MENU_LOCAL_TASK | MENU_NORMAL_ITEM,
  );

  $items['admin/localgov/redirect/edit/%redirect'] = array(
    'title' => 'Edit redirect',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('redirect_edit_form', 4),
    'access callback' => 'redirect_access',
    'access arguments' => array('update', 4),
    'file path' => drupal_get_path('module', 'redirect'),
    'file' => 'redirect.admin.inc',
  );

  $items['admin/localgov/redirect/delete/%redirect'] = array(
    'title' => 'Delete redirect',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('redirect_delete_form', 4),
    'access callback' => 'redirect_access',
    'access arguments' => array('delete', 4),
    'file path' => drupal_get_path('module', 'redirect'),
    'file' => 'redirect.admin.inc',
  );

  // If the database logging module is enabled, add special 404 listing pages.
  if (module_exists('dblog')) {
    $items['admin/localgov/redirect/404'] = array(
      'title' => 'Fix 404 pages',
      'description' => 'Add redirects for 404 pages.',
      'page callback' => 'redirect_404_list',
      'access arguments' => array('administer redirects'),
      'file path' => drupal_get_path('module', 'redirect'),
      'file' => 'redirect.admin.inc',
      'type' => MENU_LOCAL_TASK | MENU_NORMAL_ITEM,
      'weight' => 20,
    );
  }

  return $items;
}
