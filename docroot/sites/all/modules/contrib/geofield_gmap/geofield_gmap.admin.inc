<?php

/**
 * @file
 * Admin pages for Geofield Gmap.
 */

/**
 * Form builder; Geofield Gmap admin settings form.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function geofield_gmap_admin_settings($form, &$form_state) {

  $geofield_map_key = variable_get('geofield_map_google_apikey', NULL);
  $geofield_gmap_key = variable_get('geofield_gmap_google_api_key', NULL);
  $api_key = $geofield_gmap_key ? $geofield_gmap_key : $geofield_map_key;

  $form['geofield_gmap_google_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t("Google Api Key"),
    '#default_value' => $api_key,
  );

  return system_settings_form($form);

}
