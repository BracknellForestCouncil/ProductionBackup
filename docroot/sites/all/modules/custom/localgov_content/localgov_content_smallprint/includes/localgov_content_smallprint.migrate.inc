<?php
/**
 * @file
 * localgov_content_smallprint.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_smallprint
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_migrate_api()
 */
function localgov_content_smallprint_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
    ),
    'migrations' => array(
      'NodeSmallprint' => array(
        'class_name' => 'NodeSmallprintMigration',
        'group_name' => 'base_content',
      ),
    ),
  );
  return $api;
}
