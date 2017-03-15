<?php
/**
 * @file
 * localgov_base_taxonomy.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_taxonomy
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_migrate_api()
 */
function localgov_base_taxonomy_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'base_taxonomy' => array(
        'title' => t('Taxonomy'),
        'default_format' => 'html_basic',
      ),
    ),
    'migrations' => array(
      'TaxonomyCategory' => array(
        'class_name' => 'TaxonomyCategoryMigration',
        'group_name' => 'base_taxonomy',
      ),
      'TaxonomyTags' => array(
        'class_name' => 'TaxonomyTagsMigration',
        'group_name' => 'base_taxonomy',
      ),
    ),
  );
  return $api;
}
