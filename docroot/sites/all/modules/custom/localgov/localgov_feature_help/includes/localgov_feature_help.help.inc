<?php
/**
 * @file
 * localgov_feature_help.help.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_help
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_feature_help_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_feature_help module.
     case 'admin/help#localgov_feature_help':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Help module.', array()) . '</p>';
     // Help for the localgov_feature_help module page.
     case 'admin/localgov/modules/localgov/localgov_feature_help':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Help module tasks page.', array()) . '</p>';
     // Help for the localgov_feature_help module admin page.
     case 'admin/localgov/modules/localgov/localgov_feature_help/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Help module administrative tasks page.', array()) . '</p>';
   }
 }
