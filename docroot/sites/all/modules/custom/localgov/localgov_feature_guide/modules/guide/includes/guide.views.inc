<?php

/**
 * @file
 * Provide views data and handlers for guide.module.
 *
 * @ingroup views_module_handlers
 */

/**
 * Implements hook_views_data().
 */
function guide_views_data() {
  // ----------------------------------------------------------------------
  // guide table

  $data['guide']['table']['group']  = t('Guide');
  $data['guide']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  $data['guide']['gid'] = array(
    'title' => t('Guide (Top level node)'),
    'help' => t('The guide the node is in.'),
    'relationship' => array(
      'base' => 'node',
      'handler' => 'views_handler_relationship',
      'label' => t('Guide'),
    ),
    // There is no argument here; if you need an argument, add the relationship
    // and use the node: nid argument.
  );

  // ----------------------------------------------------------------------
  // menu_links table -- this is aliased so we can get just guide relations

  // guide hierarchy and weight data are now in {menu_links}.
  $data['guide_menu_links']['table']['group'] = t('Guide');
  $data['guide_menu_links']['table']['join'] = array(
    'node' => array(
      'table' => 'menu_links',
      'left_table' => 'guide',
      'left_field' => 'mlid',
      'field' => 'mlid',
    ),
  );

  $data['guide_menu_links']['weight'] = array(
    'title' => t('Guide Weight'),
    'help' => t('The weight of the guide page.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['guide_menu_links']['depth'] = array(
    'title' => t('Guide Depth'),
    'help' => t('The depth of the guide page in the hierarchy; top level guides have a depth of 1.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );

  $data['guide_menu_links']['p'] = array(
    'title' => t('Hierarchy'),
    'help' => t('The order of pages in the guide hierarchy.'),
    'sort' => array(
      'handler' => 'views_handler_sort_menu_hierarchy',
    ),
  );

  // ----------------------------------------------------------------------
  // guide_parent table -- this is an alias of the guide table which
  // represents the parent guide.

  // The {guide} record for the parent node.
  $data['guide_parent']['table']['group'] = t('Guide');
  $data['guide_parent']['table']['join'] = array(
    'node' => array(
      'table' => 'guide',
      'left_table' => 'guide_menu_links',
      'left_field' => 'plid',
      'field' => 'mlid',
    ),
  );

  $data['guide_parent']['nid'] = array(
    'title' => t('Guide (Parent node)'),
    'help' => t('The parent guide node.'),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Guide parent'),
    ),
  );

  return $data;
}

/**
 * Implements hook_views_plugins().
 */
function guide_views_plugins() {
 return array(
   'module' => 'guide',
   'argument default' => array(
     'guide_root' => array(
       'title' => t('Guide root from current node'),
       'handler' => 'views_plugin_argument_default_guide_root'
     ),
   ),
 );
}
