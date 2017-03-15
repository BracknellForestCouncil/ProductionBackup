<?php
/**
 * @file
 * localgov_base_export.features.user_permission.inc
 * TODO: Add file description
 *
 * @package   localgov_base_export
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener 
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_export_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer localgov_base_export'.
  $permissions['access localgov_base_export'] = array(
    'name' => 'access localgov_base_export',
    'roles' => array(
      'site-administrator' => 'site-administrator',
      'site-editor' => 'site-editor',
      'content-administrator' => 'content-administrator',
      'content-editor' => 'content-editor',
    ),
    'module' => 'localgov_base_export',
  );

  // Exported permission: 'administer localgov_base_export'.
  $permissions['administer localgov_base_export'] = array(
    'name' => 'administer localgov_base_export',
    'roles' => array(
      'site-administrator' => 'site-administrator',
      'site-editor' => 'site-editor',
    ),
    'module' => 'localgov_base_export',
  );

  return $permissions;
}
