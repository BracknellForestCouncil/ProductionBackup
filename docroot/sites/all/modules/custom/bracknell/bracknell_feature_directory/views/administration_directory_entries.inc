<?php

/*
 * @file
 *  Contains the view definition for Manage Directory Entries.
 */

$view = new view();
$view->name = 'administration_directory_entries';
$view->description = 'Create and manage directory addresses';
$view->tag = 'default';
$view->base_table = 'eck_directory_entry';
$view->human_name = 'Administration: Directory entries';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Directory entries';
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
  'title' => 'title',
  'rendered_entity' => 'rendered_entity',
  'edit_link' => 'edit_link',
  'delete_link' => 'delete_link',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'rendered_entity' => array(
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
$handler->display->display_options['header']['area']['label'] = 'Add Directory entry';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<a href="/admin/structure/entity-type/directory_entry/directory_entry/add">+ Add Directory Entry</a>';
$handler->display->display_options['header']['area']['format'] = 'html_basic';
/* Field: Directory entry: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'eck_directory_entry';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Directory entry: Rendered Directory entry */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_directory_entry';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Directory entry: Edit link */
$handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
$handler->display->display_options['fields']['edit_link']['table'] = 'eck_directory_entry';
$handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
/* Field: Directory entry: Delete link */
$handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
$handler->display->display_options['fields']['delete_link']['table'] = 'eck_directory_entry';
$handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
/* Filter criterion: Directory entry: directory_entry type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'eck_directory_entry';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'directory_entry' => 'directory_entry',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/localgov/directory-entries';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Manage Directory Entries';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'localgov';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

