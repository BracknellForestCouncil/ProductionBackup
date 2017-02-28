<?php

/**
 * @file
 * localgov_base_admin.navbar.inc
 * Integration with the navbar module.
 *
 * @package   localgov_base_admin
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_navbar().
 */
function localgov_base_admin_navbar() {

  $items = array();
  // $tree = array();

  // Retrieve the administration menu from the database.
  $tree = localgov_base_admin_get_menu_tree();

  // Add attributes to the links before rendering.
  navbar_menu_navigation_links($tree);
  $tree_output = menu_tree_output($tree);
  $safe_name = str_replace(array('menu-', '-', '_'), array('', '', ''), 'localgov');;

  $items[$safe_name] = array(
    '#type' => 'navbar_item',
    'tab' => array(
      '#type' => 'link',
      '#title' => t('LocalGov Admin'),
      '#href' => 'admin',
      '#options' => array(
        'attributes' => array(
          'title' => t('LocalGov Admin'),
          'class' => array('navbar-icon', 'navbar-icon-menu', 'navbar-icon-' . $safe_name),
        ),
      ),
    ),
    'tray' => array(
      '#heading' => t('LocalGov Admin'),
      'navbar_administration' => array(
        '#type' => 'container',
        '#attributes' => array(
          'class' => array('navbar-menu-' . $safe_name, 'navbar-menu-administration'),
        ),
        'administration_menu' => $tree_output,
      ),
    ),
    '#weight' => -15,
    '#attached' => array(
      'js' => array(
        drupal_get_path('module', 'localgov_base_admin') . '/js/localgov_base_admin.navbar.js',
      ),
    ),
  );

  // Add custom css when using a non-default theme.
  global $theme;
  if (variable_get('theme_default') != $theme) {
    $items[$safe_name]['#attached']['css'] = array(
      drupal_get_path('module', 'localgov_base_admin') . '/css/localgov_base_admin.navbar.css',
    );
  }

  return $items;
}
