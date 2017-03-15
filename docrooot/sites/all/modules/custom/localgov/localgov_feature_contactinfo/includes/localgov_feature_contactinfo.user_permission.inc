<?php
/**
 * @file
 * localgov_feature_contactinfo.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_contactinfo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_feature_contactinfo_permission() {
  $items = array();

  $items['access localgov_feature_contactinfo'] = array(
    'title' => t('Access LocalGov Feature: Contact Information'),
    'description' => t('Access functionality provided by LocalGov Feature: Contact Information.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_feature_contactinfo'] = array(
    'title' => t('Administer LocalGov Feature: Contact Information'),
    'description' => t('Perform administration tasks for LocalGov Feature: Contact Information.'),
    'restrict access' => FALSE,
  );

  return $items;
}
