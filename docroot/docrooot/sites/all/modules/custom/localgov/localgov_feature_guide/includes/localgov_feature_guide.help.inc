<?php
/**
 * @file
 * localgov_feature_guide.help.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_guide
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_feature_guide_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_feature_guide module.
     case 'admin/help#localgov_feature_guide':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Guide module.', array()) . '</p>';
     // Help for the localgov_feature_guide module page.
     case 'admin/localgov/modules/localgov/localgov_feature_guide':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Guide module tasks page.', array()) . '</p>';
     // Help for the localgov_feature_guide module admin page.
     case 'admin/localgov/modules/localgov/localgov_feature_guide/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: Guide module administrative tasks page.', array()) . '</p>';
   }
 }
