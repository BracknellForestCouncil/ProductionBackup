<?php
/**
 * @file
 * theme-settings.php
 * Theme settings file for the LocalGov Example Theme theme.
 *
 * @package   localgov_theme_example
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

require_once dirname(__FILE__) . '/template.php';

/**
 * Implements hook_form_FORM_alter().
 */
function localgov_theme_example_form_system_theme_settings_alter(&$form, $form_state) {
  // You can use this hook to append your own theme settings to the theme
  // settings form for your subtheme.

}
