<?php
/**
 * @file
 * localgov_feature_contactinfo.node.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_contactinfo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 $view = new view();
 $view->name = 'contactinfo';
 $view->description = 'Display contact information on nodes.';
 $view->tag = 'default';
 $view->base_table = 'node';
 $view->human_name = 'Contact Information';
 $view->core = 7;
 $view->api_version = '3.0';
 $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

 /* Display: Master */
 $handler = $view->new_display('default', 'Master', 'default');
 $handler->display->display_options['title'] = 'Contact information';
 $handler->display->display_options['use_more_always'] = FALSE;
 $handler->display->display_options['access']['type'] = 'perm';
 $handler->display->display_options['cache']['type'] = 'none';
 $handler->display->display_options['query']['type'] = 'views_query';
 $handler->display->display_options['exposed_form']['type'] = 'basic';
 $handler->display->display_options['pager']['type'] = 'none';
 $handler->display->display_options['style_plugin'] = 'default';
 $handler->display->display_options['row_plugin'] = 'fields';
 /* Relationship: Entity Reference: Referenced Entity */
 $handler->display->display_options['relationships']['field_contactinfo_target_id']['id'] = 'field_contactinfo_target_id';
 $handler->display->display_options['relationships']['field_contactinfo_target_id']['table'] = 'field_data_field_contactinfo';
 $handler->display->display_options['relationships']['field_contactinfo_target_id']['field'] = 'field_contactinfo_target_id';
 $handler->display->display_options['relationships']['field_contactinfo_target_id']['label'] = 'Contact Information';
 $handler->display->display_options['relationships']['field_contactinfo_target_id']['required'] = TRUE;
 /* Field: Content: Contact Information Style */
 $handler->display->display_options['fields']['field_contactinfo_style']['id'] = 'field_contactinfo_style';
 $handler->display->display_options['fields']['field_contactinfo_style']['table'] = 'field_data_field_contactinfo_style';
 $handler->display->display_options['fields']['field_contactinfo_style']['field'] = 'field_contactinfo_style';
 $handler->display->display_options['fields']['field_contactinfo_style']['exclude'] = TRUE;
 $handler->display->display_options['fields']['field_contactinfo_style']['type'] = 'list_key';
 /* Field: Content: Title */
 $handler->display->display_options['fields']['title']['id'] = 'title';
 $handler->display->display_options['fields']['title']['table'] = 'node';
 $handler->display->display_options['fields']['title']['field'] = 'title';
 $handler->display->display_options['fields']['title']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['title']['label'] = '';
 $handler->display->display_options['fields']['title']['exclude'] = TRUE;
 $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
 $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
 $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
 /* Field: Content: Display Name */
 $handler->display->display_options['fields']['field_title_display']['id'] = 'field_title_display';
 $handler->display->display_options['fields']['field_title_display']['table'] = 'field_data_field_title_display';
 $handler->display->display_options['fields']['field_title_display']['field'] = 'field_title_display';
 $handler->display->display_options['fields']['field_title_display']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_title_display']['exclude'] = TRUE;
 /* Field: Content: Contact Form */
 $handler->display->display_options['fields']['field_contact_form']['id'] = 'field_contact_form';
 $handler->display->display_options['fields']['field_contact_form']['table'] = 'field_data_field_contact_form';
 $handler->display->display_options['fields']['field_contact_form']['field'] = 'field_contact_form';
 $handler->display->display_options['fields']['field_contact_form']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_contact_form']['exclude'] = TRUE;
 $handler->display->display_options['fields']['field_contact_form']['click_sort_column'] = 'url';
 /* Field: Content: Address */
 $handler->display->display_options['fields']['field_contact_address']['id'] = 'field_contact_address';
 $handler->display->display_options['fields']['field_contact_address']['table'] = 'field_data_field_contact_address';
 $handler->display->display_options['fields']['field_contact_address']['field'] = 'field_contact_address';
 $handler->display->display_options['fields']['field_contact_address']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_contact_address']['exclude'] = TRUE;
 $handler->display->display_options['fields']['field_contact_address']['click_sort_column'] = 'country';
 $handler->display->display_options['fields']['field_contact_address']['settings'] = array(
   'use_widget_handlers' => 1,
   'format_handlers' => array(
     'address' => 'address',
   ),
 );
 /* Field: Content: Email Address */
 $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
 $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
 $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
 $handler->display->display_options['fields']['field_contact_email']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
 /* Field: Content: Email Address */
 $handler->display->display_options['fields']['field_contact_email_raw']['id'] = 'field_contact_email_raw';
 $handler->display->display_options['fields']['field_contact_email_raw']['table'] = 'field_data_field_contact_email';
 $handler->display->display_options['fields']['field_contact_email_raw']['field'] = 'field_contact_email';
 $handler->display->display_options['fields']['field_contact_email_raw']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_contact_email_raw']['label'] = '';
 $handler->display->display_options['fields']['field_contact_email_raw']['exclude'] = TRUE;
 $handler->display->display_options['fields']['field_contact_email_raw']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['field_contact_email_raw']['type'] = 'email_plain';
 /* Field: Content: Telephone Number */
 $handler->display->display_options['fields']['field_contact_telephone']['id'] = 'field_contact_telephone';
 $handler->display->display_options['fields']['field_contact_telephone']['table'] = 'field_data_field_contact_telephone';
 $handler->display->display_options['fields']['field_contact_telephone']['field'] = 'field_contact_telephone';
 $handler->display->display_options['fields']['field_contact_telephone']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_contact_telephone']['exclude'] = TRUE;
 /* Field: Title */
 $handler->display->display_options['fields']['views_conditional_title']['id'] = 'views_conditional_title';
 $handler->display->display_options['fields']['views_conditional_title']['table'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_title']['field'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_title']['ui_name'] = 'Title';
 $handler->display->display_options['fields']['views_conditional_title']['label'] = '';
 $handler->display->display_options['fields']['views_conditional_title']['exclude'] = TRUE;
 $handler->display->display_options['fields']['views_conditional_title']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['views_conditional_title']['if'] = 'field_title_display';
 $handler->display->display_options['fields']['views_conditional_title']['condition'] = '6';
 $handler->display->display_options['fields']['views_conditional_title']['then'] = '[field_title_display]';
 $handler->display->display_options['fields']['views_conditional_title']['or'] = '[title]';
 $handler->display->display_options['fields']['views_conditional_title']['strip_tags'] = 0;
 /* Field: Make an enquiry button */
 $handler->display->display_options['fields']['views_conditional_enquiry']['id'] = 'views_conditional_enquiry';
 $handler->display->display_options['fields']['views_conditional_enquiry']['table'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_enquiry']['field'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_enquiry']['ui_name'] = 'Make an enquiry button';
 $handler->display->display_options['fields']['views_conditional_enquiry']['label'] = '';
 $handler->display->display_options['fields']['views_conditional_enquiry']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['views_conditional_enquiry']['if'] = 'field_contact_form';
 $handler->display->display_options['fields']['views_conditional_enquiry']['condition'] = '5';
 $handler->display->display_options['fields']['views_conditional_enquiry']['then'] = '<a class="btn btn-primary enquiry" href="mailto:[field_contact_email_raw]">Send an email</a>';
 $handler->display->display_options['fields']['views_conditional_enquiry']['or'] = '[field_contact_form]';
 $handler->display->display_options['fields']['views_conditional_enquiry']['strip_tags'] = 0;
 /* Field: Email address if contact form is empty */
 $handler->display->display_options['fields']['views_conditional_email']['id'] = 'views_conditional_email';
 $handler->display->display_options['fields']['views_conditional_email']['table'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_email']['field'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_email']['ui_name'] = 'Email address if contact form is empty';
 $handler->display->display_options['fields']['views_conditional_email']['label'] = '';
 $handler->display->display_options['fields']['views_conditional_email']['exclude'] = TRUE;
 $handler->display->display_options['fields']['views_conditional_email']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['views_conditional_email']['if'] = 'field_contact_form';
 $handler->display->display_options['fields']['views_conditional_email']['condition'] = '5';
 $handler->display->display_options['fields']['views_conditional_email']['then'] = '[field_contact_email]';
 $handler->display->display_options['fields']['views_conditional_email']['strip_tags'] = 0;
 /* Field: Mini style */
 $handler->display->display_options['fields']['views_conditional_mini']['id'] = 'views_conditional_mini';
 $handler->display->display_options['fields']['views_conditional_mini']['table'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_mini']['field'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_mini']['ui_name'] = 'Mini style';
 $handler->display->display_options['fields']['views_conditional_mini']['label'] = '';
 $handler->display->display_options['fields']['views_conditional_mini']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['views_conditional_mini']['if'] = 'field_contactinfo_style';
 $handler->display->display_options['fields']['views_conditional_mini']['condition'] = '1';
 $handler->display->display_options['fields']['views_conditional_mini']['equalto'] = 'mini';
 $handler->display->display_options['fields']['views_conditional_mini']['then'] = '[views_conditional_title]
 <br><br>
 [views_conditional_email]
 <br><br>';
 $handler->display->display_options['fields']['views_conditional_mini']['strip_tags'] = 0;
 /* Field: Full style */
 $handler->display->display_options['fields']['views_conditional_full']['id'] = 'views_conditional_full';
 $handler->display->display_options['fields']['views_conditional_full']['table'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_full']['field'] = 'views_conditional';
 $handler->display->display_options['fields']['views_conditional_full']['ui_name'] = 'Full style';
 $handler->display->display_options['fields']['views_conditional_full']['label'] = '';
 $handler->display->display_options['fields']['views_conditional_full']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['views_conditional_full']['if'] = 'field_contactinfo_style';
 $handler->display->display_options['fields']['views_conditional_full']['condition'] = '1';
 $handler->display->display_options['fields']['views_conditional_full']['equalto'] = 'full';
 $handler->display->display_options['fields']['views_conditional_full']['then'] = '[views_conditional_title]
 <br><br>
 [field_contact_address]
 <br>
 [field_contact_email]
 <br>
 [field_contact_telephone]
 <br><br>';
 $handler->display->display_options['fields']['views_conditional_full']['strip_tags'] = 0;
 /* Field: Content: Additional Information */
 $handler->display->display_options['fields']['field_contact_additional']['id'] = 'field_contact_additional';
 $handler->display->display_options['fields']['field_contact_additional']['table'] = 'field_data_field_contact_additional';
 $handler->display->display_options['fields']['field_contact_additional']['field'] = 'field_contact_additional';
 $handler->display->display_options['fields']['field_contact_additional']['relationship'] = 'field_contactinfo_target_id';
 $handler->display->display_options['fields']['field_contact_additional']['label'] = '';
 $handler->display->display_options['fields']['field_contact_additional']['element_label_colon'] = FALSE;
 $handler->display->display_options['fields']['field_contact_additional']['hide_empty'] = TRUE;
 /* Contextual filter: Content: Nid */
 $handler->display->display_options['arguments']['nid']['id'] = 'nid';
 $handler->display->display_options['arguments']['nid']['table'] = 'node';
 $handler->display->display_options['arguments']['nid']['field'] = 'nid';
 $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
 $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
 $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
 $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
 $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
 /* Filter criterion: Content: Contact Information Style (field_contactinfo_style) */
 $handler->display->display_options['filters']['field_contactinfo_style_value']['id'] = 'field_contactinfo_style_value';
 $handler->display->display_options['filters']['field_contactinfo_style_value']['table'] = 'field_data_field_contactinfo_style';
 $handler->display->display_options['filters']['field_contactinfo_style_value']['field'] = 'field_contactinfo_style_value';
 $handler->display->display_options['filters']['field_contactinfo_style_value']['operator'] = 'not empty';

 /* Display: Block */
 $handler = $view->new_display('block', 'Block', 'block');
 $handler->display->display_options['block_description'] = 'Contact Information';
