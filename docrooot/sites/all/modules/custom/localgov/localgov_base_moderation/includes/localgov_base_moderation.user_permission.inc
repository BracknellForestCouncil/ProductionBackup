<?php
/**
 * @file
 * localgov_base_moderation.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_moderation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_base_moderation_permission() {
  $items = array();

  $items['access localgov_base_moderation'] = array(
    'title' => t('Access LocalGov Base: Moderation'),
    'description' => t('Access functionality provided by LocalGov Base: Moderation.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_moderation'] = array(
    'title' => t('Administer LocalGov Base: Moderation'),
    'description' => t('Perform administration tasks for LocalGov Base: Moderation.'),
    'restrict access' => FALSE,
  );

  return $items;
}
