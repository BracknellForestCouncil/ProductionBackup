<?php
/**
 * @file
 * localgov_base_moderation.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function localgov_base_moderation_workbench_moderation_export_states() {
  $items = array(
    'archived' => array(
      'name' => 'archived',
      'label' => 'Archived',
      'description' => 'Archive this version (administrator)',
      'weight' => 6,
    ),
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => 1,
    ),
    'needs_editing' => array(
      'name' => 'needs_editing',
      'label' => 'Needs Editing',
      'description' => 'Needs editing',
      'weight' => 2,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Needs Review',
      'description' => 'Needs review',
      'weight' => 3,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live (moderator)',
      'weight' => 4,
    ),
  );
  return $items;
}
