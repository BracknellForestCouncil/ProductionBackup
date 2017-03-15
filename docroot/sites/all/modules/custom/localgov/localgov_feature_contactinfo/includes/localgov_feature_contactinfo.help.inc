<?php
/**
 * @file
 * localgov_feature_contactinfo.help.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_contactinfo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_feature_contactinfo_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_feature_contactinfo module.
     case 'admin/help#localgov_feature_contactinfo':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Contact Information module.', array()) . '</p>';
     // Help for the localgov_feature_contactinfo module page.
     case 'admin/localgov/modules/localgov/localgov_feature_contactinfo':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Contact Information module tasks page.', array()) . '</p>';
     // Help for the localgov_feature_contactinfo module admin page.
     case 'admin/localgov/modules/localgov/localgov_feature_contactinfo/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Contact Information module administrative tasks page.', array()) . '</p>';
   }
 }
