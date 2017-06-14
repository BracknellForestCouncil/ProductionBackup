<?php
/**
 * @file
 * localgov_base_moderation.content.inc
 * Contains the exported form of the localgov_base_moderation module view
 * "Workbench (Content)"
 *
 * @package   localgov_base_moderation
 */

$view = new view();
$view->name = 'localgov_base_moderation_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'LocalGov Base Moderation: Workbench';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Moderation: List';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 25, 50, 75, 100, 150';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'vid' => 'vid',
  'hid' => 'hid',
  'title' => 'title',
  'field_category' => 'field_category',
  'field_tags' => 'field_tags',
  'section' => 'section',
  'name' => 'name',
  'timestamp' => 'timestamp',
  'log' => 'log',
  'from_state' => 'from_state',
  'state' => 'state',
  'stamp' => 'stamp',
  'published' => 'published',
  'is_current' => 'is_current',
  'workbench_moderation_history_link' => 'workbench_moderation_history_link',
  'custom_contentinfo' => 'custom_contentinfo',
  'nothing' => 'nothing',
  'nothing_1' => 'nothing_1',
  'custom_moderation' => 'custom_moderation',
  'custom_revision' => 'custom_revision',
  'moderation_actions' => 'moderation_actions',
);
$handler->display->display_options['style_options']['default'] = 'timestamp';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'vid' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'hid' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_category' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_tags' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'section' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'log' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'from_state' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'state' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'stamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'published' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'is_current' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'workbench_moderation_history_link' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'custom_contentinfo' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nothing_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'custom_moderation' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'custom_revision' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'moderation_actions' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Workbench Moderation: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
$handler->display->display_options['fields']['vid']['relationship'] = 'nid';
$handler->display->display_options['fields']['vid']['exclude'] = TRUE;
/* Field: Workbench Moderation: Moderation history ID */
$handler->display->display_options['fields']['hid']['id'] = 'hid';
$handler->display->display_options['fields']['hid']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['hid']['field'] = 'hid';
$handler->display->display_options['fields']['hid']['exclude'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'nid';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Category */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
/* Field: Content: Tags */
$handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
$handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['relationship'] = 'nid';
$handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
/* Field: Workbench Access: Section */
$handler->display->display_options['fields']['section']['id'] = 'section';
$handler->display->display_options['fields']['section']['table'] = 'workbench_access';
$handler->display->display_options['fields']['section']['field'] = 'section';
$handler->display->display_options['fields']['section']['label'] = 'Editorial Group';
$handler->display->display_options['fields']['section']['exclude'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Updated by';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['relationship'] = 'nid';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Content revision: Log message */
$handler->display->display_options['fields']['log']['id'] = 'log';
$handler->display->display_options['fields']['log']['table'] = 'node_revision';
$handler->display->display_options['fields']['log']['field'] = 'log';
$handler->display->display_options['fields']['log']['relationship'] = 'nid';
$handler->display->display_options['fields']['log']['exclude'] = TRUE;
/* Field: Workbench Moderation: From state */
$handler->display->display_options['fields']['from_state']['id'] = 'from_state';
$handler->display->display_options['fields']['from_state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['from_state']['field'] = 'from_state';
$handler->display->display_options['fields']['from_state']['exclude'] = TRUE;
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['exclude'] = TRUE;
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Workbench Moderation: Timestamp */
$handler->display->display_options['fields']['stamp']['id'] = 'stamp';
$handler->display->display_options['fields']['stamp']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['stamp']['field'] = 'stamp';
$handler->display->display_options['fields']['stamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['stamp']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['stamp']['date_format'] = 'short';
$handler->display->display_options['fields']['stamp']['second_date_format'] = 'long';
/* Field: Workbench Moderation: Published */
$handler->display->display_options['fields']['published']['id'] = 'published';
$handler->display->display_options['fields']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['published']['field'] = 'published';
$handler->display->display_options['fields']['published']['exclude'] = TRUE;
$handler->display->display_options['fields']['published']['type_custom_true'] = 'Published';
$handler->display->display_options['fields']['published']['type_custom_false'] = 'Unpublished';
$handler->display->display_options['fields']['published']['not'] = 0;
/* Field: Workbench Moderation: Current */
$handler->display->display_options['fields']['is_current']['id'] = 'is_current';
$handler->display->display_options['fields']['is_current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['is_current']['field'] = 'is_current';
$handler->display->display_options['fields']['is_current']['exclude'] = TRUE;
$handler->display->display_options['fields']['is_current']['type_custom_true'] = 'Current';
$handler->display->display_options['fields']['is_current']['type_custom_false'] = 'Not Current';
$handler->display->display_options['fields']['is_current']['not'] = 0;
/* Field: Workbench Moderation: Moderation history link */
$handler->display->display_options['fields']['workbench_moderation_history_link']['id'] = 'workbench_moderation_history_link';
$handler->display->display_options['fields']['workbench_moderation_history_link']['table'] = 'node';
$handler->display->display_options['fields']['workbench_moderation_history_link']['field'] = 'workbench_moderation_history_link';
$handler->display->display_options['fields']['workbench_moderation_history_link']['exclude'] = TRUE;
/* Field: - Content Info */
$handler->display->display_options['fields']['custom_contentinfo']['id'] = 'custom_contentinfo';
$handler->display->display_options['fields']['custom_contentinfo']['table'] = 'views';
$handler->display->display_options['fields']['custom_contentinfo']['field'] = 'nothing';
$handler->display->display_options['fields']['custom_contentinfo']['ui_name'] = '- Content Info';
$handler->display->display_options['fields']['custom_contentinfo']['label'] = 'Content Info';
$handler->display->display_options['fields']['custom_contentinfo']['alter']['text'] = 'ID: [nid]<br/>
[title]<br/>';
/* Field: - Category Info */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = '- Category Info';
$handler->display->display_options['fields']['nothing']['label'] = 'Categories';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'Category:<br/>
[field_category]<br/>
Tags:<br/>
[field_tags]
';
/* Field: - Status Info */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['ui_name'] = '- Status Info';
$handler->display->display_options['fields']['nothing_1']['label'] = 'Status Info';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Current: <strong>[is_current]</strong><br/>
Published: <strong>[published]</strong><br/>
Editorial Group:<br/>
<em>[section]</em>
';
/* Field: - Moderation Info */
$handler->display->display_options['fields']['custom_moderation']['id'] = 'custom_moderation';
$handler->display->display_options['fields']['custom_moderation']['table'] = 'views';
$handler->display->display_options['fields']['custom_moderation']['field'] = 'nothing';
$handler->display->display_options['fields']['custom_moderation']['ui_name'] = '- Moderation Info';
$handler->display->display_options['fields']['custom_moderation']['label'] = 'Moderation Info';
$handler->display->display_options['fields']['custom_moderation']['alter']['text'] = 'ID: [hid]<br/>
<strong>[state]</strong> (was [from_state])</br>
at [stamp]<br/>
<em>[workbench_moderation_history_link]</em>';
$handler->display->display_options['fields']['custom_moderation']['element_label_colon'] = FALSE;
/* Field: - Revision Info */
$handler->display->display_options['fields']['custom_revision']['id'] = 'custom_revision';
$handler->display->display_options['fields']['custom_revision']['table'] = 'views';
$handler->display->display_options['fields']['custom_revision']['field'] = 'nothing';
$handler->display->display_options['fields']['custom_revision']['ui_name'] = '- Revision Info';
$handler->display->display_options['fields']['custom_revision']['label'] = 'Revision Info';
$handler->display->display_options['fields']['custom_revision']['alter']['text'] = 'ID: [vid]<br/>
Edited by [name]</br>
at [timestamp]<br/>
<em>[log]</em>';
$handler->display->display_options['fields']['custom_revision']['element_label_colon'] = FALSE;
/* Field: Workbench Moderation: Moderation links */
$handler->display->display_options['fields']['moderation_actions']['id'] = 'moderation_actions';
$handler->display->display_options['fields']['moderation_actions']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['moderation_actions']['field'] = 'moderation_actions';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'nid';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Timestamp - Created';
/* Sort criterion: Workbench Moderation: Timestamp */
$handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
$handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
$handler->display->display_options['sorts']['stamp']['exposed'] = TRUE;
$handler->display->display_options['sorts']['stamp']['expose']['label'] = 'Timestamp - Last Update';
/* Sort criterion: Content revision: Updated date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['relationship'] = 'nid';
$handler->display->display_options['sorts']['timestamp']['exposed'] = TRUE;
$handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Timestamp - Last Revision';
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['relationship'] = 'nid';
$handler->display->display_options['sorts']['title']['exposed'] = TRUE;
$handler->display->display_options['sorts']['title']['expose']['label'] = 'Content - Title';
/* Sort criterion: Content: Type */
$handler->display->display_options['sorts']['type']['id'] = 'type';
$handler->display->display_options['sorts']['type']['table'] = 'node';
$handler->display->display_options['sorts']['type']['field'] = 'type';
$handler->display->display_options['sorts']['type']['relationship'] = 'nid';
$handler->display->display_options['sorts']['type']['exposed'] = TRUE;
$handler->display->display_options['sorts']['type']['expose']['label'] = 'Content - Type';
/* Sort criterion: Content: Nid */
$handler->display->display_options['sorts']['nid']['id'] = 'nid';
$handler->display->display_options['sorts']['nid']['table'] = 'node';
$handler->display->display_options['sorts']['nid']['field'] = 'nid';
$handler->display->display_options['sorts']['nid']['relationship'] = 'nid';
$handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
$handler->display->display_options['sorts']['nid']['expose']['label'] = 'ID - Content';
/* Sort criterion: Content revision: Vid */
$handler->display->display_options['sorts']['vid']['id'] = 'vid';
$handler->display->display_options['sorts']['vid']['table'] = 'node_revision';
$handler->display->display_options['sorts']['vid']['field'] = 'vid';
$handler->display->display_options['sorts']['vid']['relationship'] = 'nid';
$handler->display->display_options['sorts']['vid']['exposed'] = TRUE;
$handler->display->display_options['sorts']['vid']['expose']['label'] = 'ID - Revision';
/* Sort criterion: Workbench Moderation: Moderation history ID */
$handler->display->display_options['sorts']['hid']['id'] = 'hid';
$handler->display->display_options['sorts']['hid']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['sorts']['hid']['field'] = 'hid';
$handler->display->display_options['sorts']['hid']['exposed'] = TRUE;
$handler->display->display_options['sorts']['hid']['expose']['label'] = 'ID - Moderation';
/* Contextual filter: Content: Editorial Group (field_moderation) */
$handler->display->display_options['arguments']['field_moderation_tid']['id'] = 'field_moderation_tid';
$handler->display->display_options['arguments']['field_moderation_tid']['table'] = 'field_data_field_moderation';
$handler->display->display_options['arguments']['field_moderation_tid']['field'] = 'field_moderation_tid';
$handler->display->display_options['arguments']['field_moderation_tid']['relationship'] = 'nid';
$handler->display->display_options['arguments']['field_moderation_tid']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['title'] = 'Content in "%1" group';
$handler->display->display_options['arguments']['field_moderation_tid']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['breadcrumb'] = 'Content in "%1" group';
$handler->display->display_options['arguments']['field_moderation_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_moderation_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_moderation_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_moderation_tid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Workbench Moderation: State */
$handler->display->display_options['arguments']['state']['id'] = 'state';
$handler->display->display_options['arguments']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['arguments']['state']['field'] = 'state';
$handler->display->display_options['arguments']['state']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['state']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['state']['title'] = 'Content in "%1" state';
$handler->display->display_options['arguments']['state']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['state']['breadcrumb'] = 'Content in "%1" state';
$handler->display->display_options['arguments']['state']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['state']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['state']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['state']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['state']['limit'] = '0';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'nid';
$handler->display->display_options['filters']['title']['operator'] = '!=';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Author uid */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'node';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  7 => 0,
);
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['is_current']['id'] = 'is_current';
$handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['is_current']['field'] = 'is_current';
$handler->display->display_options['filters']['is_current']['value'] = '1';
$handler->display->display_options['filters']['is_current']['group'] = 1;
$handler->display->display_options['filters']['is_current']['exposed'] = TRUE;
$handler->display->display_options['filters']['is_current']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['is_current']['expose']['label'] = 'Current Revision';
$handler->display->display_options['filters']['is_current']['expose']['operator'] = 'is_current_op';
$handler->display->display_options['filters']['is_current']['expose']['identifier'] = 'is_current';
$handler->display->display_options['filters']['is_current']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['group'] = 1;
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
$handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Editorial Group (field_moderation) */
$handler->display->display_options['filters']['field_moderation_tid']['id'] = 'field_moderation_tid';
$handler->display->display_options['filters']['field_moderation_tid']['table'] = 'field_data_field_moderation';
$handler->display->display_options['filters']['field_moderation_tid']['field'] = 'field_moderation_tid';
$handler->display->display_options['filters']['field_moderation_tid']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_moderation_tid']['group'] = 1;
$handler->display->display_options['filters']['field_moderation_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_moderation_tid']['expose']['operator_id'] = 'field_moderation_tid_op';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['label'] = 'Editorial Group';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['operator'] = 'field_moderation_tid_op';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['identifier'] = 'field_moderation_tid';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_moderation_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
$handler->display->display_options['filters']['field_moderation_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_moderation_tid']['vocabulary'] = 'moderation';
$handler->display->display_options['filters']['field_moderation_tid']['hierarchy'] = 1;

/* Display: Page: List */
$handler = $view->new_display('page', 'Page: List', 'page_list');
$handler->display->display_options['path'] = 'admin/localgov/modules/localgov/localgov_base_moderation/list';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All Content';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'localgov';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Page: %status */
$handler = $view->new_display('page', 'Page: %status', 'page_status');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Moderation: By Status';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Workbench Moderation: State */
$handler->display->display_options['arguments']['state']['id'] = 'state';
$handler->display->display_options['arguments']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['arguments']['state']['field'] = 'state';
$handler->display->display_options['arguments']['state']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['state']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['state']['title'] = 'Content in "%1" state';
$handler->display->display_options['arguments']['state']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['state']['breadcrumb'] = 'Content in "%1" state';
$handler->display->display_options['arguments']['state']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['state']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['state']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['state']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['state']['limit'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'nid';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  7 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Author uid */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'node';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  7 => 0,
);
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['is_current']['id'] = 'is_current';
$handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['is_current']['field'] = 'is_current';
$handler->display->display_options['filters']['is_current']['value'] = '1';
$handler->display->display_options['filters']['is_current']['group'] = 1;
$handler->display->display_options['filters']['is_current']['exposed'] = TRUE;
$handler->display->display_options['filters']['is_current']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['is_current']['expose']['label'] = 'Current Revision';
$handler->display->display_options['filters']['is_current']['expose']['operator'] = 'is_current_op';
$handler->display->display_options['filters']['is_current']['expose']['identifier'] = 'is_current';
$handler->display->display_options['filters']['is_current']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Editorial Group (field_moderation) */
$handler->display->display_options['filters']['field_moderation_tid']['id'] = 'field_moderation_tid';
$handler->display->display_options['filters']['field_moderation_tid']['table'] = 'field_data_field_moderation';
$handler->display->display_options['filters']['field_moderation_tid']['field'] = 'field_moderation_tid';
$handler->display->display_options['filters']['field_moderation_tid']['relationship'] = 'nid';
$handler->display->display_options['filters']['field_moderation_tid']['group'] = 1;
$handler->display->display_options['filters']['field_moderation_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_moderation_tid']['expose']['operator_id'] = 'field_moderation_tid_op';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['label'] = 'Editorial Group';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['operator'] = 'field_moderation_tid_op';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['identifier'] = 'field_moderation_tid';
$handler->display->display_options['filters']['field_moderation_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_moderation_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
$handler->display->display_options['filters']['field_moderation_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_moderation_tid']['vocabulary'] = 'moderation';
$handler->display->display_options['filters']['field_moderation_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'admin/localgov/modules/localgov_base_moderation/status/%';
$handler->display->display_options['menu']['title'] = 'Moderation: By Status';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'localgov';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Page: %group */
$handler = $view->new_display('page', 'Page: %group', 'page_group');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Moderation: By Editorial Group';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Editorial Group (field_moderation) */
$handler->display->display_options['arguments']['field_moderation_tid']['id'] = 'field_moderation_tid';
$handler->display->display_options['arguments']['field_moderation_tid']['table'] = 'field_data_field_moderation';
$handler->display->display_options['arguments']['field_moderation_tid']['field'] = 'field_moderation_tid';
$handler->display->display_options['arguments']['field_moderation_tid']['relationship'] = 'nid';
$handler->display->display_options['arguments']['field_moderation_tid']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['title'] = 'Content in "%1" group';
$handler->display->display_options['arguments']['field_moderation_tid']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['breadcrumb'] = 'Content in "%1" group';
$handler->display->display_options['arguments']['field_moderation_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_moderation_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_moderation_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_moderation_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_moderation_tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_moderation_tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['field_moderation_tid']['validate_options']['type'] = 'convert';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'nid';
$handler->display->display_options['filters']['title']['operator'] = '!=';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Content: Author uid */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'node';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  3 => 0,
  6 => 0,
  5 => 0,
  7 => 0,
);
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['is_current']['id'] = 'is_current';
$handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['is_current']['field'] = 'is_current';
$handler->display->display_options['filters']['is_current']['value'] = '1';
$handler->display->display_options['filters']['is_current']['group'] = 1;
$handler->display->display_options['filters']['is_current']['exposed'] = TRUE;
$handler->display->display_options['filters']['is_current']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['is_current']['expose']['label'] = 'Current Revision';
$handler->display->display_options['filters']['is_current']['expose']['operator'] = 'is_current_op';
$handler->display->display_options['filters']['is_current']['expose']['identifier'] = 'is_current';
$handler->display->display_options['filters']['is_current']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['group'] = 1;
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
$handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  3 => 0,
  6 => 0,
);
$handler->display->display_options['path'] = 'admin/localgov/modules/localgov/localgov_base_moderation/group/%';
$handler->display->display_options['menu']['title'] = 'Moderation: By Group';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'localgov';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
