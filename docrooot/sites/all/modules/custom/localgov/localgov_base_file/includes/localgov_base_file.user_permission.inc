<?php
/**
 * @file
 * localgov_base_file.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_file
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_base_file_permission() {
  $items = array();

  $items['access localgov_base_file'] = array(
    'title' => t('Access LocalGov Base: File'),
    'description' => t('Access functionality provided by LocalGov Base: File.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_file'] = array(
    'title' => t('Administer LocalGov Base: File'),
    'description' => t('Perform administration tasks for LocalGov Base: File.'),
    'restrict access' => FALSE,
  );

  return $items;
}
