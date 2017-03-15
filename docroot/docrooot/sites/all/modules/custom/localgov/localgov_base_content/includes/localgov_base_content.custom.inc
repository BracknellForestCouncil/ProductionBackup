<?php
/**
 * @file
 * localgov_base_content.inc
 * TODO: Add file description
 *
 * @package   localgov_base_content
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
 * Afterbuild function
 */
 function _localgov_base_content_form_organize($form, $form_state){
   // Create fieldset
  //  $form['content']  = array(
  //    '#type' => 'fieldset',
  //    '#title' => t('Main Content'),
  //    '#description' => t('a description'),
  //    '#weight' => '10',
  //    '#collapsible' => TRUE,
  //    '#collapsed' => FALSE
  //  );
  //
  //  $form['node']  = array(
  //    '#type' => 'fieldset',
  //    '#title' => t('Title'),
  //    '#description' => t('Title'),
  //    '#weight' => '0',
  //  );
  //
  // //  // Move field in fieldset
  // if (isset($form['title'])) {
  //   $form['node']['title'] = $form['title'];
  //   unset($form['title']);
  // }
  //
  // if (isset($form['body'])) {
  //   $form['content']['body'] = $form['body'];
  //   unset($form['body']);
  // }

  // if (isset($form['field_content'])) {
  //   $form['content']['field_content'] = $form['field_content'];
  //   unset($form['field_content']);
  // }

  return $form;
 }


 /**
 * Validate function
 */
 function _localgov_base_content_form_validate(&$form, &$form_state) {
 }
