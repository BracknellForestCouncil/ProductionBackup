<?php
/**
 * @file
 * localgov_base_content.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_content
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_base_content_permission() {
  $items = array();

  $items['access localgov_base_content'] = array(
    'title' => t('Access LocalGov Base: Content'),
    'description' => t('Access functionality provided by LocalGov Base: Content.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_content'] = array(
    'title' => t('Administer LocalGov Base: Content'),
    'description' => t('Perform administration tasks for LocalGov Base: Content.'),
    'restrict access' => FALSE,
  );

  return $items;
}
