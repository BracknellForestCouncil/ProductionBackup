<?php

/**
 * @file
 * Admin page for the sitewide alerts system.
 */

/**
 * Implements hook_form().
 *
 * Settings for whether the sitewide alert is shown or not, its content, etc.
 */
function bracknell_alerts_admin_settings_form($form, &$form_state) {
  $form['global'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global alert'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['global']['enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => variable_get('bracknell_alerts_global_enabled', 0),
  );
  $form['global']['severity'] = array(
    '#type' => 'select',
    '#title' => t('Severity'),
    '#options' => array(
      'info' => t('Info'),
      'warning' => t('Warning'),
      'critical' => t('Critical'),
    ),
    '#default_value' => variable_get('bracknell_alerts_global_severity', 'info'),
  );
  $default_text = variable_get('bracknell_alerts_global_text', FALSE);
  $form['global']['text'] = array(
    '#type' => 'text_format',
    '#base_type' => 'textarea',
    '#title' => t('Alert text'),
    '#default_value' => $default_text ? $default_text['value'] : '',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
  $form['#tree'] = TRUE;
  return $form;
}

/**
 * Implements hook_form_submit().
 *
 * Sets variable values from the admin settings form.
 *
 * @todo Use nice cache invalidation rather than flush 'em all.
 * @todo Flush Acquia Varnish cache.
 */
function bracknell_alerts_admin_settings_form_submit($form, $form_state) {
  variable_set('bracknell_alerts_global_enabled', $form_state['values']['global']['enabled']);
  variable_set('bracknell_alerts_global_severity', $form_state['values']['global']['severity']);
  variable_set('bracknell_alerts_global_text', $form_state['values']['global']['text']);
  drupal_flush_all_caches();
  drupal_set_message(t('Alert settings saved and caches cleared.'), 'status', FALSE);
  if (module_exists('acquia_flush_varnish') && isset($_ENV['AH_SITE_ENVIRONMENT'])) {
    acquia_flush_varnish_cache();
    drupal_set_message(t('Acquia Varnish cache cleared.'), 'status', FALSE);
  }
}
