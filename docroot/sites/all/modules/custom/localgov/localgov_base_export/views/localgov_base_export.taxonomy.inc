<?php
/**
 * @file
 * localgov_base_export.taxonomy.inc
 * TODO: Add file description
 *
 * @package   localgov_base_export
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 $view = new view();
 $view->name = 'localgov_base_export_taxonomy';
 $view->description = '';
 $view->tag = 'default';
 $view->base_table = 'taxonomy_term_data';
 $view->human_name = 'LocalGov Base: Export - Taxonomy';
 $view->core = 7;
 $view->api_version = '3.0';
 $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

 /* Display: Master */
 $handler = $view->new_display('default', 'Master', 'default');
 $handler->display->display_options['title'] = 'LocalGov Base: Export - Taxonomy';
 $handler->display->display_options['use_more_always'] = FALSE;
 $handler->display->display_options['access']['type'] = 'perm';
 $handler->display->display_options['access']['perm'] = 'access localgov_base_export';
 $handler->display->display_options['cache']['type'] = 'none';
 $handler->display->display_options['query']['type'] = 'views_query';
 $handler->display->display_options['exposed_form']['type'] = 'basic';
 $handler->display->display_options['pager']['type'] = 'none';
 $handler->display->display_options['style_plugin'] = 'table';
 /* Relationship: Taxonomy term: Parent term */
 $handler->display->display_options['relationships']['parent']['id'] = 'parent';
 $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
 $handler->display->display_options['relationships']['parent']['field'] = 'parent';
 /* Field: Taxonomy term: Term ID */
 $handler->display->display_options['fields']['tid']['id'] = 'tid';
 $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['tid']['field'] = 'tid';
 $handler->display->display_options['fields']['tid']['label'] = 'ID';
 $handler->display->display_options['fields']['tid']['separator'] = '';
 /* Field: Taxonomy term: Taxonomy term UUID */
 $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
 $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
 $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
 /* Field: Taxonomy vocabulary: Machine name */
 $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
 $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
 $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
 $handler->display->display_options['fields']['machine_name']['label'] = 'Vocabulary';
 /* Field: Taxonomy term: Taxonomy term UUID */
 $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
 $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
 $handler->display->display_options['fields']['uuid_1']['relationship'] = 'parent';
 $handler->display->display_options['fields']['uuid_1']['label'] = 'Parent UUID';
 /* Field: Taxonomy term: Name */
 $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
 $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['name_1']['field'] = 'name';
 $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
 $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
 $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
 /* Field: Taxonomy term: Weight */
 $handler->display->display_options['fields']['weight']['id'] = 'weight';
 $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['weight']['field'] = 'weight';
 $handler->display->display_options['fields']['weight']['separator'] = '';
 /* Field: Taxonomy term: Name */
 $handler->display->display_options['fields']['name']['id'] = 'name';
 $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['name']['field'] = 'name';
 $handler->display->display_options['fields']['name']['label'] = 'Title';
 $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
 $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
 $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
 /* Field: Taxonomy term: Term description */
 $handler->display->display_options['fields']['description']['id'] = 'description';
 $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['fields']['description']['field'] = 'description';
 $handler->display->display_options['fields']['description']['label'] = 'Description';
 /* Sort criterion: Taxonomy term: Term ID */
 $handler->display->display_options['sorts']['tid']['id'] = 'tid';
 $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
 $handler->display->display_options['sorts']['tid']['field'] = 'tid';
 /* Contextual filter: Taxonomy vocabulary: Machine name */
 $handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
 $handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
 $handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
 $handler->display->display_options['arguments']['machine_name']['default_action'] = 'not found';
 $handler->display->display_options['arguments']['machine_name']['exception']['title_enable'] = TRUE;
 $handler->display->display_options['arguments']['machine_name']['title_enable'] = TRUE;
 $handler->display->display_options['arguments']['machine_name']['title'] = 'Export "%1" Taxonomy Terms';
 $handler->display->display_options['arguments']['machine_name']['breadcrumb_enable'] = TRUE;
 $handler->display->display_options['arguments']['machine_name']['breadcrumb'] = 'Export "%1" Taxonomy Terms';
 $handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
 $handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
 $handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
 $handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
 $handler->display->display_options['arguments']['machine_name']['limit'] = '0';

 /* Display: Page */
 $handler = $view->new_display('page', 'Page', 'page');
 $handler->display->display_options['path'] = 'admin/localgov/export/taxonomy/%';

 /* Display: Data export */
 $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
 $handler->display->display_options['pager']['type'] = 'none';
 $handler->display->display_options['pager']['options']['offset'] = '0';
 $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
 $handler->display->display_options['style_options']['provide_file'] = 1;
 $handler->display->display_options['style_options']['filename'] = '%1-value.csv';
 $handler->display->display_options['style_options']['parent_sort'] = 0;
 $handler->display->display_options['style_options']['quote'] = 1;
 $handler->display->display_options['style_options']['trim'] = 1;
 $handler->display->display_options['style_options']['replace_newlines'] = 1;
 $handler->display->display_options['style_options']['newline_token'] = '1';
 $handler->display->display_options['style_options']['header'] = 1;
 $handler->display->display_options['style_options']['keep_html'] = 0;
 $handler->display->display_options['path'] = 'admin/localgov/export/taxonomy/%/csv';
 $handler->display->display_options['displays'] = array(
   'page' => 'page',
   'default' => 0,
 );
