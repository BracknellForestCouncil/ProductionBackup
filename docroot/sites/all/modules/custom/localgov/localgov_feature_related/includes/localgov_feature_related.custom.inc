<?php
/**
 * @file
 * localgov_feature_related.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_related
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
 * Afterbuild function
 */
 function _localgov_feature_related_form_organize($form, $form_state){
  // if (isset($form['field_related'])) {
  //    $form['related']  = array(
  //      '#type' => 'fieldset',
  //      '#title' => t('Related Links'),
  //      '#description' => t('A description.'),
  //      '#weight' => '96',
  //      '#collapsible' => TRUE,
  //      '#collapsed' => FALSE
  //    );
  //
  //   //  // Move field in fieldset
  //   $form['related']['field_related'] = $form['field_related'];
  //
  //   unset($form['field_related']);
  // }

  return $form;
 }


/**
 * Validate function
 */
function _localgov_feature_related_form_validate(&$form, &$form_state) {
}
