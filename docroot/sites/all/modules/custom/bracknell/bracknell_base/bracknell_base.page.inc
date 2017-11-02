<?php

/**
 * @file
 * Code for the Bracknell Base page include.
 */

/**
 * Custom function to return 403 or 404 page.
 *
 * @param int $errorcode
 *   The http errorcode.
 */
function bracknell_base_error_page($errorcode) {
  // Display page dependant on error code.
  if ($errorcode == '404') {
    return theme('bb_404');
  }
  elseif ($errorcode == '403') {
    return theme('bb_403');
  }

}
