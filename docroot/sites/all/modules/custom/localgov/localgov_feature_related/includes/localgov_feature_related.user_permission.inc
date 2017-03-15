<?php
/**
 * @file
 * localgov_feature_related.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_related
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_feature_related_permission() {
  $items = array();

  $items['access localgov_feature_related'] = array(
    'title' => t('Access LocalGov Feature: Related'),
    'description' => t('Access functionality provided by LocalGov Feature: Related.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_feature_related'] = array(
    'title' => t('Administer LocalGov Feature: Related'),
    'description' => t('Perform administration tasks for LocalGov Feature: Related.'),
    'restrict access' => FALSE,
  );

  return $items;
}
