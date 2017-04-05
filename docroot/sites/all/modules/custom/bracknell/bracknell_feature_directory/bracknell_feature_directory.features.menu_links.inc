<?php
/**
 * @file
 * bracknell_feature_directory.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bracknell_feature_directory_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: localgov_manage-directory-entries:admin/localgov/directory-entries.
  $menu_links['localgov_manage-directory-entries:admin/localgov/directory-entries'] = array(
    'menu_name' => 'localgov',
    'link_path' => 'admin/localgov/directory-entries',
    'router_path' => 'admin/localgov/directory-entries',
    'link_title' => 'Manage Directory Entries',
    'options' => array(
      'identifier' => 'localgov_manage-directory-entries:admin/localgov/directory-entries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'localgov_localgov:admin/localgov',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Directory Entries');

  return $menu_links;
}
