<?php
/**
 * @file
 * bracknell_page_home.views_default.inc
 *
 * @package   bracknell_page_home
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

/**
 * Implements hook_views_default_views().
 */
function bracknell_page_home_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'bracknell_page_home') . '/views', '/\.inc$/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }
  }
  return $views;
}
