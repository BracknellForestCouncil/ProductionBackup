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
  // Store data that will be sent through all pages. This needs to happen
  // because the values will get wiped due to the rebuild flag.
  if (empty($form_state['data'])) {
    $form_state['data'] = array();
  }
  if (empty($form_state['data']['page_details'])) {
    $form_state['data']['page_details'] = _bracknell_was_this_useful_get_page_info();
  }

  // Get the current form step, or by default 1.
  $step = isset($form_state['step']) ? $form_state['step'] : 1;

  // Define our form container; this is required for AJAX to work.
  $form['wtu_form'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="wtu-form">',
    '#suffix' => '</div>',
  );

  // Render a different page of the form, depending on the current step.
  switch ($step) {
    // Smileys that send the initial happy/neutral/sad email.
    case 1:
      $form = bracknell_was_this_useful_step_1_form($form, $form_state);
      break;
    // Link that takes you to the next step, does nothing else.
    case 2:
      $form = bracknell_was_this_useful_step_2_form($form, $form_state);
      break;
    // Final form with select box and textarea to give more detail.
    case 3:
      $form = bracknell_was_this_useful_step_3_form($form, $form_state);
      break;
    // Submission is complete text.
    case 4:
      $form['wtu_form']['complete'] = array(
        '#type' => 'markup',
        '#markup' => "<p id='wtu-final-thanks'>Thank you for your feedback.</p>",
      );
      break;
    // Something went wrong text; should never see this.
    default:
      $form['wtu_form']['error'] = array(
        '#type' => 'markup',
        '#markup' => 'Sorry, something has gone wrong with this form. Please try again later.',
      );
      break;
  }

  return $form;
}

/**
 * Implements hook_form().
 *
 * Show the first step of the form, the smileys.
 */
function bracknell_was_this_useful_step_1_form($form, &$form_state) {
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
    '#type' => 'submit',
    '#value' => 'Yes',
    '#weight' => 0,
    '#limit_validation_errors' => array(),
    '#submit' => array('bracknell_was_this_useful_smiley_submit'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
    '#attributes' => array(
      'aria-controls' => array('wtu-question'),
      'class' => array('btn-happy'),
    ),
  );

  $form['wtu_form']['wtu_smileys']['neutral'] = array(
    '#type' => 'submit',
    '#value' => 'Maybe',
    '#weight' => 1,
    '#limit_validation_errors' => array(),
    '#submit' => array('bracknell_was_this_useful_smiley_submit'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
    '#attributes' => array(
      'aria-controls' => array('wtu-question'),
      'class' => array('btn-neutral'),
    ),
  );

  $form['wtu_form']['wtu_smileys']['sad'] = array(
    '#type' => 'submit',
    '#value' => 'No',
    '#weight' => 2,
    '#limit_validation_errors' => array(),
    '#submit' => array('bracknell_was_this_useful_smiley_submit'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
    '#attributes' => array(
      'aria-controls' => array('wtu-question'),
      'class' => array('btn-sad'),
    ),
  );
  return $form;
}

/**
 * Implements hook_form().
 *
 * Show the second step of the form, the next step link.
 */
function bracknell_was_this_useful_step_2_form($form, &$form_state) {
  $form['wtu_form']['wtu_question'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="wtu-question">',
    '#suffix' => '</div>',
    '#attributes' => array(
      'class' => array('wtu-question-container'),
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
    '#type' => 'submit',
    '#name' => 'show_data',
    '#value' => t('Is there anything wrong with this page?'),
    '#submit' => array('bracknell_was_this_useful_question_submit'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
    '#attributes' => array(
      'class' => array('wtu-question-link'),
      'aria-controls' => array('wtu-data'),
    ),
  );
  return $form;
}

/**
 * Implements hook_form().
 *
 * Show the final step of the form, the extra details.
 */
function bracknell_was_this_useful_step_3_form($form, &$form_state) {
  $form['wtu_form']['wtu_data'] = array(
    '#type' => 'container',
    '#prefix' => '<div id="wtu-data">',
    '#suffix' => '</div>',
    '#attributes' => array(
      'class' => array('wtu-question-container'),
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
    '#submit' => array('bracknell_was_this_useful_form_submit'),
    '#ajax' => array(
      'callback' => 'bracknell_was_this_useful_ajax_callback',
      'wrapper' => 'wtu-form',
    ),
    '#attributes' => array(
      'class' => array('btn-submit'),
    ),
  );
  return $form;
}

/**
 * Generic ajax function for all steps, returns the whole form.
 */
function bracknell_was_this_useful_ajax_callback($form, &$form_state) {
  return $form;
}

/**
 * Implements hook_form_submit().
 *
 * Sends an email based on the initial chosen smiley.
 */
function bracknell_was_this_useful_smiley_submit($form, &$form_state) {
  // Translate the submit button that was clicked (aka the triggering element)
  // into a response.
  if (array_key_exists('triggering_element', $form_state) && $form_state['triggering_element']['#name'] === 'op') {
    $smiley_response = $form_state['data']['smiley_response'] = $form_state['triggering_element']['#value'];
  }

  // Initial email as a quick response from the chosen smiley.
  $params = array(
    'subject' => !empty($smiley_response) ? '"' . $smiley_response . '" feedback received' : 'Response empty or not set.',
    'body' => !empty($form_state['data']['page_details']) ? 'Page details: ' . PHP_EOL . $form_state['data']['page_details'] . PHP_EOL : 'Page details empty or not set.',
  );
  drupal_mail('bracknell_was_this_useful', 'quick_feedback', 'digital.services@bracknell-forest.gov.uk', language_default(), $params);

  // Set the step to the next page and force a rebuild.
  $form_state['step'] = 2;
  $form_state['rebuild'] = TRUE;
}

/**
 * Implements hook_form_submit().
 *
 * Does nothing except move you to the next page.
 */
function bracknell_was_this_useful_question_submit($form, &$form_state) {
  // Set the step to the next page and force a rebuild.
  $form_state['step'] = 3;
  $form_state['rebuild'] = TRUE;
}

/**
 * Implements hook_form_submit().
 *
 * Final step of the form, sends an email with all details.
 */
function bracknell_was_this_useful_form_submit($form, &$form_state) {
  // Check we have some values.
  if (isset($form_state['values'])) {
    // Build a body!
    $lines = array();

    $lines[] = !empty($form_state['data']['page_details']) ?
      'Page details: ' . PHP_EOL . $form_state['data']['page_details'] . PHP_EOL :
      'Page details empty or not set.';

    $lines[] = !empty($form_state['data']['smiley_response']) ?
      'Response was ' . $form_state['data']['smiley_response'] . PHP_EOL :
      'Response empty or not set.';

    $lines[] = !empty($form_state['values']['what_went_wrong']) ?
      'What went wrong: ' . $form_state['values']['what_went_wrong'] . PHP_EOL :
      'What went wrong empty or not set.';

    $lines[] = !empty($form_state['values']['how_to_improve']) ?
      'How can we improve: ' . PHP_EOL . $form_state['values']['how_to_improve'] . PHP_EOL :
      'How we can improve empty or not set.';

    // Mail parameters ASSEMBLE!
    $params = array(
      'subject' => 'Website feedback',
      'body' => implode(PHP_EOL, $lines),
    );
    // Email the information using drupal_mail() function. See the module file
    // for hook_mail().
    drupal_mail('bracknell_was_this_useful', 'feedback_form', 'digital.services@bracknell-forest.gov.uk', language_default(), $params);
  }

  // Set the step to the next page and force a rebuild.
  $form_state['step'] = 4;
  $form_state['rebuild'] = TRUE;
}

/**
 * Custom function that returns info such as user agent, current page, etc.
 */
function _bracknell_was_this_useful_get_page_info() {
  // It is unsafe to use raw variables so we need to filter. Unfortunately there
  // was a bug in PHP so here's the workaround.
  if (filter_has_var(INPUT_SERVER, "HTTP_USER_AGENT")) {
    $user_agent = filter_input(INPUT_SERVER, "HTTP_USER_AGENT", FILTER_UNSAFE_RAW, FILTER_NULL_ON_FAILURE);
  }
  else {
    if (isset($_SERVER["HTTP_USER_AGENT"])) {
      $user_agent = filter_var($_SERVER["HTTP_USER_AGENT"], FILTER_UNSAFE_RAW, FILTER_NULL_ON_FAILURE);
    }
    else {
      $user_agent = NULL;
    }
  };

  $page_info = 'date/time: ' . date('Y-m-d H:i:s') . PHP_EOL .
    'location: ' . current_path() . PHP_EOL .
    'title: ' . drupal_get_title() . PHP_EOL .
    'user_agent: ' . $user_agent;

  return $page_info;
}
