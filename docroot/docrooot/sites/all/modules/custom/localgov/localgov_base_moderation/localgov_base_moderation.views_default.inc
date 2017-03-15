<?php
/**
 * @file
 * localgov_base_moderation.views_default.inc
 *
 * @package   localgov_base_moderation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_views_default_views().
 */
function localgov_base_moderation_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'localgov_base_moderation') . '/views', '/\.inc$/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }
  }
  return $views;
}
