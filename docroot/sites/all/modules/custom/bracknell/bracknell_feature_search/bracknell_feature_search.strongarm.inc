<?php
/**
 * @file
 * bracknell_feature_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bracknell_feature_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_debug';
  $strongarm->value = 0;
  $export['search_api_attachments_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_extracting_servlet_path';
  $strongarm->value = 'update/extract';
  $export['search_api_attachments_extracting_servlet_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_extract_using';
  $strongarm->value = 'solr';
  $export['search_api_attachments_extract_using'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_preserve_cache';
  $strongarm->value = 0;
  $export['search_api_attachments_preserve_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_python_pdf2txt_path';
  $strongarm->value = '/usr/bin';
  $export['search_api_attachments_python_pdf2txt_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_python_pdf2txt_script';
  $strongarm->value = 'pdf2txt';
  $export['search_api_attachments_python_pdf2txt_script'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_tika_jar';
  $strongarm->value = 'tika-app-1.4.jar';
  $export['search_api_attachments_tika_jar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_tika_path';
  $strongarm->value = '';
  $export['search_api_attachments_tika_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_article';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_basic';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_basic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_contact';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_fact';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_form';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_guide';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_guide_section';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_guide_section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_miscellaneous';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_miscellaneous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_promo';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_smallprint';
  $strongarm->value = 1;
  $export['search_api_exclude_setting_smallprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_types';
  $strongarm->value = array(
    'basic' => TRUE,
    'form' => TRUE,
    'contact' => TRUE,
    'fact' => TRUE,
    'guide' => TRUE,
    'guide_section' => TRUE,
    'miscellaneous' => TRUE,
    'article' => TRUE,
    'promo' => TRUE,
    'smallprint' => TRUE,
  );
  $export['search_api_exclude_types'] = $strongarm;

  return $export;
}
