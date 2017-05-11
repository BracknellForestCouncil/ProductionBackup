<?php

/**
 * @file
 * Code for the Bracknell Base page include.
 */

/**
 * Custom function to return 403 or 404 page.
 *
 * TODO: Refactor not to have html in this function.
 */
function bracknell_base_error_page($errorcode) {
  $content = '';
  // Display page dependant on error code.
  if ($errorcode == '404') {
    $search_link = l(t("search"), 'search');
    $home_link = l(t("home page"), '<front>');
    // Alternative options for the user.
    $alt_links = array(
      t("check that you typed in the correct address"),
      t("try using our:space", array(':space' => ' ')) . $search_link,
      t("go to the:space", array(':space' => ' ')) . $home_link . t(":spaceand browse the site", array(':space' => ' ')),
    );
    // Create the 404 page message.
    $message_title = t("Sorry, the page you were looking for was not found.:doublespace", array(':doublespace' => "<br/><br/>"));
    $message_body = t("There are a few different ways to help you find the page you were looking for::singlespace", array(':singlespace' => "<br/>"));
    // Create an unordered list of options to display using theme function.
    $message_options = theme('item_list', array('items' => $alt_links));
    // Combine the options and stick in the markup.
    $message = $message_title . $message_body . $message_options;
    $content['raw_markup'] = array(
      '#type' => 'markup',
      '#markup' => '<p>' . $message . '</p>',
    );
  }
  elseif ($errorcode == '403') {
    // Verbotten!
    $content['raw_markup'] = array(
      '#type' => 'markup',
      '#markup' => '<p>' . t("You are not authorized to access this page.") . '</p>',
    );
  }

  return $content;
}
