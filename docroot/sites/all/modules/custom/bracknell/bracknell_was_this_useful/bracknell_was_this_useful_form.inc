<?php

/**
 * @file
 * Contains the submission form & code for the Was This Useful functionality.
 */

/**
 * Implements hook_form().
 *
 * An AJAX powered feedback form.
 */
function bracknell_was_this_useful_form($form, &$form_state) {
  // Assemble some information for the submission.
  if ($form_state['rebuild'] == FALSE) {
    $page_details = _get_page_info();
  }
  elseif (isset($form_state['input']) && !empty($form_state['input']['page_details'])) {
    $page_details = $form_state['input']['page_details'];
  }

  // First button click - smiley faces.
  $smiley_response = NULL;
  if (array_key_exists('triggering_element', $form_state) && $form_state['triggering_element']['#name'] === 'op') {
    $smiley_response = $form_state['triggering_element']['#value'];    
  }
  elseif (isset($form_state['values']) && !empty($form_state['values']['response'])) {
    // If the second button is clicked get the value from the hidden fields.
    $smiley_response = $form_state['values']['response'];
  }

  // Second button click - what's wrong.
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
  
  $form['wtu_form']['page_details'] = array(
    '#type' => 'hidden',
    '#value' => (isset($page_details)) ? $page_details : '',
  );

  // First part - smiley faces. Always shown.
  $form['wtu_form']['wtu_smileys'] = array(
    '#type' => 'container',
    '#name' => 'wtu_smileys',
    '#prefix' => '<div id="wtu-smileys">',
    '#suffix' => '</div>',
    '#attributes' => array(
      'class' => array('wtu-smileys-container'),
    ),
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
      '#attributes' => array(
      'class' => array('wtu-smiley-happy'),
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
      '#attributes' => array(
      'class' => array('wtu-smiley-neutral'),
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
      '#attributes' => array(
      'class' => array('wtu-smiley-sad'),
    ),
  );

  // Second part - ask the user.
  $form['wtu_form']['wtu_question'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="wtu-question">',
    '#suffix' => '</div>',
    '#attributes' => array(
      'class' => (isset($smiley_response)) ? array('wtu-question-container') : array('wtu-question-container','hide'),
    ),
  );
  
  $form['wtu_form']['wtu_question']['feedback'] = array(
    '#markup' => t('Thank you for your feedback.'),
    '#prefix' => '<p>',
    '#suffix' => '</p>',
    '#attributes' => array(
      'class' => array('wtu-question-thanks'),
    ),
  );

  // This button will be formatted as a link.
  $form['wtu_form']['wtu_question']['question'] = array(
    '#type' => 'button',
    '#name' => 'show_data',
    '#value' => t('Is there anything wrong with this page?'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_question_ajax_callback',
      'wrapper' => 'wtu-data',
    ),
    '#attributes' => array(
      'class' => array('wtu-question-link'),
    ),
  );

  // Third part - gather some information.
  $form['wtu_form']['wtu_data'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="wtu-data">',
    '#suffix' => '</div>',
    '#attributes' => array(
      'class' => (isset($question_response)) ? array('wtu-data-container') : array('wtu-data-container', 'hide'),
    ),
  );

  $form['wtu_form']['wtu_data']['title'] = array(
    '#markup' => t('Report a problem with this page'),
    '#prefix' => '<h3 class="wtu-data-title">',
    '#suffix' => '</h3>',
    
  );
  
  $form['wtu_form']['wtu_data']['spiel'] = array(
    '#markup' => t('Help us to improve this page by providing feedback. Don’t include any personal information below. We are unable to respond via this form.'),
    '#prefix' => '<p class="wtu-spiel">',
    '#suffix' => '</p>',
  );

  // Hidden fields to collect data not shown to the user.
  $form['wtu_form']['wtu_data']['response'] = array(
    '#type' => 'hidden',
    '#value' => (isset($smiley_response)) ? $smiley_response : '',
  );

  $form['wtu_form']['wtu_data']['what_went_wrong'] = array(
    '#type' => 'select',
    '#title' => t('What went wrong?'),
    '#options' => array(
      'Didnt answer my question' => t('It didn’t answer my question'),
      'Difficult to understand' => t('It is difficult to understand'),
      'Not accurate' => t('It isn’t accurate'),
      'Other' => t('Other'),
    ),
    '#attributes' => array(
      'class' => array('wtu-what-went-wrong'),
    ),
  );

  $form['wtu_form']['wtu_data']['how_to_improve'] = array(
    '#type' => 'textarea',
    '#title' => t('How can we improve this page?'),
    '#attributes' => array(
      'class' => array('wtu-how-to-improve'),
    ),
  );

  $form['wtu_form']['wtu_data']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_form_ajax_submit',
      'wrapper' => 'wtu-form',
    ),
  );

  return $form;
}

/**
 * Custom AJAX final submission of the Was this useful form.
 */
function bracknell_was_this_useful_form_ajax_submit($form, &$form_state) {
  // Shortcut the $form_state['values'] for future use.
  $values = $form_state['values'];
  // Check we have some values.
  if (isset($values)) {
    // Build a body!
    $line1 = (!empty($values['page_details'])) ? 'Page details: ' . PHP_EOL . $values['page_details'] . PHP_EOL : 'Page details empty or not set.';
    $line2 = (!empty($values['response'])) ? 'Response was ' . $values['response'] . PHP_EOL : 'Response empty or not set.';
    $line3 = (!empty($values['what_went_wrong'])) ? 'What went wrong: ' . $values['what_went_wrong'] . PHP_EOL : 'What went wrong empty or not set.';
    $line4 = (!empty($values['how_to_improve'])) ? 'How can we improve: ' . PHP_EOL . $values['how_to_improve'] . PHP_EOL : 'How we can improve empty or not set.';
    // Mail parameters ASSEMBLE!    
    $params = array(
      'subject' => 'Website feedback',
      'body' =>  $line1 . PHP_EOL . $line2 . PHP_EOL . $line3 . PHP_EOL . $line4,
    );
    // Email the information using drupal_mail(), see module file for hook_mail().
    drupal_mail('bracknell_was_this_useful', 'feedback_form', 'digital.services@bracknell-forest.gov.uk', language_default(), $params);
  }
  // Thank user.
  return "<div id='wtu-final-thanks'>Thank you for your feedback.</div>";
}

/**
 * Custom AJAX function triggered from the smiley faces.
 */
function bracknell_was_this_useful_get_smiley_ajax_callback($form, &$form_state) {
  return $form['wtu_form']['wtu_question'];
}

/**
 * Custom AJAX function triggered from the question link.
 */
function bracknell_was_this_useful_question_ajax_callback($form, &$form_state) {
  return $form['wtu_form']['wtu_data'];
}

/**
 * Custom function - returns page info.
 */
function _get_page_info() {
  // It is unsafe to use raw variables so we need to filter. Unfortunately there
  // was a bug in PHP so here's the workaround.
  if (filter_has_var(INPUT_SERVER, "HTTP_USER_AGENT")) {
    $user_agent = filter_input(INPUT_SERVER, "HTTP_USER_AGENT", FILTER_UNSAFE_RAW, FILTER_NULL_ON_FAILURE);
  }
  else {
    if (isset($_SERVER["HTTP_USER_AGENT"]))
      $user_agent = filter_var($_SERVER["HTTP_USER_AGENT"], FILTER_UNSAFE_RAW, FILTER_NULL_ON_FAILURE);
    else
      $user_agent = NULL;
  };

  $page_info = 'date/time: ' . date('Y-m-d H:i:s') . PHP_EOL .
      'location: ' . current_path() . PHP_EOL .
      'title: ' . drupal_get_title() . PHP_EOL .
      'user_agent: ' . $user_agent;

  return $page_info;
}
