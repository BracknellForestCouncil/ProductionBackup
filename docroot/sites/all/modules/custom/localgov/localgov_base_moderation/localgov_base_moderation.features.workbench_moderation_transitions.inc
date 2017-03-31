<?php
/**
 * @file
 * localgov_base_moderation.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function localgov_base_moderation_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'name' => 'Submit for review',
    ),
    'needs_editing:needs_review' => array(
      'from_name' => 'needs_editing',
      'to_name' => 'needs_review',
      'name' => 'Resubmit for review',
    ),
    'needs_review:needs_editing' => array(
      'from_name' => 'needs_review',
      'to_name' => 'needs_editing',
      'name' => 'Reject',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
    'published:archived' => array(
      'from_name' => 'published',
      'to_name' => 'archived',
      'name' => 'Archive',
    ),
  );
  return $items;
}
