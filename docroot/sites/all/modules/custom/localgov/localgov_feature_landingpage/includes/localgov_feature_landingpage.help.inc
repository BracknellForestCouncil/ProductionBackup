<?php
/**
 * @file
 * localgov_feature_landingpage.help.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_landingpage
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_feature_landingpage_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_feature_landingpage module.
     case 'admin/help#localgov_feature_landingpage':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Landing Page module.', array()) . '</p>';
     // Help for the localgov_feature_landingpage module page.
     case 'admin/localgov/modules/localgov/localgov_feature_landingpage':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Landing Page module tasks page.', array()) . '</p>';
     // Help for the localgov_feature_landingpage module admin page.
     case 'admin/localgov/modules/localgov/localgov_feature_landingpage/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Landing Page module administrative tasks page.', array()) . '</p>';
   }
 }
