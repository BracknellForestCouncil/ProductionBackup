<?php
/**
 * @file
 * localgov_base_redirect.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_redirect
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_redirect_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_redirect module.
     case 'admin/help#localgov_base_redirect':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Redirect module.', array()) . '</p>';
     // Help for the localgov_base_redirect module page.
     case 'admin/localgov/modules/localgov/localgov_base_redirect':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Redirect module tasks page.', array()) . '</p>';
     // Help for the localgov_base_redirect module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_redirect/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Redirect module administrative tasks page.', array()) . '</p>';
   }
 }
