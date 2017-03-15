<?php
/**
 * @file
 * localgov_content_easyread.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function localgov_content_easyread_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'localgov_image_easyread';
  $file_type->label = 'localgov_image_easyread';
  $file_type->description = 'Easy read images... TODO: Add description.';
  $file_type->mimetypes = array(
    0 => 'image/*',
  );
  $export['localgov_image_easyread'] = $file_type;

  return $export;
}
