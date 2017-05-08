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

/**
 * Implements HOOK_preprocess().
 */
function bracknell_theme_base_preprocess(&$vars, $hook) {
  $vars['theme_directory'] = drupal_get_path('theme', $GLOBALS['theme']);
}

/**
 * Implements HOOK_preprocess_page().
 */
function bracknell_theme_base_preprocess_page(&$vars) {
  $header = drupal_get_http_header('X-UA-Compatible');
  if (empty($header)) {
    drupal_add_http_header('X-UA-Compatible', 'IE=Edge');
  }
  // Add information about the number of sidebars.
  if (!empty($vars['page']['sidebar_first']) && !empty($vars['page']['sidebar_second'])) {
    $vars['content_column_class'] = ' class="col-md-4 col-md-offset-1"';
  }
  elseif (!empty($vars['page']['sidebar_first']) || !empty($vars['page']['sidebar_second'])) {
    $vars['content_column_class'] = ' class="col-md-8 col-sm-12"';
  }
  else {
    $vars['content_column_class'] = ' class="col-sm-12"';
  }
  // Add theme hook suggestions for page.tpl.php files representing different
  // node types. Will come out as page--proomotional-page.tpl.php, for example.
  if (isset($vars['node'])) {
    $args = arg();
    unset($args[0]);
    $type = "page__{$vars['node']->type}";
    $vars['theme_hook_suggestions'] = array_merge($vars['theme_hook_suggestions'], array($type), theme_get_suggestions($args, $type));
  }

  $vars['footer_menu'] = _bracknell_generate_footer_menu_links();
}

/**
 * Generates menu links for the footer menu.
 *
 * @see bracknell_theme_base_preprocess_page()
 */
function _bracknell_generate_footer_menu_links() {
  $menu = menu_navigation_links('footer-menu');
  foreach ($menu as $key => $item) {
    unset($menu[$key]['attributes']['title']);
  }

  return theme('links__footer_menu', array(
    'links' => $menu,
    'attributes' => array(
      'class' => array('footer-links')
    )
  ));
}
