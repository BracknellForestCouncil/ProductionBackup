<?php

/*
 * @file
 *  Contains the view definition for the address block on directory pages.
 */

$view = new view();
$view->name = 'directory_address';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'eck_directory_entry';
$view->human_name = 'Directory - Address';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Address';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'address_only';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_directory_entry_node']['id'] = 'reverse_field_directory_entry_node';
$handler->display->display_options['relationships']['reverse_field_directory_entry_node']['table'] = 'eck_directory_entry';
$handler->display->display_options['relationships']['reverse_field_directory_entry_node']['field'] = 'reverse_field_directory_entry_node';
/* Field: Directory entry: Id */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'eck_directory_entry';
$handler->display->display_options['fields']['id']['field'] = 'id';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_directory_entry_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Directory entry (field_directory_entry) */
$handler->display->display_options['filters']['field_directory_entry_target_id']['id'] = 'field_directory_entry_target_id';
$handler->display->display_options['filters']['field_directory_entry_target_id']['table'] = 'field_data_field_directory_entry';
$handler->display->display_options['filters']['field_directory_entry_target_id']['field'] = 'field_directory_entry_target_id';
$handler->display->display_options['filters']['field_directory_entry_target_id']['relationship'] = 'reverse_field_directory_entry_node';
$handler->display->display_options['filters']['field_directory_entry_target_id']['operator'] = 'not empty';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Address (Directory)';
