<?php
/**
 * @file
 * localgov_feature_landingpage.taxonomy_term.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_landingpage
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 $view = new view();
 $view->name = 'localgov_base_taxonomy_children';
 $view->description = '';
 $view->tag = 'default';
 $view->base_table = 'taxonomy_term_data';
 $view->human_name = 'LocalGov Base Taxonomy: Category';
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
 /* Field: Taxonomy term: Name */
 $handler->display->display_options['fields']['name']['id'] = 'name';
 $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['name']['field'] = 'name';
 $handler->display->display_options['fields']['name']['label'] = '';
 $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
 $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
 $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
 /* Sort criterion: Draggableviews: Weight */
 $handler->display->display_options['sorts']['weight']['id'] = 'weight';
 $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
 $handler->display->display_options['sorts']['weight']['field'] = 'weight';
 $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'localgov_base_weight_taxonomy:page';
 $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
 /* Sort criterion: Taxonomy term: Name */
 $handler->display->display_options['sorts']['name']['id'] = 'name';
 $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['sorts']['name']['field'] = 'name';
 /* Contextual filter: Taxonomy term: Parent term */
 $handler->display->display_options['arguments']['parent']['id'] = 'parent';
 $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
 $handler->display->display_options['arguments']['parent']['field'] = 'parent';
 $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
 $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
 $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
 $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
 $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
 /* Filter criterion: Taxonomy vocabulary: Machine name */
 $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
 $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
 $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
 $handler->display->display_options['filters']['machine_name']['value'] = array(
   'category' => 'category',
 );

 /* Display: Content pane */
 $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
