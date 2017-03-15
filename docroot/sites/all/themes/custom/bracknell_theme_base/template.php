<?php
/**
 * @file
 * template.php
 * Template overrides as well as (pre-)process and alter hooks for the
 * Bracknell Base Theme theme.
 *
 * @package   bracknell_theme_base
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

function bracknell_theme_base_preprocess(&$variables, $hook) {
  $variables['theme_directory']=drupal_get_path('theme',$GLOBALS['theme']);
  // dpm($variables);
}

function bracknell_theme_base_preprocess_page(&$variables) {
  $header = drupal_get_http_header('X-UA-Compatible');
  if (empty($header)) {
    drupal_add_http_header('X-UA-Compatible', 'IE=Edge');
  }
  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-md-4 col-md-offset-1"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-md-8 col-sm-12"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }
}
