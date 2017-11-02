<?php
/**
 * @file
 * localgov_base_moderation.inc
 * TODO: Add file description
 *
 * @package   localgov_base_moderation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Adds a "moderation" field to a node type.
  */
 function _localgov_base_moderation_add_field($entity, $bundle) {
   $instance = array(
     'field_name' => 'field_moderation',
     'entity_type' => $entity,
     'bundle' => $bundle,
     'default_value' => NULL,
     'deleted' => 0,
     'description' => 'Select the team responsible for editing/moderating this content.',
     'display' => array(
       'default' => array(
         'label' => 'hidden',
         'settings' => array(),
         'type' => 'hidden',
         'weight' => -10,
       ),
       'teaser' => array(
         'label' => 'hidden',
         'settings' => array(),
         'type' => 'hidden',
         'weight' => -10,
       ),
     ),
     'entity_type' => 'node',
     'field_name' => 'field_moderation',
     'is_property' => 1,
     'label' => 'Editorial Group',
     'required' => 1,
     'settings' => array(
       'user_register_form' => FALSE,
     ),
     'widget' => array(
       'active' => 1,
       'module' => 'options',
       'settings' => array(
         'autocomplete_path' => 'taxonomy/autocomplete',
         'size' => 60,
       ),
       'type' => 'options_select',
       'weight' => -10,
     ),
     'workbench_access_field' => 1,
  );
  if (field_info_instance($entity, 'field_moderation', $bundle) == NULL) {
    field_create_instance($instance);
  }
}

 /**
 * Afterbuild function
 */
 function _localgov_base_moderation_form_organize($form, $form_state){
  // Create fieldset
  $form['moderation']  = array(
    '#type' => 'fieldset',
    '#title' => t('Moderation'),
    '#description' => t('Add a log message and set moderation state.'),
    '#weight' => '99',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE
  );

  //
  // $current_state = $form['#node']->workbench_moderation['current'];
  //
  //  // Move field in fieldset
  $form['moderation']['field_moderation'] = $form['field_moderation'];

  unset($form['field_moderation']);

  //  Move the revision log into the publishing options to make things pretty.
  if ($form['options']['#access']) {
    if (isset($form['options']['log'])) {
      $form['moderation']['log'] = $form['options']['log'];
    }
    $form['moderation']['state'] = isset($form['options']['workbench_moderation_state_new']) ? $form['options']['workbench_moderation_state_new'] : '';

    // Unset the old placement of the Revision log.
    unset($form['options']['workbench_moderation_state_new']);
  }
  else {
    $form['moderation']['log'] = $form['revision_information']['log'];
    $form['moderation']['state'] = isset($form['revision_information']['workbench_moderation_state_new']) ? $form['revision_information']['workbench_moderation_state_new'] : '';

    unset($form['revision_information']['log']);
    unset($form['revision_information']['workbench_moderation_state_new']);
  }

   // Unset default field instance
   $form['revision_information']['#access'] = FALSE;

   unset($form['options']['log']);
   $form['options']['log']['#access'] = FALSE;

   return $form;
 }

 /**
  * Validate function
  */
 function _localgov_base_moderation_form_validate(&$form, &$form_state) {
  //  $form['field_moderation'] = $form['options']['field_moderation'];
  //  $form['options']['log'] = $form['moderation']['log'];
  //  $form['options']['workbench_moderation_state_new'] = $form['moderation']['state'];
 }

/**
 * Page callback for the workbench content page.
 *
 * Note that we add Views information to the array and render
 * the Views as part of the alter hook provided here.
 *
 * @see hook_workbench_content_alter()
 *
 * @return
 *  A Render API array of content creation options.
 */
function localgov_base_moderation_workbench() {
  $output = array();

  // Allow other modules to add content here.
  $output['#attributes'] = array('class' => array('admin', 'my-workbench'));
  $output['#attached'] = array(
    'css' => array(drupal_get_path('module', 'workbench') . '/css/workbench.my-workbench.css'),
  );
  $output['#theme'] = 'workbench_element';
  // This left column is given a width of 35% by workbench.myworkbench.css.
  $output['localgov_base_moderation_workbench_current_user'] = array(
    '#title' => t('My Profile'),
    '#view' => 'workbench_current_user',
    '#view_display' => 'block_1',
    '#attributes' => array('class' => array('left', 'clearfix')),
    '#theme' => 'workbench_element',
  );
  // This right column is given a width of 65% by workbench.myworkbench.css.
  $output['localgov_base_moderation_workbench_edited'] = array(
    '#view' => 'workbench_edited',
    '#view_display' => 'block_1',
    '#attributes' => array('class' => array('right', 'clearfix')),
    '#theme' => 'workbench_element',
  );
  $output['localgov_base_moderation_workbench_recent_content'] = array(
    '#view' => 'workbench_recent_content',
    '#view_display' => 'block_1',
    '#attributes' => array('class' => array('clearfix'), 'style' => array('clear: both;')),
    '#theme' => 'workbench_element',
  );

  // Allow other modules to alter the default page.
  drupal_alter('localgov_base_moderation_workbench', $output);

  // Transform the Views into markup.
  // @see views_embed_view()
  foreach (element_children($output) as $key) {
    if (isset($output[$key]['#view']) && $view = views_get_view($output[$key]['#view'])) {
      $output[$key] += array('#markup' => '', '#view_display' => 'default');
      $display_id = $output[$key]['#view_display'];

      // Build contextual links.
      if (module_exists('contextual')) {
        $output[$key] += contextual_element_info();
        views_add_contextual_links($output[$key]['contextual_links'], 'block', $view, $display_id);
      }

      if ($view->access($display_id)) {
        $output[$key]['#markup'] .= $view->preview($display_id, array());
        if ($title = $view->get_title()) {
          $output[$key]['#title'] = $title;
        }
      }
      $view->destroy();
    }
  }

  return $output;
}

/**
 * Simple page to show list of content type to create.
 *
 * @see hook_workbench_create_alter()
 *
 * @return
 *  A Render API array of content creation options.
 */
function localgov_base_moderation_workbench_create() {
  $output = array();
  $output['localgov_base_moderation_workbench_create_default'] = _localgov_base_moderation_workbench_create();

  // Allow other modules to add content here.
  drupal_alter('localgov_base_moderation_workbench_create', $output);

  return $output;
}

/**
 * Emulate node/add to return content creation list.
 *
 * @return
 *  A Render API array of content creation options.
 */
function _localgov_base_moderation_workbench_create() {
  $output = array();
  $output['#markup'] = '<h3>' . t('Create content') . '</h3>';

  $item = menu_get_item('admin/localgov/content/add');
  $content = system_admin_menu_block($item);

  if (!empty($content)) {
    // Theme the arrray of content type creation links.
    $output['#markup'] .= theme('node_add_list', array('content' => $content));
  }
  else {
    $output['#markup'] .= t('You cannot create any new content. Please contact the site administrator.');
  }

  return $output;
}
