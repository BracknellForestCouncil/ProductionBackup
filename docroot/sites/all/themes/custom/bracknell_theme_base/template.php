<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the theme.
 */

/**
 * Implements hook_preprocess().
 */
function bracknell_theme_base_preprocess(&$vars, $hook) {
  $vars['theme_directory'] = drupal_get_path('theme', $GLOBALS['theme']);
}

/**
 * Implements hook_preprocess_page().
 */
function bracknell_theme_base_preprocess_page(&$vars) {
  $header = drupal_get_http_header('X-UA-Compatible');
  if (empty($header)) {
    drupal_add_http_header('X-UA-Compatible', 'IE=Edge');
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
      'class' => array('footer-links'),
    ),
  ));
}

/**
 * Returns HTML for a file attachments table.
 *
 * @param array $variables
 *   An associative array containing:
 *   - items: An array of file attachments.
 *
 * @ingroup themeable
 */
function bracknell_theme_base_file_formatter_table(array $variables) {
  $header = array(
    t('Attachment'),
    t('Size'),
  );
  $rows = array();

  foreach ($variables['items'] as $delta => $item) {
    $file_description = '';
    if (!empty($item['field_file_description'])) {
      $file_description = $item['field_file_description'][LANGUAGE_NONE][0]['safe_value'];
    }
    $file_size = format_size($item['filesize']);
    $rows[] = array(
      theme('file_link', array('file' => (object) $item)) . $file_description,
      format_size(round($file_size)),
    );
  }

  return empty($rows) ? '' : theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Implements theme_tablefield_view().
 */
function bracknell_theme_base_tablefield_view($variables) {
  $attributes = $variables['attributes'] + array(
    'id' => 'tablefield-' . $variables['delta'],
    'class' => array('tablefield', 'tablefield-' . $variables['delta']),
  );

  // Apply scope property to headers for accessibility.
  if (is_array($variables['header'])) {
    foreach ($variables['header'] as &$header) {
      $header['scope'] = 'col';
    }
  }

  // If the user has access to the csv export option, display it now.
  $export = '';
  if ($variables['export'] && user_access('export tablefield')) {
    $url = sprintf('tablefield/export/%s/%s/%s/%s/%s', $variables['entity_type'], $variables['entity_id'], $variables['field_name'], $variables['langcode'], $variables['delta']);
    $export = '<div id="tablefield-export-link-' . $variables['delta'] . '" class="tablefield-export-link">' . l(t('Export Table Data'), $url) . '</div>';
  }

  // Prepare variables for theme_table().
  $theme_variables = array(
    'header' => $variables['header'],
    'rows' => $variables['rows'],
    'attributes' => $attributes,
  );
  if ($variables['caption']) {
    $theme_variables['caption'] = $variables['caption'];
  }

  // Need to add in entity_id because often the tablefields have the same delta,
  // especially when in separate paragraphs.
  $uuid = isset($variables['entity_id']) ? $variables['delta'] . '-' . $variables['entity_id'] : $variables['delta'];

  // Wrap in `drupal_html_id()` as a failsafe.
  $uuid = drupal_html_id($uuid);

  $theme_variables['attributes']['id'] = 'tablefield-' . $uuid;

  return '<div id="tablefield-wrapper-' . $uuid . '" class="tablefield-wrapper">'
    . theme('table__tablefield', $theme_variables)
    . $export
    . '</div>';
}
