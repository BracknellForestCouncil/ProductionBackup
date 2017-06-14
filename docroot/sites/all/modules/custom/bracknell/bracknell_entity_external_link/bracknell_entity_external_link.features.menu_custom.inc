<?php
/**
 * @file
 * bracknell_entity_external_link.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bracknell_entity_external_link_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: localgov.
  $menus['localgov'] = array(
    'menu_name' => 'localgov',
    'title' => 'LocalGov Administration',
    'description' => 'Administration menu for LocalGov editors.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration menu for LocalGov editors.');
  t('LocalGov Administration');

  return $menus;
}
