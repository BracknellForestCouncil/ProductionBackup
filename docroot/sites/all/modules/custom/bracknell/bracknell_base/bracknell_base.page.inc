<?php

/**
 * @file
 * Code for the Bracknell Base page include.
 */

/**
 * Custom function to return 403 or 404 page.
 */
function bracknell_base_error_page($errorcode) {
  $content = '';
  $search_link = l(t("search"), 'search');
  $home_link = l(t("home page"), '<front>');
  if ($errorcode == '404') {
    $message_title = t("Sorry, the page you were looking for was not found.") . "<br/><br/>";
    $message_body = t("There are a few different ways to help you find the page you were looking for:") . "<br/><ul><li>" .
        t("check that you typed in the correct address") . "</li><li>" .
        t("try using our ") . $search_link . "</li><li>" .
        t("go to the ") . $home_link . t(" and browse the site") . "</li></ul>";
    $message = $message_title . $message_body;
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
