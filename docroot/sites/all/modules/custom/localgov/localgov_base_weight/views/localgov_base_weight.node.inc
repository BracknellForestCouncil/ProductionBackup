<?php
/**
 * @file
 * localgov_base_weight.node.inc
 * TODO: Add file description
 *
 * @package   localgov_base_weight
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 $view = new view();
 $view->name = 'localgov_base_weight_node';
 $view->description = '';
 $view->tag = 'default';
 $view->base_table = 'node';
 $view->human_name = 'LocalGov Base: Weight - Node';
 $view->core = 7;
 $view->api_version = '3.0';
 $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

 /* Display: Master */
 $handler = $view->new_display('default', 'Master', 'default');
 $handler->display->display_options['title'] = 'LocalGov Base: Weight - Node';
 $handler->display->display_options['use_more_always'] = FALSE;
 $handler->display->display_options['access']['type'] = 'perm';
 $handler->display->display_options['access']['perm'] = 'administer localgov_base_weight';
 $handler->display->display_options['cache']['type'] = 'none';
 $handler->display->display_options['query']['type'] = 'views_query';
 $handler->display->display_options['exposed_form']['type'] = 'basic';
 $handler->display->display_options['pager']['type'] = 'none';
 $handler->display->display_options['style_plugin'] = 'table';
 /* Field: Content: Nid */
 $handler->display->display_options['fields']['nid']['id'] = 'nid';
 $handler->display->display_options['fields']['nid']['table'] = 'node';
 $handler->display->display_options['fields']['nid']['field'] = 'nid';
 $handler->display->display_options['fields']['nid']['label'] = 'Node';
 /* Field: Content: Published */
 $handler->display->display_options['fields']['status']['id'] = 'status';
 $handler->display->display_options['fields']['status']['table'] = 'node';
 $handler->display->display_options['fields']['status']['field'] = 'status';
 $handler->display->display_options['fields']['status']['not'] = 0;
 /* Field: Content: Title */
 $handler->display->display_options['fields']['title']['id'] = 'title';
 $handler->display->display_options['fields']['title']['table'] = 'node';
 $handler->display->display_options['fields']['title']['field'] = 'title';
 $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
 $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
 /* Field: Content: Type */
 $handler->display->display_options['fields']['type']['id'] = 'type';
 $handler->display->display_options['fields']['type']['table'] = 'node';
 $handler->display->display_options['fields']['type']['field'] = 'type';
 /* Field: Draggableviews: Content */
 $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
 $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
 $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
 $handler->display->display_options['fields']['draggableviews']['label'] = 'Weight';
 $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
 $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
 $handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
 $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
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
 $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
 $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
 $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
 $handler->display->display_options['arguments']['tid']['title'] = 'Set weight for "%1" content';
 $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
 $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
 $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
 $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
 /* Filter criterion: Content: Type */
 $handler->display->display_options['filters']['type']['id'] = 'type';
 $handler->display->display_options['filters']['type']['table'] = 'node';
 $handler->display->display_options['filters']['type']['field'] = 'type';
 $handler->display->display_options['filters']['type']['operator'] = 'not in';
 $handler->display->display_options['filters']['type']['value'] = array(
   'contact' => 'contact',
   'fact' => 'fact',
   'form' => 'form',
   'guide_section' => 'guide_section',
   'article' => 'article',
 );

 /* Display: Page */
 $handler = $view->new_display('page', 'Page', 'page');
 $handler->display->display_options['path'] = 'taxonomy/term/%/weight';
 $handler->display->display_options['menu']['type'] = 'tab';
 $handler->display->display_options['menu']['title'] = 'Content Order';
 $handler->display->display_options['menu']['description'] = 'Set weight for nodes in this category.';
 $handler->display->display_options['menu']['weight'] = '50';
 $handler->display->display_options['menu']['context'] = 1;
 $handler->display->display_options['menu']['context_only_inline'] = 0;
