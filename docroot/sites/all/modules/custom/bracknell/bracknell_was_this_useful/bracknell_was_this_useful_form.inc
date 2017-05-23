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
  $smiley_response = NULL;
  if (array_key_exists('triggering_element', $form_state) && $form_state['triggering_element']['#name'] === 'op') {
    $smiley_response = $form_state['triggering_element']['#value'];
  }
  elseif (isset($form_state['values']) && !empty($form_state['values']['response'])) {
    $smiley_response = $form_state['values']['response'];
  }
  
  $question_response = NULL;
  if (array_key_exists('triggering_element', $form_state) && $form_state['triggering_element']['#name'] === 'show_data') {
    $question_response = TRUE;
  }

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
     '#prefix' => '<div id="wtu-smileys">',
    '#suffix' => '</div>',
  );
    
  $form['wtu_form']['wtu_smileys']['happy'] = array(
    '#type' => 'button',
    '#value' => 'happy',
    '#weight' => 0,
    '#limit_validation_errors' => array(),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_get_smiley_ajax_callback',
      'wrapper' => 'wtu-question',
    ),
  );

  $form['wtu_form']['wtu_smileys']['neutral'] = array(
    '#type' => 'button',
    '#value' => 'neutral',
    '#weight' => 1,
    '#limit_validation_errors' => array(),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_get_smiley_ajax_callback',
      'wrapper' => 'wtu-question',
    ),
  );

  $form['wtu_form']['wtu_smileys']['sad'] = array(
    '#type' => 'button',
    '#value' => 'sad',
    '#weight' => 2,
    '#limit_validation_errors' => array(),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_get_smiley_ajax_callback',
      'wrapper' => 'wtu-question',
    ),
  );
  
    // Second part - ask the user.
    $form['wtu_form']['wtu_question'] = array(
      '#type' => 'container',
      '#prefix' => '<div id="wtu-question">',
      '#suffix' => '</div>',
      '#attributes' => array(
        'class' => (isset($smiley_response)) ? '' : array('hide'),
      ),
    );
    
    $form['wtu_form']['wtu_question']['question'] = array(
      '#type' => 'button',
      '#name' => 'show_data',
      '#value' => t('Is there anything wrong with this page?'),
      '#weight' => 0,
      '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_question_callback',
      'wrapper' => 'wtu-data',
    ),
    );
    
    // Third part - gather some information.
    $form['wtu_form']['wtu_data'] = array(
      '#type' => 'container',
      '#prefix' => '<div id="wtu-data">',
      '#suffix' => '</div>',
      '#attributes' => array(
        'class' => (isset($question_response)) ? '' : array('hide'),
      ),
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
  
  // $form['theme'][] = 'bracknell_was_this_useful_form';

  return $form;
}

// Validate.

// Submit.

/**
 * Custom AJAX function triggered from the smiley faces.
 */
function bracknell_was_this_useful_get_smiley_ajax_callback($form, &$form_state) {
  return $form['wtu_form']['wtu_question'];
}

function bracknell_was_this_useful_question_callback($form, &$form_state) {
  return $form['wtu_form']['wtu_data'];
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
