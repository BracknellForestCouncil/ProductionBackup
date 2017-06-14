<?php
/**
 * @file
 * localgov_base_import.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_import
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_base_import_permission() {
  $items = array();

  $items['access localgov_base_import'] = array(
    'title' => t('Access LocalGov Base: Import'),
    'description' => t('Access functionality provided by LocalGov Base: Import.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_import'] = array(
    'title' => t('Administer LocalGov Base: Import'),
    'description' => t('Perform administration tasks for LocalGov Base: Import.'),
    'restrict access' => FALSE,
  );

  return $items;
}
