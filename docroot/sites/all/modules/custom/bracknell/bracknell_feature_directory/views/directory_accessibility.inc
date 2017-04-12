<?php

/*
 * @file
 *  Contains the view definition for the Accessibility block on directory pages.
 */

$view = new view();
$view->name = 'directory_accessibility';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Directory - Accessibility';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Accessibility';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Accessibility information */
$handler->display->display_options['fields']['field_accessibility']['id'] = 'field_accessibility';
$handler->display->display_options['fields']['field_accessibility']['table'] = 'field_data_field_accessibility';
$handler->display->display_options['fields']['field_accessibility']['field'] = 'field_accessibility';
$handler->display->display_options['fields']['field_accessibility']['label'] = '';
$handler->display->display_options['fields']['field_accessibility']['element_label_colon'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'location_car_park' => 'location_car_park',
  'location_community' => 'location_community',
  'location_leisure' => 'location_leisure',
  'location_library' => 'location_library',
  'location_main' => 'location_main',
  'location_park' => 'location_park',
  'location_playground' => 'location_playground',
  'location_school' => 'location_school',
  'location_council' => 'location_council',
);
/* Filter criterion: Content: Accessibility information (field_accessibility) */
$handler->display->display_options['filters']['field_accessibility_value']['id'] = 'field_accessibility_value';
$handler->display->display_options['filters']['field_accessibility_value']['table'] = 'field_data_field_accessibility';
$handler->display->display_options['filters']['field_accessibility_value']['field'] = 'field_accessibility_value';
$handler->display->display_options['filters']['field_accessibility_value']['operator'] = 'not empty';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Accessibility (Directory)';
