<?php

/*
 * @file
 * Contains the submission form & code for the Was This Useful functionality.
 */

/**
 * Implements hook_form().
 * 
 * An AJAX powered feedback form.
 */
function bracknell_was_this_useful_form($form, &$form_state) {   
  // Form container.
  $form['wtu_form'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="wtu-form">',
    '#suffix' => '</div>',
  );
  
  // First part - smiley faces. Always shown.
  $form['wtu_form']['wtu_smileys'] = array(
    '#type' => 'container',
    '#name' => 'wtu_smileys',
    '#attributes' => array(
      'class' => array('wtu_smileys'),
    ),
  );
    
  $form['wtu_form']['wtu_smileys']['happy'] = array(
    '#type' => 'button',
    '#value' => 'happy',
    '#weight' => 0,
    '#limit_validation_errors' => array(),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_get_smiley_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
  );

  $form['wtu_form']['wtu_smileys']['neutral'] = array(
    '#type' => 'button',
    '#value' => 'neutral',
    '#weight' => 1,
    '#limit_validation_errors' => array(),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_get_smiley_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
  );

  $form['wtu_form']['wtu_smileys']['sad'] = array(
    '#type' => 'button',
    '#value' => 'sad',
    '#weight' => 2,
    '#limit_validation_errors' => array(),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_get_smiley_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
  );
  
   if (array_key_exists('triggering_element', $form_state) && $form_state['triggering_element']['#name'] === 'op') {
   $smiley_response = $form_state['triggering_element']['#value'];
 }
  if (isset($smiley_response)) {
    // Second part - ask the user.
    $form['wtu_form']['wtu_question'] = array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('wtu_question'),
      ),
    );
    $form['wtu_form']['wtu_question']['question'] = array(
      '#markup' => l(t('Is there anything wrong with this page?'),'#'),
    );

    // Hidden fields to collect data not shown to the user.
    $form['wtu_form']['wtu_data']['response'] = array(
      '#type' => 'hidden',
      '#value' => ( isset($smiley_response) ) ? $smiley_response : '',
    );

    $form['wtu_form']['wtu_data']['page_details'] = array(
      '#type' => 'hidden',
      '#value' => (isset($page_details)) ? $page_details : '',
    );
    
    // Third part - gather some information.
    $form['wtu_form']['wtu_data'] = array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('wtu_data', 'hide'),
      ),
    );

    $form['wtu_form']['wtu_data']['what_went_wrong'] = array(
      '#type' => 'select',
      '#title' => t('What went wrong?'),
      '#options' => array(
        0 => t('It didn’t answer my question'),
        1 => t('It is difficult to understand'),
        2 => t('It isn’t accurate'),
        3 => t('Other'),
      ),
    );
    $form['wtu_form']['wtu_data']['how_to_improve'] = array(
      '#type' => 'textarea',
      '#title' => t('How can we improve this page?'),
    );
  }

  // $form['theme'][] = 'bracknell_was_this_useful_form';

  return $form;
}

// Validate.

// Submit.

/**
 * Custom AJAX function triggered from the smiley faces.
 */
function bracknell_was_this_useful_get_smiley_ajax_callback($form, &$form_state) {
  watchdog('php', 'inside callback');
  return $form;
}

/**
 * A very basic form which with an AJAX-enabled submit.
 *
 * On submit, the markup in the #markup element is updated.
 */
//function ajax_example_submit_driven_ajax_form($form, &$form_state) {
//  $form['box'] = array(
//    '#type' => 'markup',
//    '#prefix' => '<div id="box">',
//    '#suffix' => '</div>',
//    '#markup' => '<h1>Initial markup for box</h1>',
//  );
//
//  $form['submit'] = array(
//    '#type' => 'submit',
//    '#ajax' => array(
//      'callback' => 'ajax_example_submit_driven_callback',
//      'wrapper' => 'box',
//    ),
//    '#value' => t('Submit'),
//  );
//
//  return $form;
//}

/**
 * Callback for submit_driven example.
 *
 * Select the 'box' element, change the markup in it, and return it as a
 * renderable array.
 *
 * @return array
 *   Renderable array (the box element)
 */
//function ajax_example_submit_driven_callback($form, $form_state) {
//  // In most cases, it is recommended that you put this logic in form generation
//  // rather than the callback. Submit driven forms are an exception, because
//  // you may not want to return the form at all.
//  $element = $form['box'];
//  $element['#markup'] = "Clicked submit ({$form_state['values']['op']}): " . date('c');
//  return $element;
//}
