<?php

/**
 * @file
 * Administration page callbacks for the guide module.
 */

/**
 * Returns an administrative overview of all guides.
 *
 * @return string
 *   A HTML-formatted string with the administrative page content.
 *
 * @see guide_menu()
 */
function guide_admin_overview() {
  $rows = array();

  $headers = array(t('Guide'), t('Operations'));

  // Add any recognized guides to the table list.
  foreach (guide_get_guides() as $guide) {
    $rows[] = array(l($guide['title'], $guide['href'], $guide['options']), l(t('edit order and titles'), 'admin/localgov/content/guide/' . $guide['nid']));
  }

  return theme('table', array('header' => $headers, 'rows' => $rows, 'empty' => t('No guides available.')));
}

/**
 * Form constructor for the guide settings form.
 *
 * @see guide_admin_settings_validate()
 *
 * @ingroup forms
 */
function guide_admin_settings() {
  $types = node_type_get_names();
  $form['guide_allowed_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content types allowed in guide structures'),
    '#default_value' => variable_get('guide_allowed_types', array('guide')),
    '#options' => $types,
    '#description' => t('Users with the %structure-perm permission can add all content types.', array('%structure-perm' => t('Administer guide structures'))),
    '#required' => TRUE,
  );
  $form['guide_child_type'] = array(
    '#type' => 'radios',
    '#title' => t('Content type for child pages'),
    '#default_value' => variable_get('guide_child_type', 'guide'),
    '#options' => $types,
    '#required' => TRUE,
  );
  $form['array_filter'] = array('#type' => 'value', '#value' => TRUE);
  $form['#validate'][] = 'guide_admin_settings_validate';

  return system_settings_form($form);
}

/**
 * Form validation handler for guide_admin_settings().
 *
 * @see guide_admin_settings_submit()
 */
function guide_admin_settings_validate($form, &$form_state) {
  $child_type = $form_state['values']['guide_child_type'];
  if (empty($form_state['values']['guide_allowed_types'][$child_type])) {
    form_set_error('guide_child_type', t('The content type for the %add-child link must be one of those selected as an allowed guide structure type.', array('%add-child' => t('Add child page'))));
  }
}

/**
 * Form constructor for administering a single guide's hierarchy.
 *
 * @see guide_admin_edit_submit()
 *
 * @param $node
 *   The node of the top-level page in the guide.
 *
 * @see guide_admin_edit_validate()
 * @see guide_admin_edit_submit()
 * @ingroup forms
 */
function guide_admin_edit($form, $form_state, $node) {
  if (!empty($node->field_node_display_title[LANGUAGE_NONE][0]['value'])) {
    drupal_set_title($node->field_node_display_title[LANGUAGE_NONE][0]['value']);
  }
  else {
    drupal_set_title($node->title);
  }
  $form['#node'] = $node;
  _guide_admin_table($node, $form);
  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save guide pages'),
  );

  return $form;
}

/**
 * Form validation handler for guide_admin_edit().
 *
 * Checks that the guide has not been changed while using the form.
 *
 * @see guide_admin_edit_submit()
 */
function guide_admin_edit_validate($form, &$form_state) {
  if ($form_state['values']['tree_hash'] != $form_state['values']['tree_current_hash']) {
    form_set_error('', t('This guide has been modified by another user, the changes could not be saved.'));
  }
}

/**
 * Form submission handler for guide_admin_edit().
 *
 * This function takes care to save parent menu items before their children.
 * Saving menu items in the incorrect order can break the menu tree.
 *
 * @see guide_admin_edit_validate()
 * @see menu_overview_form_submit()
 */
function guide_admin_edit_submit($form, &$form_state) {
  // Save elements in the same order as defined in post rather than the form.
  // This ensures parents are updated before their children, preventing orphans.
  $order = array_flip(array_keys($form_state['input']['table']));
  $form['table'] = array_merge($order, $form['table']);

  foreach (element_children($form['table']) as $key) {
    if ($form['table'][$key]['#item']) {
      $row = $form['table'][$key];
      $values = $form_state['values']['table'][$key];

      // Update menu item if moved.
      if ($row['plid']['#default_value'] != $values['plid'] || $row['weight']['#default_value'] != $values['weight']) {
        $row['#item']['plid'] = $values['plid'];
        $row['#item']['weight'] = $values['weight'];
        menu_link_save($row['#item']);
      }

      // Update the title if changed.
      if ($row['title']['#default_value'] != $values['title']) {
        $node = node_load($values['nid']);
        $langcode = LANGUAGE_NONE;
        // Changed to display title - node title remains untouched.
        $node->field_node_display_title[LANGUAGE_NONE][0]['value'] = $values['title'];
        $node->guide['link_title'] = $values['title'];
        $node->revision = 1;
        if (!empty($node->field_node_display_title[LANGUAGE_NONE][0]['value'])) {
          $original_title = $node->field_node_display_title[LANGUAGE_NONE][0]['value'];
        }
        else {
          $original_title = $node->title;
        }
        $node->log = t('Title changed from %original to %current.', array('%original' => $original, '%current' => $values['title']));

        node_save($node);
        
        if (!empty($node->field_node_display_title[LANGUAGE_NONE][0]['value'])) {
         $watchdog_title = $node->field_node_display_title[LANGUAGE_NONE][0]['value'];
        } else {
          $watchdog_title = $node->title;
        }
        watchdog('content', 'Guide: updated %title.', array('%title' => $watchdog_title), WATCHDOG_NOTICE, l(t('view'), 'node/' . $node->nid));
      }
    }
  }

  drupal_set_message(t('Updated guide %title.', array('%title' => $form['#node']->title)));
}

/**
 * Builds the table portion of the form for the guide administration page.
 *
 * @param $node
 *   The node of the top-level page in the guide.
 * @param $form
 *   The form that is being modified, passed by reference.
 *
 * @see guide_admin_edit()
 */
function _guide_admin_table($node, &$form) {
  $form['table'] = array(
    '#theme' => 'guide_admin_table',
    '#tree' => TRUE,
  );

  $tree = guide_menu_subtree_data($node->guide);
  $tree = array_shift($tree); // Do not include the guide item itself.
  if ($tree['below']) {
    $hash = drupal_hash_base64(serialize($tree['below']));
    // Store the hash value as a hidden form element so that we can detect
    // if another user changed the guide hierarchy.
    $form['tree_hash'] = array(
      '#type' => 'hidden',
      '#default_value' => $hash,
    );
    $form['tree_current_hash'] = array(
      '#type' => 'value',
      '#value' => $hash,
    );
    _guide_admin_table_tree($tree['below'], $form['table']);
  }

}

/**
 * Helps build the main table in the guide administration page form.
 *
 * @param $tree
 *   A subtree of the guide menu hierarchy.
 * @param $form
 *   The form that is being modified, passed by reference.
 *
 * @return
 *   The modified form array.
 *
 * @see guide_admin_edit()
 */
function _guide_admin_table_tree($tree, &$form) {
  // The delta must be big enough to give each node a distinct value.
  $count = count($tree);
  $delta = ($count < 30) ? 15 : intval($count / 2) + 1;

  foreach ($tree as $data) {
    $form['guide-admin-' . $data['link']['nid']] = array(
      '#item' => $data['link'],
      'nid' => array('#type' => 'value', '#value' => $data['link']['nid']),
      'depth' => array('#type' => 'value', '#value' => $data['link']['depth']),
      'href' => array('#type' => 'value', '#value' => $data['link']['href']),
      'title' => array(
        '#type' => 'textfield',
        '#default_value' => $data['link']['link_title'],
        '#maxlength' => 255,
        '#size' => 40,
      ),
      'weight' => array(
        '#type' => 'weight',
        '#default_value' => $data['link']['weight'],
        '#delta' => max($delta, abs($data['link']['weight'])),
        '#title' => t('Weight for @title', array('@title' => $data['link']['title'])),
        '#title_display' => 'invisible',
      ),
      'plid' => array(
        '#type' => 'hidden',
        '#default_value' => $data['link']['plid'],
      ),
      'mlid' => array(
        '#type' => 'hidden',
        '#default_value' => $data['link']['mlid'],
      ),
    );
    if ($data['below']) {
      _guide_admin_table_tree($data['below'], $form);
    }
  }

  return $form;
}

/**
 * Returns HTML for a guide administration form.
 *
 * @param $variables
 *   An associative array containing:
 *   - form: A render element representing the form.
 *
 * @see guide_admin_table()
 * @ingroup themeable
 */
function theme_guide_admin_table($variables) {
  $form = $variables['form'];

  drupal_add_tabledrag('guide-structure', 'match', 'parent', 'guide-plid', 'guide-plid', 'guide-mlid', TRUE, GUIDE_MAX_DEPTH - 2);
  drupal_add_tabledrag('guide-structure', 'order', 'sibling', 'guide-weight');

  $header = array(t('Title'), t('Weight'), t('Parent'), array('data' => t('Operations'), 'colspan' => '3'));

  $rows = array();
  $destination = drupal_get_destination();
  $access = user_access('administer nodes');
  foreach (element_children($form) as $key) {
    $nid = $form[$key]['nid']['#value'];
    $href = $form[$key]['href']['#value'];

    // Add special classes to be used with tabledrag.js.
    $form[$key]['plid']['#attributes']['class'] = array('guide-plid');
    $form[$key]['mlid']['#attributes']['class'] = array('guide-mlid');
    $form[$key]['weight']['#attributes']['class'] = array('guide-weight');

    $data = array(
      theme('indentation', array('size' => $form[$key]['depth']['#value'] - 2)) . drupal_render($form[$key]['title']),
      drupal_render($form[$key]['weight']),
      drupal_render($form[$key]['plid']) . drupal_render($form[$key]['mlid']),
      l(t('view'), $href),
      $access ? l(t('edit'), 'node/' . $nid . '/edit', array('query' => $destination)) : '&nbsp;',
      $access ? l(t('delete'), 'node/' . $nid . '/delete', array('query' => $destination) )  : '&nbsp;',
    );
    $row = array('data' => $data);
    if (isset($form[$key]['#attributes'])) {
      $row = array_merge($row, $form[$key]['#attributes']);
    }
    $row['class'][] = 'draggable';
    $rows[] = $row;
  }

  return theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'guide-structure'), 'empty' => t('No guide content available.')));
}
