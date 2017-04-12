<?php
/**
 * @file
 * bracknell_feature_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bracknell_feature_directory_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'bracknell_feature_directory') . '/views', '/\.inc$/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }
  }
  return $views;
}
