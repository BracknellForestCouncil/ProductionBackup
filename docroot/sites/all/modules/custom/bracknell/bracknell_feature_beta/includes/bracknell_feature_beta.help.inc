<?php
/**
 * @file
 * bracknell_feature_beta.help.inc
 * TODO: Add file description
 *
 * @package   bracknell_feature_beta
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function bracknell_feature_beta_help($path, $arg) {
   switch ($path) {
     // Help text for the bracknell_feature_beta module.
     case 'admin/help#bracknell_feature_beta':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Beta module.', array()) . '</p>';
     // Help for the bracknell_feature_beta module page.
     case 'admin/localgov/modules/bracknell/bracknell_feature_beta':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Beta module tasks page.', array()) . '</p>';
     // Help for the bracknell_feature_beta module admin page.
     case 'admin/localgov/modules/bracknell/bracknell_feature_beta/admin':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Beta module administrative tasks page.', array()) . '</p>';
   }
 }
