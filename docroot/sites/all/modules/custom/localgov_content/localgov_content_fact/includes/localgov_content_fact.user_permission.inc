<?php
/**
 * @file
 * localgov_content_fact.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_fact
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_content_fact_permission() {
  $items = array();

  $items['access localgov_content_fact'] = array(
    'title' => t('Access LocalGov Content: Fact'),
    'description' => t('Access functionality provided by LocalGov Content: Fact.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_content_fact'] = array(
    'title' => t('Administer LocalGov Content: Fact'),
    'description' => t('Perform administration tasks for LocalGov Content: Fact.'),
    'restrict access' => FALSE,
  );

  return $items;
}
