<?php
/**
 * @file
 * bracknell_feature_beta.migrate.inc
 * TODO: Add file description
 *
 * @package   bracknell_feature_beta
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function bracknell_feature_beta_permission() {
  $items = array();

  $items['access bracknell_feature_beta'] = array(
    'title' => t('Access Bracknell Feature: Beta'),
    'description' => t('Access functionality provided by Bracknell Feature: Beta.'),
    'restrict access' => FALSE,
  );

  $items['administer bracknell_feature_beta'] = array(
    'title' => t('Administer Bracknell Feature: Beta'),
    'description' => t('Perform administration tasks for Bracknell Feature: Beta.'),
    'restrict access' => FALSE,
  );

  return $items;
}
