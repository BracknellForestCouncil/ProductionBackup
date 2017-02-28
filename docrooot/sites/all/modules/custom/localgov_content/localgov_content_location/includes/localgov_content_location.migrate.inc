<?php
/**
 * @file
 * localgov_content_location.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_location
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_migrate_api()
 */
function localgov_content_location_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'content_location' => array(
        'title' => t('Content: Location'),
        'default_format' => 'plain_text',
      ),
    ),
    'migrations' => array(
      'TaxonomyLocationType' => array(
        'class_name' => 'TaxonomyLocationTypeMigration',
        'group_name' => 'content_location',
      ),
      'NodeLocation' => array(
        'class_name' => 'NodeLocationMigration',
        'group_name' => 'base_content',
      ),
    ),
  );
  return $api;
}
