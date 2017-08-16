<?php
/**
 * @file
 * bracknell_feature_townandcountry.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function bracknell_feature_townandcountry_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Town & Country';
  $fe_block_boxes->format = 'html_full';
  $fe_block_boxes->machine_name = 'bracknell_townandcountry';
  $fe_block_boxes->body = '<p>
	[[{"fid":"1010","view_mode":"default","fields":{"format":"default","alignment":"","field_file_image_alt_text[und][0][value]":"Town &amp; Country front cover","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"format":"default","alignment":"","field_file_image_alt_text[und][0][value]":"Town &amp; Country front cover","field_file_image_title_text[und][0][value]":false}},"attributes":{"alt":"Town &amp; Country front cover","class":"media-element file-default","data-delta":"1"}}]]</p>

<p>
	<a class="btn btn-primary" href="/node/2561">View Town &amp; Country</a></p>
';

  $export['bracknell_townandcountry'] = $fe_block_boxes;

  return $export;
}
