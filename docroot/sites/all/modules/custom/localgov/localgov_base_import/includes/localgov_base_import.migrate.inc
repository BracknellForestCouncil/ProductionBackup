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
 * Implements hook_migrate_api()
 */
function localgov_base_import_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'base_import' => array(
        'title' => t('Base'),
        'default_format' => 'html_basic',
      ),
      'base_content' => array(
        'title' => t('Content'),
        'default_format' => 'html_basic',
      ),
    ),
    'migrations' => array(
      'Menu' => array(
        'class_name' => 'MenuMigration',
        'group_name' => 'base_import',
      ),
      'Taxonomy' => array(
        'class_name' => 'TaxonomyMigration',
        'group_name' => 'base_import',
      ),
      'User' => array(
        'class_name' => 'UserMigration',
        'group_name' => 'base_import',
      ),
    ),
  );
  return $api;
}
