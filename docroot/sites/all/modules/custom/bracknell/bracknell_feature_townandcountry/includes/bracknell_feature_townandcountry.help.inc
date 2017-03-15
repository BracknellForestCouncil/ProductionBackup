<?php
/**
 * @file
 * bracknell_feature_townandcountry.help.inc
 * TODO: Add file description
 *
 * @package   bracknell_feature_townandcountry
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function bracknell_feature_townandcountry_help($path, $arg) {
   switch ($path) {
     // Help text for the bracknell_feature_townandcountry module.
     case 'admin/help#bracknell_feature_townandcountry':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Town and Country module.', array()) . '</p>';
     // Help for the bracknell_feature_townandcountry module page.
     case 'admin/localgov/modules/bracknell/bracknell_feature_townandcountry':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Town and Country module tasks page.', array()) . '</p>';
     // Help for the bracknell_feature_townandcountry module admin page.
     case 'admin/localgov/modules/bracknell/bracknell_feature_townandcountry/admin':
       return '<p>' . t('TODO: Add help text for the Bracknell Feature: Town and Country module administrative tasks page.', array()) . '</p>';
   }
 }
