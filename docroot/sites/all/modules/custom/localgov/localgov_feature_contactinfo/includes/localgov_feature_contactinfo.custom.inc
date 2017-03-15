<?php
/**
 * @file
 * localgov_feature_contactinfo.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_contactinfo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
 * Afterbuild function
 */
 function _localgov_feature_contactinfo_form_organize($form, $form_state){

   if (isset($form['field_contactinfo'])) {
     $form['contactinfo']  = array(
       '#type' => 'fieldset',
       '#title' => t('Contact information'),
       '#description' => t('Choose contact information to be displayed with this content.'),
       '#weight' => '97',
       '#collapsible' => TRUE,
       '#collapsed' => FALSE
     );

    //  // Move field in fieldset
    $form['contactinfo']['field_contactinfo'] = $form['field_contactinfo'];
    $form['contactinfo']['field_contactinfo_style'] = $form['field_contactinfo_style'];

    unset($form['field_contactinfo']);
    unset($form['field_contactinfo_style']);
  }
  return $form;
 }


/**
 * Validate function
 */
function _localgov_feature_contactinfo_form_validate(&$form, &$form_state) {
}
