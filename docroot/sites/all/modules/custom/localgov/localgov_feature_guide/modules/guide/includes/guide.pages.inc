<?php

/**
 * @file
 * User page callbacks for the guide module.
 */

/**
 * Menu callback: Prints a listing of all guides.
 *
 * @return string
 *   A HTML-formatted string with the listing of all guides content.
 *
 * @see guide_menu()
 */
function guide_render() {
  $guide_list = array();
  foreach (guide_get_guides() as $guide) {
    $guide_list[] = l($guide['title'], $guide['href'], $guide['options']);
  }

  return theme('item_list', array('items' => $guide_list));
}

/**
 * Menu callback; Generates representations of a guide page and its children.
 *
 * The function delegates the generation of output to helper functions. The
 * function name is derived by prepending 'guide_export_' to the given output
 * type. So, e.g., a type of 'html' results in a call to the function
 * guide_export_html().
 *
 * @param $type
 *   A string encoding the type of output requested. The following types are
 *   currently supported in guide module:
 *   - html: Printer-friendly HTML.
 *   Other types may be supported in contributed modules.
 * @param $nid
 *   An integer representing the node id (nid) of the node to export
 *
 * @return
 *   A string representing the node and its children in the guide hierarchy in a
 *   format determined by the $type parameter.
 *
 * @see guide_menu()
 */
function guide_export($type, $nid) {
  // Check that the node exists and that the current user has access to it.
  $node = node_load($nid);
  if (!$node) {
    return MENU_NOT_FOUND;
  }
  if (!node_access('view', $node)) {
    return MENU_ACCESS_DENIED;
  }

  $type = drupal_strtolower($type);

  $export_function = 'guide_export_' . $type;

  if (function_exists($export_function)) {
    print call_user_func($export_function, $nid);
  }
  else {
    drupal_set_message(t('Unknown export format.'));
    drupal_not_found();
  }
}

/**
 * Generates HTML for export when invoked by guide_export().
 *
 * The given node is embedded to its absolute depth in a top level section. For
 * example, a child node with depth 2 in the hierarchy is contained in
 * (otherwise empty) <div> elements corresponding to depth 0 and depth 1.
 * This is intended to support WYSIWYG output - e.g., level 3 sections always
 * look like level 3 sections, no matter their depth relative to the node
 * selected to be exported as printer-friendly HTML.
 *
 * @param $nid
 *   An integer representing the node id (nid) of the node to export.
 *
 * @return
 *   A string containing HTML representing the node and its children in
 *   the guide hierarchy.
 */
function guide_export_html($nid) {
  if (user_access('access printer-friendly version')) {
    $node = node_load($nid);
    if (isset($node->guide)) {
      $tree = guide_menu_subtree_data($node->guide);
      $contents = guide_export_traverse($tree, 'guide_node_export');
      if (!empty($node->field_node_display_title[LANGUAGE_NONE][0]['value'])) {
        $export_title = $node->field_node_display_title[LANGUAGE_NONE][0]['value'];
      } else {
        $export_title = $node->title;
      }
      return theme('guide_export_html', array('title' => $export_title, 'contents' => $contents, 'depth' => $node->guide['depth']));
    }
    else {
      drupal_not_found();
    }
  }
  else {
    drupal_access_denied();
  }
}

/**
 * Menu callback: Shows the structure form for a single node.
 *
 * @param $node
 *   The guide node for which to show the structure.
 *
 * @return string
 *   A HTML-formatted string with the structure form for a single node.
 *
  * @see guide_menu()
 */
function guide_structure($node) {
  if (!empty($node->field_node_display_title[LANGUAGE_NONE][0]['value'])) {
    $show_title = $node->field_node_display_title[LANGUAGE_NONE][0]['value'];
  } else {
    $show_title = $node->title;
  }
  drupal_set_title($show_title);
  return drupal_get_form('guide_structure_form', $node);
}

/**
 * Form constructor for the guide structure form.
 *
 * Allows handling of all guide structure operations via the structure tab.
 *
 * @param $node
 *   The guide node for which to show the structure.
 *
 * @see guide_structure_form_submit()
 * @see guide_remove_button_submit()
 * @ingroup forms
 */
function guide_structure_form($form, &$form_state, $node) {
  if (!isset($node->guide)) {
    // The node is not part of any guide yet - set default options.
    $node->guide = _guide_link_defaults($node->nid);
  }
  else {
    $node->guide['original_gid'] = $node->guide['gid'];
  }

  // Find the depth limit for the parent select.
  if (!isset($node->guide['parent_depth_limit'])) {
    $node->guide['parent_depth_limit'] = _guide_parent_depth_limit($node->guide);
  }
  $form['#node'] = $node;
  $form['#id'] = 'guide-structure';
  _guide_add_form_elements($form, $form_state, $node);

  $form['guide']['#collapsible'] = FALSE;

  $form['update'] = array(
    '#type' => 'submit',
    '#value' => $node->guide['original_gid'] ? t('Update guide structure') : t('Add to guide structure'),
    '#weight' => 15,
  );

  $form['remove'] = array(
    '#type' => 'submit',
    '#value' => t('Remove from guide structure'),
    '#access' => _guide_node_is_removable($node),
    '#weight' => 20,
    '#submit' => array('guide_remove_button_submit'),
  );

  return $form;
}

/**
 * Form submission handler for guide_structure_form().
 *
 * Redirects to removal confirmation form.
 *
 * @see guide_structure_form_submit()
 */
function guide_remove_button_submit($form, &$form_state) {
  $form_state['redirect'] = 'node/' . $form['#node']->nid . '/structure/remove';
}

/**
 * Form submission handler for guide_structure_form().
 *
 * @see guide_remove_button_submit()
 */
function guide_structure_form_submit($form, &$form_state) {
  $node = $form['#node'];
  $form_state['redirect'] = "node/" . $node->nid;
  $guide_link = $form_state['values']['guide'];
  if (!$guide_link['gid']) {
    drupal_set_message(t('No changes were made'));

    return;
  }

  $guide_link['menu_name'] = guide_menu_name($guide_link['gid']);
  $node->guide = $guide_link;
  if (_guide_update_structure($node)) {
    if ($node->guide['parent_mismatch']) {
      // This will usually only happen when JS is disabled.
      drupal_set_message(t('The post has been added to the selected guide. You may now position it relative to other pages.'));
      $form_state['redirect'] = "node/" . $node->nid . "/structure";
    }
    else {
      drupal_set_message(t('The guide structure has been updated.'));
    }
  }
  else {
    drupal_set_message(t('There was an error adding the post to the guide.'), 'error');
  }
}

/**
 * Form constructor to confirm removal of a node from a guide.
 *
 * @param $node
 *   The node to delete.
 *
 * @see guide_remove_form_submit()
 * @ingroup forms
 */
function guide_remove_form($form, &$form_state, $node) {
  $form['#node'] = $node;
  if (!empty($node->field_node_display_title[LANGUAGE_NONE][0]['value'])) {
    $title = array('%title' => $node->field_node_display_title[LANGUAGE_NONE][0]['value']);
  }
  else {
    $title = array('%title' => $node->title);
  }
  if ($node->guide['has_children']) {
    $description = t('%title has associated child pages, which will be relocated automatically to maintain their connection to the guide. To recreate the hierarchy (as it was before removing this page), %title may be added again using the structure tab, and each of its former child pages will need to be relocated manually.', $title);
  }
  else {
    $description = t('%title may be added to hierarchy again using the structure tab.', $title);
  }

  return confirm_form($form, t('Are you sure you want to remove %title from the guide hierarchy?', $title), 'node/' . $node->nid, $description, t('Remove'));
}

/**
 * Form submission handler for guide_remove_form().
 */
function guide_remove_form_submit($form, &$form_state) {
  $node = $form['#node'];
  if (_guide_node_is_removable($node)) {
    menu_link_delete($node->guide['mlid']);
    db_delete('guide')
      ->condition('nid', $node->nid)
      ->execute();
    drupal_set_message(t('The post has been removed from the guide.'));
  }
  $form_state['redirect'] = 'node/' . $node->nid;
}
