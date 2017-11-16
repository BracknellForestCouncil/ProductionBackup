<?php
/**
 * @file
 * localgov_base_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access advanced_link autocomplete'.
  $permissions['access advanced_link autocomplete'] = array(
    'name' => 'access advanced_link autocomplete',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'advanced_link',
  );

  // Exported permission: 'access localgov_base_editor'.
  $permissions['access localgov_base_editor'] = array(
    'name' => 'access localgov_base_editor',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_editor',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer lightbox2'.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer localgov_base_editor'.
  $permissions['administer localgov_base_editor'] = array(
    'name' => 'administer localgov_base_editor',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_editor',
  );

  // Exported permission: 'administer youtube'.
  $permissions['administer youtube'] = array(
    'name' => 'administer youtube',
    'roles' => array(),
    'module' => 'youtube',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format html_basic'.
  $permissions['use text format html_basic'] = array(
    'name' => 'use text format html_basic',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format html_full'.
  $permissions['use text format html_full'] = array(
    'name' => 'use text format html_full',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
