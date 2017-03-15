<?php
/**
 * @file
 * localgov_base_file.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function localgov_base_file_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'localgov_document';
  $file_type->label = 'Document';
  $file_type->description = 'A <em>Document</em> file is written information.';
  $file_type->mimetypes = array(
    0 => 'text/plain',
    1 => 'application/pgp-signature',
    2 => 'application/msword',
    3 => 'application/vnd.ms-excel',
    4 => 'application/pdf',
    5 => 'application/vnd.ms-powerpoint',
    6 => 'application/vnd.oasis.opendocument.text',
    7 => 'application/vnd.oasis.opendocument.spreadsheet',
    8 => 'application/vnd.oasis.opendocument.presentation',
    9 => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    10 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    11 => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
  );
  $export['localgov_document'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'localgov_image';
  $file_type->label = 'Image';
  $file_type->description = 'An <em>Image</em> file is a still visual.';
  $file_type->mimetypes = array(
    0 => 'image/*',
  );
  $export['localgov_image'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'localgov_image_header';
  $file_type->label = 'Image (Header Image)';
  $file_type->description = 'Header images. TODO: Add description.';
  $file_type->mimetypes = array(
    0 => 'image/*',
  );
  $export['localgov_image_header'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'localgov_video';
  $file_type->label = 'Video';
  $file_type->description = 'A <em>Video</em> file is a moving visual recording.';
  $file_type->mimetypes = array(
    0 => 'video/*',
  );
  $export['localgov_video'] = $file_type;

  return $export;
}
