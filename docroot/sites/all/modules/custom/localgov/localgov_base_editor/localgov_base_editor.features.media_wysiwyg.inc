<?php
/**
 * @file
 * localgov_base_editor.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function localgov_base_editor_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // WYSIWYG view mode for localgov_document files.
  $media_wysiwyg['localgov_document_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for localgov_document files.
  $media_wysiwyg['localgov_document_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_document_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_document_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_document_default_restrict_wysiwyg'] = FALSE;

  // WYSIWYG view mode for localgov_image files.
  $media_wysiwyg['localgov_image_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for localgov_image files.
  $media_wysiwyg['localgov_image_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_image_preview_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['localgov_image_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_image_default_restrict_wysiwyg'] = FALSE;

  // WYSIWYG view mode for localgov_image_header files.
  $media_wysiwyg['localgov_image_header_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for localgov_image_header files.
  $media_wysiwyg['localgov_image_header_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_image_header_preview_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['localgov_image_header_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_image_header_default_restrict_wysiwyg'] = FALSE;

  // WYSIWYG view mode for localgov_video files.
  $media_wysiwyg['localgov_video_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for localgov_video files.
  $media_wysiwyg['localgov_video_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_video_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_video_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['localgov_video_default_restrict_wysiwyg'] = FALSE;

  return $media_wysiwyg;
}
