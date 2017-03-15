<?php
/**
 * @file
 * localgov_feature_landingpage.node.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_landingpage
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 $view = new view();
 $view->name = 'localgov_base_taxonomy_node';
 $view->description = '';
 $view->tag = 'default';
 $view->base_table = 'node';
 $view->human_name = 'LocalGov Base Taxonomy: Node';
 $view->core = 7;
 $view->api_version = '3.0';
 $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

 /* Display: Master */
 $handler = $view->new_display('default', 'Master', 'default');
 $handler->display->display_options['use_more_always'] = FALSE;
 $handler->display->display_options['access']['type'] = 'perm';
 $handler->display->display_options['cache']['type'] = 'none';
 $handler->display->display_options['query']['type'] = 'views_query';
 $handler->display->display_options['exposed_form']['type'] = 'basic';
 $handler->display->display_options['pager']['type'] = 'full';
 $handler->display->display_options['style_plugin'] = 'default';
 $handler->display->display_options['style_options']['default_row_class'] = FALSE;
 $handler->display->display_options['style_options']['row_class_special'] = FALSE;
 $handler->display->display_options['row_plugin'] = 'fields';
 $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
 /* Field: Content: Title */
 $handler->display->display_options['fields']['title']['id'] = 'title';
 $handler->display->display_options['fields']['title']['table'] = 'node';
 $handler->display->display_options['fields']['title']['field'] = 'title';
 $handler->display->display_options['fields']['title']['label'] = '';
 $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
 $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
 /* Sort criterion: Draggableviews: Weight */
 $handler->display->display_options['sorts']['weight']['id'] = 'weight';
 $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
 $handler->display->display_options['sorts']['weight']['field'] = 'weight';
 $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'localgov_base_weight_node:page';
 $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
 /* Sort criterion: Content: Title */
 $handler->display->display_options['sorts']['title']['id'] = 'title';
 $handler->display->display_options['sorts']['title']['table'] = 'node';
 $handler->display->display_options['sorts']['title']['field'] = 'title';
 /* Contextual filter: Content: Has taxonomy term ID */
 $handler->display->display_options['arguments']['tid']['id'] = 'tid';
 $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
 $handler->display->display_options['arguments']['tid']['field'] = 'tid';
 $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
 $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
 $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
 $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
 $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
 $handler->display->display_options['filters']['type']['operator'] = 'not in';
 $handler->display->display_options['filters']['type']['value'] = array(
   'easyread' => 'easyread',
   'fact' => 'fact',
   'form' => 'form',
   'guide_section' => 'guide_section',
   'article' => 'article',
 );

 /* Display: Nodes < 12 */
 $handler = $view->new_display('panel_pane', 'Nodes < 12', 'panel_pane_1');
 $handler->display->display_options['defaults']['pager'] = FALSE;
 $handler->display->display_options['pager']['type'] = 'some';
 $handler->display->display_options['pager']['options']['items_per_page'] = '12';
 $handler->display->display_options['pager']['options']['offset'] = '0';

 /* Display: Nodes > 12 */
 $handler = $view->new_display('panel_pane', 'Nodes > 12', 'panel_pane_2');
 $handler->display->display_options['defaults']['title'] = FALSE;
 $handler->display->display_options['title'] = 'Also in this section';
 $handler->display->display_options['defaults']['pager'] = FALSE;
 $handler->display->display_options['pager']['type'] = 'none';
 $handler->display->display_options['pager']['options']['offset'] = '12';
