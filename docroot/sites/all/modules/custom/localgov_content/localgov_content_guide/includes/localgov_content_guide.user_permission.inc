<?php
/**
 * @file
 * localgov_content_guide.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_guide
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_content_guide_permission() {
  $items = array();

  $items['access localgov_content_guide'] = array(
    'title' => t('Access LocalGov Content: Guide'),
    'description' => t('Access functionality provided by LocalGov Content: Guide.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_content_guide'] = array(
    'title' => t('Administer LocalGov Content: Guide'),
    'description' => t('Perform administration tasks for LocalGov Content: Guide.'),
    'restrict access' => FALSE,
  );

  return $items;
}
