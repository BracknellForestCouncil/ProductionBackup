<?php
/**
 * @file
 * bracknell_feature_beta.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function bracknell_feature_beta_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Beta Message';
  $fe_block_boxes->format = 'html_full';
  $fe_block_boxes->machine_name = 'beta_message';
  $fe_block_boxes->body = '<div id="beta-message" class="alert alert-info">
<span class="btn-beta">BETA</span> This is our demo website - <a href="https://bracknell-forest.achieveservice.com/AchieveForms/?mode=fill&form_uri=sandbox-publish://AF-Process-c8489981-8e50-492d-8212-f6ebd3a3e3ba/AF-Stage-a8358bdf-97f2-4d71-9899-341e50b13d58/definition.json&process_uri=sandbox-processes://AF-Process-c8489981-8e50-492d-8212-f6ebd3a3e3ba&process_id=AF-Process-c8489981-8e50-492d-8212-f6ebd3a3e3ba&category=AF-Category-c413be3d-596c-40d7-931b-f169314f1ea9">your feedback</a> will help us improve it. <a href="https://beta.bracknell-forest.gov.uk/smallprint/beta-website">Find out more about this site</a>.
</div>
';

  $export['beta_message'] = $fe_block_boxes;

  return $export;
}
