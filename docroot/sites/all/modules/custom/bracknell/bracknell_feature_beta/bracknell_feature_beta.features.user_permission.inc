<?php
/**
 * @file
 * bracknell_feature_beta.features.user_permission.inc
 * TODO: Add file description
 *
 * @package   bracknell_feature_beta
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_beta_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer bracknell_feature_beta'.
  $permissions['access bracknell_feature_beta'] = array(
    'name' => 'access bracknell_feature_beta',
    'roles' => array(
      'site-administrator' => 'site-administrator',
      'site-editor' => 'site-editor',
      'content-administrator' => 'content-administrator',
      'content-editor' => 'content-editor',
    ),
    'module' => 'bracknell_feature_beta',
  );

  // Exported permission: 'administer bracknell_feature_beta'.
  $permissions['administer bracknell_feature_beta'] = array(
    'name' => 'administer bracknell_feature_beta',
    'roles' => array(
      'site-administrator' => 'site-administrator',
      'site-editor' => 'site-editor',
    ),
    'module' => 'bracknell_feature_beta',
  );

  return $permissions;
}
