<?php
/**
 * @file
 * localgov_feature_landingpage.pages_default.inc
 *
 * @package   localgov_feature_landingpage
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function localgov_feature_landingpage_default_page_manager_handlers() {
  $handlers = array();
  $files = file_scan_directory(drupal_get_path('module', 'localgov_feature_landingpage') . '/pages', '/\.handler.inc$/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($handler)) {
      $handlers[$file->name] = $handler;
    }
  }
  return $handlers;
}
