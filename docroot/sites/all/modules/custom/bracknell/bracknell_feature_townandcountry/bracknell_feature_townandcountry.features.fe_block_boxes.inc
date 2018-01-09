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
	[[{"fid":"3716","view_mode":"default","fields":{"alt":"Town &amp; Country Winter 2017","class":"media-element file-default media-wysiwyg-align-left","data-delta":"4","format":"default","alignment":"","field_file_image_alt_text[und][0][value]":"Town &amp; Country Winter 2017","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"4":{"alt":"Town &amp; Country Winter 2017","class":"media-element file-default media-wysiwyg-align-left","data-delta":"4","format":"default","alignment":"","field_file_image_alt_text[und][0][value]":"Town &amp; Country Winter 2017","field_file_image_title_text[und][0][value]":false}},"attributes":{"alt":"Town &amp; Country Winter 2017","class":"media-element file-default","data-delta":"4"}}]]</p>

<p>
	<a href="/node/2739">View Town &amp; Country</a></p>
';

  $export['bracknell_townandcountry'] = $fe_block_boxes;

  return $export;
}
