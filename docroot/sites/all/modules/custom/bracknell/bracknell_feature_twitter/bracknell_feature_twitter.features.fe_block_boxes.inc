<?php
/**
 * @file
 * bracknell_feature_twitter.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function bracknell_feature_twitter_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Twitter';
  $fe_block_boxes->format = 'html_full';
  $fe_block_boxes->machine_name = 'bracknell_twitter';
  $fe_block_boxes->body = '
    <a class="twitter-timeline" data-dnt="true" href="https://twitter.com/BracknellForest" data-widget-id="345476318156173313" data-chrome="nofooter noborders noheader noscrollbar transparent" data-tweet-limit="1" data-height="100%">Tweets by @BracknellForest</a>
  ';

  $export['bracknell_twitter'] = $fe_block_boxes;

  return $export;
}
