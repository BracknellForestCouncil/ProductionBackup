<?php
/**
 * @file
 * localgov_feature_help.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_help
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_feature_help_permission() {
  $items = array();

  $items['access localgov_feature_help'] = array(
    'title' => t('Access LocalGov Feature: Help'),
    'description' => t('Access functionality provided by LocalGov Feature: Help.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_feature_help'] = array(
    'title' => t('Administer LocalGov Feature: Help'),
    'description' => t('Perform administration tasks for LocalGov Feature: Help.'),
    'restrict access' => FALSE,
  );

  return $items;
}
