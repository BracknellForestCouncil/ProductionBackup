<?php

/**
 * @file includes/bracknell_alerts.admin.inc
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
  $form['global']['text'] = array(
    '#type' => 'textarea',
    '#title' => t('Alert text'),
    '#default_value' => variable_get('bracknell_alerts_global_text', ''),
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
}
