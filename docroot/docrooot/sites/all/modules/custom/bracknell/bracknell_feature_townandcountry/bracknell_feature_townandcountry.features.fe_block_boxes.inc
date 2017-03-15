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

  $file = file_load(1010);
  $url = file_create_url($file->uri);

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Town & Country';
  $fe_block_boxes->format = 'html_full';
  $fe_block_boxes->machine_name = 'bracknell_townandcountry';
  $fe_block_boxes->body = '				<p>Find out more about Bracknell Forest Council\'s newspaper.</p>
				<div class="row">
					<div class="col-xs-10 col-sm-7">
						<img src="' . $url . '" class="img-responsive" alt="Town &amp; Country front cover">
					</div>
				</div>
				<a href="/news/town-and-country" class="btn btn-primary">View Town &amp; Country</a>
';

  $export['bracknell_townandcountry'] = $fe_block_boxes;

  return $export;
}
