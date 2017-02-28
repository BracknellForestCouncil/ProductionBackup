<?php
/**
 * @file
 * localgov_base_export.node.inc
 * TODO: Add file description
 *
 * @package   localgov_base_export
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 $view = new view();
 $view->name = 'localgov_base_export_node';
 $view->description = '';
 $view->tag = 'default';
 $view->base_table = 'node';
 $view->human_name = 'LocalGov Base: Export - Node';
 $view->core = 7;
 $view->api_version = '3.0';
 $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

 /* Display: Master */
 $handler = $view->new_display('default', 'Master', 'default');
 $handler->display->display_options['title'] = 'LocalGov Base: Export - Content';
 $handler->display->display_options['use_more_always'] = FALSE;
 $handler->display->display_options['access']['type'] = 'perm';
 $handler->display->display_options['access']['perm'] = 'access localgov_base_export';
 $handler->display->display_options['cache']['type'] = 'none';
 $handler->display->display_options['query']['type'] = 'views_query';
 $handler->display->display_options['exposed_form']['type'] = 'basic';
 $handler->display->display_options['pager']['type'] = 'none';
 $handler->display->display_options['style_plugin'] = 'table';
 /* Field: Content: Nid */
 $handler->display->display_options['fields']['nid']['id'] = 'nid';
 $handler->display->display_options['fields']['nid']['table'] = 'node';
 $handler->display->display_options['fields']['nid']['field'] = 'nid';
 $handler->display->display_options['fields']['nid']['label'] = 'ID';
 /* Field: Content: Node UUID */
 $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
 $handler->display->display_options['fields']['uuid']['table'] = 'node';
 $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
 $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
 /* Field: Content: Node UUID */
 $handler->display->display_options['fields']['uuid_guide']['id'] = 'uuid_guide';
 $handler->display->display_options['fields']['uuid_guide']['table'] = 'node';
 $handler->display->display_options['fields']['uuid_guide']['field'] = 'uuid';
 $handler->display->display_options['fields']['uuid_guide']['relationship'] = 'gid';
 $handler->display->display_options['fields']['uuid_guide']['label'] = 'Guide UUID';
 /* Field: Content: Node UUID */
 $handler->display->display_options['fields']['uuid_guide_parent']['id'] = 'uuid_guide_parent';
 $handler->display->display_options['fields']['uuid_guide_parent']['table'] = 'node';
 $handler->display->display_options['fields']['uuid_guide_parent']['field'] = 'uuid';
 $handler->display->display_options['fields']['uuid_guide_parent']['relationship'] = 'nid';
 $handler->display->display_options['fields']['uuid_guide_parent']['label'] = 'Guide Parent UUID';
 /* Field: Content: Published */
 $handler->display->display_options['fields']['status']['id'] = 'status';
 $handler->display->display_options['fields']['status']['table'] = 'node';
 $handler->display->display_options['fields']['status']['field'] = 'status';
 $handler->display->display_options['fields']['status']['type'] = 'boolean';
 $handler->display->display_options['fields']['status']['not'] = 0;
 /* Field: Content: Promoted to front page */
 $handler->display->display_options['fields']['promote']['id'] = 'promote';
 $handler->display->display_options['fields']['promote']['table'] = 'node';
 $handler->display->display_options['fields']['promote']['field'] = 'promote';
 $handler->display->display_options['fields']['promote']['label'] = 'Status';
 $handler->display->display_options['fields']['promote']['type'] = 'boolean';
 $handler->display->display_options['fields']['promote']['not'] = 0;
 /* Field: Content: Sticky */
 $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
 $handler->display->display_options['fields']['sticky']['table'] = 'node';
 $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
 $handler->display->display_options['fields']['sticky']['type'] = 'boolean';
 $handler->display->display_options['fields']['sticky']['not'] = 0;
 /* Field: Content: Post date */
 $handler->display->display_options['fields']['created']['id'] = 'created';
 $handler->display->display_options['fields']['created']['table'] = 'node';
 $handler->display->display_options['fields']['created']['field'] = 'created';
 $handler->display->display_options['fields']['created']['label'] = 'Created';
 $handler->display->display_options['fields']['created']['date_format'] = 'custom';
 $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
 $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
 /* Field: Content: Updated date */
 $handler->display->display_options['fields']['changed']['id'] = 'changed';
 $handler->display->display_options['fields']['changed']['table'] = 'node';
 $handler->display->display_options['fields']['changed']['field'] = 'changed';
 $handler->display->display_options['fields']['changed']['label'] = 'Updated';
 $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
 $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
 $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
 /* Field: Content: Author uid */
 $handler->display->display_options['fields']['uid']['id'] = 'uid';
 $handler->display->display_options['fields']['uid']['table'] = 'node';
 $handler->display->display_options['fields']['uid']['field'] = 'uid';
 $handler->display->display_options['fields']['uid']['label'] = 'User ID';
 $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
 /* Field: Global: Custom text */
 $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
 $handler->display->display_options['fields']['nothing']['table'] = 'views';
 $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
 $handler->display->display_options['fields']['nothing']['label'] = 'Language';
 $handler->display->display_options['fields']['nothing']['alter']['text'] = 'en';
 /* Field: Content: Path */
 $handler->display->display_options['fields']['path']['id'] = 'path';
 $handler->display->display_options['fields']['path']['table'] = 'node';
 $handler->display->display_options['fields']['path']['field'] = 'path';
 /* Field: Workbench Moderation: State */
 $handler->display->display_options['fields']['state']['id'] = 'state';
 $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
 $handler->display->display_options['fields']['state']['field'] = 'state';
 $handler->display->display_options['fields']['state']['label'] = 'Moderation State';
 $handler->display->display_options['fields']['state']['machine_name'] = 0;
 /* Field: Workbench Access: Section */
 $handler->display->display_options['fields']['section']['id'] = 'section';
 $handler->display->display_options['fields']['section']['table'] = 'workbench_access';
 $handler->display->display_options['fields']['section']['field'] = 'section';
 $handler->display->display_options['fields']['section']['label'] = 'Moderation Group';
 /* Field: Content: Title */
 $handler->display->display_options['fields']['title']['id'] = 'title';
 $handler->display->display_options['fields']['title']['table'] = 'node';
 $handler->display->display_options['fields']['title']['field'] = 'title';
 $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
 $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
 /* Field: Content: Category */
 $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
 $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
 $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
 $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
 $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
 /* Field: Content: Tags */
 $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
 $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
 $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
 $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
 $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
 /* Sort criterion: Content: Nid */
 $handler->display->display_options['sorts']['nid']['id'] = 'nid';
 $handler->display->display_options['sorts']['nid']['table'] = 'node';
 $handler->display->display_options['sorts']['nid']['field'] = 'nid';
 /* Contextual filter: Content: Type */
 $handler->display->display_options['arguments']['type']['id'] = 'type';
 $handler->display->display_options['arguments']['type']['table'] = 'node';
 $handler->display->display_options['arguments']['type']['field'] = 'type';
 $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
 $handler->display->display_options['arguments']['type']['exception']['title_enable'] = TRUE;
 $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
 $handler->display->display_options['arguments']['type']['title'] = 'Export "%1" Content';
 $handler->display->display_options['arguments']['type']['breadcrumb_enable'] = TRUE;
 $handler->display->display_options['arguments']['type']['breadcrumb'] = 'Export "%1" Content';
 $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
 $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
 $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
 $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
 $handler->display->display_options['arguments']['type']['limit'] = '0';
 /* Filter criterion: Workbench Moderation: Current */
 $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
 $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
 $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
 $handler->display->display_options['filters']['is_current']['value'] = '1';

 /* Display: Page */
 $handler = $view->new_display('page', 'Page', 'page');
 $handler->display->display_options['path'] = 'admin/localgov/export/node/%';

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
 $handler->display->display_options['path'] = 'admin/localgov/export/node/%/csv';
 $handler->display->display_options['displays'] = array(
   'page' => 'page',
   'default' => 0,
 );
