<?php
/**
 * @file
 * localgov_base_redirect.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_redirect
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_migrate_api()
 */
function localgov_base_redirect_migrate_api() {
  $api = array(
    'api' => 2,
    'destination handlers' => array(
      'MigrateRedirectEntityHandler',
    ),
    'migrations' => array(
      'Redirect' => array(
        'class_name' => 'RedirectMigration',
        'group_name' => 'base_import',
      ),
    ),
  );
  return $api;
}
