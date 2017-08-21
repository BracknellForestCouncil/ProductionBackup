<?php

/*
 * @file
 *  Contains the view definition for the parks filters.
 */

$view = new view();
$view->name = 'parks';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Parks';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'input_required' => 0,
    'text_input_required' => array(
      'text_input_required' => array(
        'value' => 'Select any filter and click on Apply to see results',
        'format' => 'html_basic',
      ),
    ),
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'secondary_collapse_override' => '0',
  ),
  'field_park_facilities_available_value' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 0,
      'autosubmit' => 0,
      'is_secondary' => 0,
      'any_label' => 'Select All',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'location_park' => 'location_park',
);
/* Filter criterion: Content: What facilities are available? (field_park_facilities_available) */
$handler->display->display_options['filters']['field_park_facilities_available_value']['id'] = 'field_park_facilities_available_value';
$handler->display->display_options['filters']['field_park_facilities_available_value']['table'] = 'field_data_field_park_facilities_available';
$handler->display->display_options['filters']['field_park_facilities_available_value']['field'] = 'field_park_facilities_available_value';
$handler->display->display_options['filters']['field_park_facilities_available_value']['value'] = array(
  'toilet' => 'toilet',
  'playarea' => 'playarea',
  'biking' => 'biking',
  'wheelchair' => 'wheelchair',
  'wildlife' => 'wildlife',
  'greenflag' => 'greenflag',
  'parking' => 'parking',
  'car' => 'car',
);
$handler->display->display_options['filters']['field_park_facilities_available_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_park_facilities_available_value']['expose']['operator_id'] = 'field_park_facilities_available_value_op';
$handler->display->display_options['filters']['field_park_facilities_available_value']['expose']['label'] = 'Filter by';
$handler->display->display_options['filters']['field_park_facilities_available_value']['expose']['operator'] = 'field_park_facilities_available_value_op';
$handler->display->display_options['filters']['field_park_facilities_available_value']['expose']['identifier'] = 'field_park_facilities_available_value';
$handler->display->display_options['filters']['field_park_facilities_available_value']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_park_facilities_available_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  7 => 0,
);
$handler->display->display_options['filters']['field_park_facilities_available_value']['reduce_duplicates'] = TRUE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Parks';
