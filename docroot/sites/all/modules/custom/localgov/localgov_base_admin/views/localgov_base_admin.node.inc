<?php
/**
 * @file
 * localgov_base_admin.node.inc
 * TODO: Add file description
 *
 * @package   localgov_base_admin
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

$view = new view();
$view->name = 'localgov_base_admin_node';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'LocalGov Base Admin: Node';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'LocalGov Base Admin: Node';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Node UUID */
$handler->display->display_options['fields']['uuid']['id'] = 'uuid';
$handler->display->display_options['fields']['uuid']['table'] = 'node';
$handler->display->display_options['fields']['uuid']['field'] = 'uuid';
$handler->display->display_options['fields']['uuid']['exclude'] = TRUE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['date_format'] = 'long';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['exclude'] = TRUE;
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Promoted to front page */
$handler->display->display_options['fields']['promote']['id'] = 'promote';
$handler->display->display_options['fields']['promote']['table'] = 'node';
$handler->display->display_options['fields']['promote']['field'] = 'promote';
$handler->display->display_options['fields']['promote']['exclude'] = TRUE;
$handler->display->display_options['fields']['promote']['not'] = 0;
/* Field: Content: Sticky */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
$handler->display->display_options['fields']['sticky']['not'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading"><h3 class="panel-title">Node Information</h3></div>
  <div class="panel-body">
    <ul class="list-group">
      <li class="list-group-item">Node ID <span class="badge">[nid]</span></li>
      <li class="list-group-item">Node UUID <span class="badge">[uuid]</span></li>
      <li class="list-group-item">Path <span class="badge">[path]</span></li>
    </ul>
    <ul class="list-group">
      <li class="list-group-item">Created <span class="badge">[created]</span></li>
      <li class="list-group-item">Updated <span class="badge">[changed]</span></li>
    </ul>
    <ul class="list-group">
      <li class="list-group-item">Published <span class="badge">[status]</span></li>
      <li class="list-group-item">Promoted <span class="badge">[promote]</span></li>
      <li class="list-group-item">Sticky <span class="badge">[sticky]</span></li>
    </ul>
  </div>
</div>
<br />';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Editorial Group */
$handler->display->display_options['fields']['field_moderation']['id'] = 'field_moderation';
$handler->display->display_options['fields']['field_moderation']['table'] = 'field_data_field_moderation';
$handler->display->display_options['fields']['field_moderation']['field'] = 'field_moderation';
$handler->display->display_options['fields']['field_moderation']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_moderation']['type'] = 'taxonomy_term_reference_plain';
/* Field: Field: Team */
$handler->display->display_options['fields']['field_team']['id'] = 'field_team';
$handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
$handler->display->display_options['fields']['field_team']['field'] = 'field_team';
$handler->display->display_options['fields']['field_team']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_team']['settings'] = array(
  'link' => 0,
);
/* Field: Field: Category */
$handler->display->display_options['fields']['field_category']['id'] = 'field_category';
$handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
$handler->display->display_options['fields']['field_category']['field'] = 'field_category';
$handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Weight */
$handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
$handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
$handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
$handler->display->display_options['fields']['field_weight']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_weight']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Field: Tags */
$handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
$handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="panel panel-default">
  <div class="panel-heading"><h3 class="panel-title">Site Structure</h3></div>
  <div class="panel-body">
    <ul class="list-group">
      <li class="list-group-item">Editorial Group <span class="badge">[field_moderation]</span></li>
      <li class="list-group-item">Team <span class="badge">[field_team]</span></li>
    </ul>
    <ul class="list-group">
      <li class="list-group-item">Category <span class="badge">[field_category]</span></li>
      <li class="list-group-item">Weight <span class="badge">[field_weight]</span></li>
    </ul>
    <ul class="list-group">
      <li class="list-group-item">Tags <span class="badge">[field_tags]</span></li>
    </ul>
  </div>
</div>
<br />';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
