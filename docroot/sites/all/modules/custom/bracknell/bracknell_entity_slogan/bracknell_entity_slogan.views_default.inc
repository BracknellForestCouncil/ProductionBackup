<?php
/**
 * @file
 * bracknell_entity_slogan.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bracknell_entity_slogan_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration_slogans';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_slogan';
  $view->human_name = 'Administration: Slogans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slogans';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_slogan_image' => 'field_slogan_image',
    'title' => 'title',
    'field_slogan_strapline' => 'field_slogan_strapline',
    'edit_link' => 'edit_link',
    'delete_link' => 'delete_link',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_slogan_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_slogan_strapline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Slogan';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/structure/entity-type/slogan/slogan/add">+ Add Slogan</a>';
  $handler->display->display_options['header']['area']['format'] = 'html_basic';
  /* Field: slogan: Logo */
  $handler->display->display_options['fields']['field_slogan_image']['id'] = 'field_slogan_image';
  $handler->display->display_options['fields']['field_slogan_image']['table'] = 'field_data_field_slogan_image';
  $handler->display->display_options['fields']['field_slogan_image']['field'] = 'field_slogan_image';
  $handler->display->display_options['fields']['field_slogan_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slogan_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Slogan: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_slogan';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: slogan: Strapline */
  $handler->display->display_options['fields']['field_slogan_strapline']['id'] = 'field_slogan_strapline';
  $handler->display->display_options['fields']['field_slogan_strapline']['table'] = 'field_data_field_slogan_strapline';
  $handler->display->display_options['fields']['field_slogan_strapline']['field'] = 'field_slogan_strapline';
  /* Field: Slogan: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_slogan';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Edit';
  /* Field: Slogan: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_slogan';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['label'] = 'Delete';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/localgov/slogans';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Slogans';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'localgov';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['administration_slogans'] = $view;

  return $export;
}
