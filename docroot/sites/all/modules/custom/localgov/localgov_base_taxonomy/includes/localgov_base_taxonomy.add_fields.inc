<?php
/**
 * @file
 * localgov_base_taxonomy.inc
 * TODO: Add file description
 *
 * @package   localgov_base_taxonomy
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

//  /**
//  * Implements hook_node_type_insert().
//  */
// function localgov_base_taxonomy_node_type_insert($info) {
//   $type = $info->type;
//   $types_ignore_category = array('article', 'contact', 'smallprint', 'location', 'team', 'testimonial');
//   $types_ignore_tags = array('contact', 'location', 'team', 'testimonial');
//   if (!in_array($type, $types_ignore_category)) {
//     // Add team field to newly created content type.
//     _localgov_base_taxonomy_add_category_field('node', $type);
//   }
//   if (!in_array($type, $types_ignore_tags)) {
//     _localgov_base_taxonomy_add_tags_field('node', $type);
//   }
// }
//
// /**
//  * Implements hook_post_features_enable_feature().
//  */
// function localgov_base_taxonomy_post_features_enable_feature() {
//   features_rebuild();
//
//   // Add common fields to all node types.
//   $types = node_type_get_names();
//   $types_ignore_category = array('article', 'contact', 'smallprint', 'location', 'team', 'testimonial');
//   $types_ignore_tags = array('contact', 'location', 'team', 'testimonial');
//   foreach ($types as $type) {
//     if (!in_array($type, $types_ignore_category)) {
//       _localgov_base_taxonomy_add_category_field('node', $type);
//     }
//     if (!in_array($type, $types_ignore_tags)) {
//       _localgov_base_taxonomy_add_tags_field('node', $type);
//     }
//   }
// }
//
//
//
// /**
//  * Adds a "category" field to a node type.
//  */
// function _localgov_base_taxonomy_add_category_field($entity, $bundle) {
//
//   // Exported field_instance: 'node-basic-field_category'.
//   $category = array(
//     'bundle' => $bundle,
//     'default_value' => NULL,
//     'deleted' => 0,
//     'description' => '',
//     'display' => array(
//       'default' => array(
//         'label' => 'hidden',
//         'module' => 'taxonomy',
//         'settings' => array(
//           'quickedit' => array(
//             'editor' => 'form',
//           ),
//         ),
//         'type' => 'hidden',
//         'weight' => 90,
//       ),
//       'teaser' => array(
//         'label' => 'above',
//         'settings' => array(),
//         'type' => 'hidden',
//         'weight' => 90,
//       ),
//     ),
//     'entity_type' => $entity,
//     'field_name' => 'field_category',
//     'is_property' => 0,
//     'label' => 'Category',
//     'required' => 1,
//     'settings' => array(
//       'user_register_form' => FALSE,
//     ),
//     'widget' => array(
//       'active' => 0,
//       'module' => 'taxonomy',
//       'settings' => array(
//         'autocomplete_path' => 'taxonomy/autocomplete',
//         'size' => 60,
//       ),
//       'type' => 'taxonomy_autocomplete',
//       'weight' => -2,
//     ),
//     'workbench_access_field' => 0,
//   );
//
//   field_create_instance($category);
// }
//
//
//
//
// /**
//  * Adds a "tags" field to a node type.
//  */
// function _localgov_base_taxonomy_add_tags_field($entity, $bundle) {
//
//   // Exported field_instance: 'field_tags'.
//   $tags = array(
//     'bundle' => $bundle,
//     'default_value' => NULL,
//     'deleted' => 0,
//     'description' => '',
//     'display' => array(
//       'default' => array(
//         'label' => 'hidden',
//         'module' => 'taxonomy',
//         'settings' => array(
//           'quickedit' => array(
//             'editor' => 'form',
//           ),
//         ),
//         'type' => 'hidden',
//         'weight' => 90,
//       ),
//       'teaser' => array(
//         'label' => 'above',
//         'settings' => array(),
//         'type' => 'hidden',
//         'weight' => 90,
//       ),
//     ),
//     'entity_type' => $entity,
//     'field_name' => 'field_tags',
//     'label' => 'Tags',
//     'required' => FALSE,
//     'settings' => array(
//       'user_register_form' => FALSE,
//     ),
//     'widget' => array(
//       'module' => 'taxonomy',
//       'settings' => array(
//         'autocomplete_path' => 'taxonomy/autocomplete',
//         'size' => 60,
//       ),
//       'type' => 'taxonomy_autocomplete',
//       'weight' => -1,
//     ),
//   );
//
//   field_create_instance($tags);
// }
