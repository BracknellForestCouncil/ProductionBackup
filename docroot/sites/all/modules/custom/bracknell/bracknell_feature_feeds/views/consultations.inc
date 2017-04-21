<?php

/**
 * @file
 * Defines the consultations view for bracknell_feature_feeds.views_default.inc.
 */

$view = new view();
$view->name = 'consultations';
$view->description = 'Shows the current active consultations';
$view->tag = 'default';
$view->base_table = 'aggregator_item';
$view->human_name = 'Consultations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Current consultations';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Aggregator: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Aggregator: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Aggregator: Body */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
/* Sort criterion: Aggregator: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['granularity'] = 'hour';
/* Filter criterion: Aggregator feed: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['value'] = 'Consultations';

