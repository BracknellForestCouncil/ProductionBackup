<?php
/**
 * @file
 * localgov_base_taxonomy.inc
 * TODO: Add file description
 *
 * @package   localgov_base_taxonomy
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */


 /**
 * Afterbuild function
 */
function _localgov_base_taxonomy_form_organize($form, $form_state){
  // Create fieldset
  $form['taxonomy']  = array(
    '#type' => 'fieldset',
    '#title' => t('Categorisation'),
    '#description' => t('Choose ccategories and tags for this content.'),
    '#weight' => '95',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE
  );

  if (isset($form['field_category'])) {
    $form['taxonomy']['field_category'] = $form['field_category'];
    unset($form['field_category']);
  }

  if (isset($form['field_tags'])) {
    $form['taxonomy']['field_tags'] = $form['field_tags'];
    unset($form['field_tags']);
  }


  return $form;
 }


 /**
 * Validate function
 */
 function _localgov_base_taxonomy_form_validate(&$form, &$form_state) {
 }
