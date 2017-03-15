<?php
/**
 * @file
 * localgov_feature_easyread.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_easyread
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_feature_easyread_permission() {
  $items = array();

  $items['access localgov_feature_easyread'] = array(
    'title' => t('Access LocalGov Feature: EasyRead'),
    'description' => t('Access functionality provided by LocalGov Feature: EasyRead.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_feature_easyread'] = array(
    'title' => t('Administer LocalGov Feature: EasyRead'),
    'description' => t('Perform administration tasks for LocalGov Feature: EasyRead.'),
    'restrict access' => FALSE,
  );

  return $items;
}
