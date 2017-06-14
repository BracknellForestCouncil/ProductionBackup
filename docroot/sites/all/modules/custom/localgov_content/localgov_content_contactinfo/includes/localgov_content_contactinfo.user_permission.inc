<?php
/**
 * @file
 * localgov_content_contactinfo.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_contactinfo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_content_contactinfo_permission() {
  $items = array();

  $items['access localgov_content_contactinfo'] = array(
    'title' => t('Access LocalGov Content: Contact Information'),
    'description' => t('Access functionality provided by LocalGov Content: Contact Information.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_content_contactinfo'] = array(
    'title' => t('Administer LocalGov Content: Contact Information'),
    'description' => t('Perform administration tasks for LocalGov Content: Contact Information.'),
    'restrict access' => FALSE,
  );

  return $items;
}
