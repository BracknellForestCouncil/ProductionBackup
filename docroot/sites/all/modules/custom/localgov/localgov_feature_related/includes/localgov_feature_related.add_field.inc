<?php
/**
 * @file
 * localgov_feature_related.add_Field.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_related
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

// /**
//  * Implements hook_node_type_insert().
//  */
// function localgov_feature_related_node_type_insert($info) {
//   $type = $info->type;
//   $types_ignore = array('article', 'guide', 'location', 'team', 'testimonial');
//   if (!in_array($type, $types_ignore)) {
//     _localgov_feature_related_add_field('node', $type);
//   }
// }
//
// /**
//  * Implements hook_post_features_enable_feature().
//  */
// function localgov_feature_related_post_features_enable_feature() {
//   features_rebuild();
//
//   // Add common fields to all node types.
//   $types = node_type_get_names();
//   $types_ignore = array('article', 'guide', 'location', 'team', 'testimonial');
//   foreach ($types as $type) {
//     if (!in_array($type, $types_ignore)) {
//       _localgov_feature_related_add_field('node', $type);
//     }
//   }
// }
//
// /**
//  * Adds a "related" field to a node type.
//  */
// function _localgov_feature_related_add_field($entity, $bundle) {
//   $instance = array(
//       'bundle' => $bundle,
//       'default_value' => NULL,
//       'deleted' => 0,
//       'description' => 'Enter the related pages you wish o link to from this page.
//   Pages are "Nodes". Categories are "Taxonomy terms".',
//       'display' => array(
//         'default' => array(
//           'label' => 'above',
//           'module' => 'entity_reference_multiple',
//           'settings' => array(),
//           'type' => 'hidden',
//           'weight' => 97,
//         ),
//         'teaser' => array(
//           'label' => 'above',
//           'settings' => array(),
//           'type' => 'hidden',
//           'weight' => 0,
//         ),
//       ),
//       'entity_type' => $entity,
//       'field_name' => 'field_related',
//       'is_property' => 0,
//       'label' => 'Related',
//       'required' => 0,
//       'settings' => array(
//         'user_register_form' => FALSE,
//       ),
//       'widget' => array(
//         'active' => 1,
//         'module' => 'entity_reference_multiple',
//         'settings' => array(),
//         'type' => 'entity_reference_multiple_autocomplete',
//         'weight' => 97,
//       ),
//       'workbench_access_field' => 0,
//     );
//
//   field_create_instance($instance);
// }
