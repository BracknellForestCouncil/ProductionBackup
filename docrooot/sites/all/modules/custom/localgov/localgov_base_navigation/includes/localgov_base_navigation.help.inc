<?php
/**
 * @file
 * localgov_base_navigation.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_navigation_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_navigation module.
     case 'admin/help#localgov_base_navigation':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Navigation module.', array()) . '</p>';
     // Help for the localgov_base_navigation module page.
     case 'admin/localgov/modules/localgov/localgov_base_navigation':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Navigation module tasks page.', array()) . '</p>';
     // Help for the localgov_base_navigation module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_navigation/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Navigation module administrative tasks page.', array()) . '</p>';
   }
 }
