<?php
/**
 * @file
 * bracknell_feature_twitter.help.inc
 * TODO: Add file description
 *
 * @package   bracknell_feature_twitter
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function bracknell_feature_twitter_help($path, $arg) {
   switch ($path) {
     // Help text for the bracknell_feature_twitter module.
     case 'admin/help#bracknell_feature_twitter':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Twitter module.', array()) . '</p>';
     // Help for the bracknell_feature_twitter module page.
     case 'admin/localgov/modules/bracknell/bracknell_feature_twitter':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Twitter module tasks page.', array()) . '</p>';
     // Help for the bracknell_feature_twitter module admin page.
     case 'admin/localgov/modules/bracknell/bracknell_feature_twitter/admin':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Twitter module administrative tasks page.', array()) . '</p>';
   }
 }
