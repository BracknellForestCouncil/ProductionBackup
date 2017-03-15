<?php
/**
 * @file
 * localgov_base_navigation.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_base_navigation_permission() {
  $items = array();

  $items['access localgov_base_navigation'] = array(
    'title' => t('Access LocalGov Base: Navigation'),
    'description' => t('Access functionality provided by LocalGov Base: Navigation.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_navigation'] = array(
    'title' => t('Administer LocalGov Base: Navigation'),
    'description' => t('Perform administration tasks for LocalGov Base: Navigation.'),
    'restrict access' => FALSE,
  );

  return $items;
}
