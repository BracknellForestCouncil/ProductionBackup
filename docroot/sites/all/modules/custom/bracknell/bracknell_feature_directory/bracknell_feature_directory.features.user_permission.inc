<?php
/**
 * @file
 * bracknell_feature_directory.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bracknell_feature_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer geofield_map configuration'.
  $permissions['administer geofield_map configuration'] = array(
    'name' => 'administer geofield_map configuration',
    'roles' => array(
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'geofield_map',
  );

  // Exported permission: 'create location_car_park content'.
  $permissions['create location_car_park content'] = array(
    'name' => 'create location_car_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_community content'.
  $permissions['create location_community content'] = array(
    'name' => 'create location_community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_council content'.
  $permissions['create location_council content'] = array(
    'name' => 'create location_council content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_leisure content'.
  $permissions['create location_leisure content'] = array(
    'name' => 'create location_leisure content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_library content'.
  $permissions['create location_library content'] = array(
    'name' => 'create location_library content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_main content'.
  $permissions['create location_main content'] = array(
    'name' => 'create location_main content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_park content'.
  $permissions['create location_park content'] = array(
    'name' => 'create location_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_playground content'.
  $permissions['create location_playground content'] = array(
    'name' => 'create location_playground content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create location_school content'.
  $permissions['create location_school content'] = array(
    'name' => 'create location_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_car_park content'.
  $permissions['delete any location_car_park content'] = array(
    'name' => 'delete any location_car_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_community content'.
  $permissions['delete any location_community content'] = array(
    'name' => 'delete any location_community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_council content'.
  $permissions['delete any location_council content'] = array(
    'name' => 'delete any location_council content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_leisure content'.
  $permissions['delete any location_leisure content'] = array(
    'name' => 'delete any location_leisure content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_library content'.
  $permissions['delete any location_library content'] = array(
    'name' => 'delete any location_library content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_main content'.
  $permissions['delete any location_main content'] = array(
    'name' => 'delete any location_main content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_park content'.
  $permissions['delete any location_park content'] = array(
    'name' => 'delete any location_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_playground content'.
  $permissions['delete any location_playground content'] = array(
    'name' => 'delete any location_playground content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any location_school content'.
  $permissions['delete any location_school content'] = array(
    'name' => 'delete any location_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_car_park content'.
  $permissions['delete own location_car_park content'] = array(
    'name' => 'delete own location_car_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_community content'.
  $permissions['delete own location_community content'] = array(
    'name' => 'delete own location_community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_council content'.
  $permissions['delete own location_council content'] = array(
    'name' => 'delete own location_council content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_leisure content'.
  $permissions['delete own location_leisure content'] = array(
    'name' => 'delete own location_leisure content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_library content'.
  $permissions['delete own location_library content'] = array(
    'name' => 'delete own location_library content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_main content'.
  $permissions['delete own location_main content'] = array(
    'name' => 'delete own location_main content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_park content'.
  $permissions['delete own location_park content'] = array(
    'name' => 'delete own location_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_playground content'.
  $permissions['delete own location_playground content'] = array(
    'name' => 'delete own location_playground content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own location_school content'.
  $permissions['delete own location_school content'] = array(
    'name' => 'delete own location_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'eck add directory_entry bundles'.
  $permissions['eck add directory_entry bundles'] = array(
    'name' => 'eck add directory_entry bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add directory_entry directory_entry entities'.
  $permissions['eck add directory_entry directory_entry entities'] = array(
    'name' => 'eck add directory_entry directory_entry entities',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer directory_entry bundles'.
  $permissions['eck administer directory_entry bundles'] = array(
    'name' => 'eck administer directory_entry bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer directory_entry directory_entry entities'.
  $permissions['eck administer directory_entry directory_entry entities'] = array(
    'name' => 'eck administer directory_entry directory_entry entities',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete directory_entry bundles'.
  $permissions['eck delete directory_entry bundles'] = array(
    'name' => 'eck delete directory_entry bundles',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete directory_entry directory_entry entities'.
  $permissions['eck delete directory_entry directory_entry entities'] = array(
    'name' => 'eck delete directory_entry directory_entry entities',
    'roles' => array(
      'content administrator' => 'content administrator',
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit directory_entry bundles'.
  $permissions['eck edit directory_entry bundles'] = array(
    'name' => 'eck edit directory_entry bundles',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit directory_entry directory_entry entities'.
  $permissions['eck edit directory_entry directory_entry entities'] = array(
    'name' => 'eck edit directory_entry directory_entry entities',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list directory_entry bundles'.
  $permissions['eck list directory_entry bundles'] = array(
    'name' => 'eck list directory_entry bundles',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list directory_entry directory_entry entities'.
  $permissions['eck list directory_entry directory_entry entities'] = array(
    'name' => 'eck list directory_entry directory_entry entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view directory_entry bundles'.
  $permissions['eck view directory_entry bundles'] = array(
    'name' => 'eck view directory_entry bundles',
    'roles' => array(
      'News editor' => 'News editor',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view directory_entry directory_entry entities'.
  $permissions['eck view directory_entry directory_entry entities'] = array(
    'name' => 'eck view directory_entry directory_entry entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
      'site administrator' => 'site administrator',
      'site editor' => 'site editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit any location_car_park content'.
  $permissions['edit any location_car_park content'] = array(
    'name' => 'edit any location_car_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_community content'.
  $permissions['edit any location_community content'] = array(
    'name' => 'edit any location_community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_council content'.
  $permissions['edit any location_council content'] = array(
    'name' => 'edit any location_council content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_leisure content'.
  $permissions['edit any location_leisure content'] = array(
    'name' => 'edit any location_leisure content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_library content'.
  $permissions['edit any location_library content'] = array(
    'name' => 'edit any location_library content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_main content'.
  $permissions['edit any location_main content'] = array(
    'name' => 'edit any location_main content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_park content'.
  $permissions['edit any location_park content'] = array(
    'name' => 'edit any location_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_playground content'.
  $permissions['edit any location_playground content'] = array(
    'name' => 'edit any location_playground content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any location_school content'.
  $permissions['edit any location_school content'] = array(
    'name' => 'edit any location_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_car_park content'.
  $permissions['edit own location_car_park content'] = array(
    'name' => 'edit own location_car_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_community content'.
  $permissions['edit own location_community content'] = array(
    'name' => 'edit own location_community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_council content'.
  $permissions['edit own location_council content'] = array(
    'name' => 'edit own location_council content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_leisure content'.
  $permissions['edit own location_leisure content'] = array(
    'name' => 'edit own location_leisure content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_library content'.
  $permissions['edit own location_library content'] = array(
    'name' => 'edit own location_library content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_main content'.
  $permissions['edit own location_main content'] = array(
    'name' => 'edit own location_main content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_park content'.
  $permissions['edit own location_park content'] = array(
    'name' => 'edit own location_park content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_playground content'.
  $permissions['edit own location_playground content'] = array(
    'name' => 'edit own location_playground content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own location_school content'.
  $permissions['edit own location_school content'] = array(
    'name' => 'edit own location_school content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_bing'.
  $permissions['geocoder_service_handler_bing'] = array(
    'name' => 'geocoder_service_handler_bing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_openstreetmap_nominatim'.
  $permissions['geocoder_service_handler_openstreetmap_nominatim'] = array(
    'name' => 'geocoder_service_handler_openstreetmap_nominatim',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'manage directory_entry properties'.
  $permissions['manage directory_entry properties'] = array(
    'name' => 'manage directory_entry properties',
    'roles' => array(
      'site administrator' => 'site administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
