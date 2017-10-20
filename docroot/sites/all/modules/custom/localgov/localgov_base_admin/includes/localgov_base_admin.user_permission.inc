<?php
/**
 * @file
 * localgov_base_admin.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_admin
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_permission().
 */
function localgov_base_admin_permission() {
  $items = array();

  $items['access localgov_base_admin'] = array(
    'title' => t('Access LocalGov Base: Admin'),
    'description' => t('Access functionality provided by LocalGov Base: Admin.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_admin'] = array(
    'title' => t('Administer LocalGov Base: Admin'),
    'description' => t('Perform administration tasks for LocalGov Base: Admin.'),
    'restrict access' => FALSE,
  );

  $items['access drupal admin'] = array(
    'title' => t('Access Drupal Admin menu'),
    'description' => t('Whether the user can view the "Drupal Admin" menu'),
    'restrict access' => TRUE,
  );

  return $items;
}
