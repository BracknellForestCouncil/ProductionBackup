<?php
/**
 * @file
 * localgov_base_file.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localgov_base_file_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access localgov_base_file'.
  $permissions['access localgov_base_file'] = array(
    'name' => 'access localgov_base_file',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_file',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer localgov_base_file'.
  $permissions['administer localgov_base_file'] = array(
    'name' => 'administer localgov_base_file',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'localgov_base_file',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any localgov_document files'.
  $permissions['delete any localgov_document files'] = array(
    'name' => 'delete any localgov_document files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any localgov_image files'.
  $permissions['delete any localgov_image files'] = array(
    'name' => 'delete any localgov_image files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any localgov_image_header files'.
  $permissions['delete any localgov_image_header files'] = array(
    'name' => 'delete any localgov_image_header files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any localgov_video files'.
  $permissions['delete any localgov_video files'] = array(
    'name' => 'delete any localgov_video files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own localgov_document files'.
  $permissions['delete own localgov_document files'] = array(
    'name' => 'delete own localgov_document files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own localgov_image files'.
  $permissions['delete own localgov_image files'] = array(
    'name' => 'delete own localgov_image files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own localgov_image_header files'.
  $permissions['delete own localgov_image_header files'] = array(
    'name' => 'delete own localgov_image_header files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own localgov_video files'.
  $permissions['delete own localgov_video files'] = array(
    'name' => 'delete own localgov_video files',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any localgov_document files'.
  $permissions['download any localgov_document files'] = array(
    'name' => 'download any localgov_document files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any localgov_image files'.
  $permissions['download any localgov_image files'] = array(
    'name' => 'download any localgov_image files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any localgov_image_header files'.
  $permissions['download any localgov_image_header files'] = array(
    'name' => 'download any localgov_image_header files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any localgov_video files'.
  $permissions['download any localgov_video files'] = array(
    'name' => 'download any localgov_video files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own localgov_document files'.
  $permissions['download own localgov_document files'] = array(
    'name' => 'download own localgov_document files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own localgov_image files'.
  $permissions['download own localgov_image files'] = array(
    'name' => 'download own localgov_image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own localgov_image_header files'.
  $permissions['download own localgov_image_header files'] = array(
    'name' => 'download own localgov_image_header files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own localgov_video files'.
  $permissions['download own localgov_video files'] = array(
    'name' => 'download own localgov_video files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any localgov_document files'.
  $permissions['edit any localgov_document files'] = array(
    'name' => 'edit any localgov_document files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any localgov_image files'.
  $permissions['edit any localgov_image files'] = array(
    'name' => 'edit any localgov_image files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any localgov_image_header files'.
  $permissions['edit any localgov_image_header files'] = array(
    'name' => 'edit any localgov_image_header files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any localgov_video files'.
  $permissions['edit any localgov_video files'] = array(
    'name' => 'edit any localgov_video files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own localgov_document files'.
  $permissions['edit own localgov_document files'] = array(
    'name' => 'edit own localgov_document files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own localgov_image files'.
  $permissions['edit own localgov_image files'] = array(
    'name' => 'edit own localgov_image files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own localgov_image_header files'.
  $permissions['edit own localgov_image_header files'] = array(
    'name' => 'edit own localgov_image_header files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own localgov_video files'.
  $permissions['edit own localgov_video files'] = array(
    'name' => 'edit own localgov_video files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
