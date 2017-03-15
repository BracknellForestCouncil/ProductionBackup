<?php
/**
 * @file
 * localgov_content_miscellaneous.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_miscellaneous
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_content_miscellaneous_permission() {
  $items = array();

  $items['access localgov_content_miscellaneous'] = array(
    'title' => t('Access LocalGov Content: Miscellaneous'),
    'description' => t('Access functionality provided by LocalGov Content: Miscellaneous.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_content_miscellaneous'] = array(
    'title' => t('Administer LocalGov Content: Miscellaneous'),
    'description' => t('Perform administration tasks for LocalGov Content: Miscellaneous.'),
    'restrict access' => FALSE,
  );

  return $items;
}
