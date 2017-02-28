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
 * Implements hook_migrate_api()
 */
function localgov_base_moderation_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'base_moderation' => array(
        'title' => t('Moderation'),
        'default_format' => 'html_basic',
      ),
    ),
    'migrations' => array(
      'TaxonomyModeration' => array(
        'class_name' => 'TaxonomyModerationMigration',
        'group_name' => 'base_moderation',
      ),
    ),
  );
  return $api;
}
