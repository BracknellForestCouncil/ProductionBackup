<?php
/**
 * @file
 * localgov_content_easyread.help.inc
 * TODO: Add file description
 *
 * @package   localgov_content_easyread
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_content_easyread_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_content_easyread module.
     case 'admin/help#localgov_content_easyread':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: EasyRead module.', array()) . '</p>';
     // Help for the localgov_content_easyread module page.
     case 'admin/localgov/modules/localgov_content/localgov_content_easyread':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: EasyRead module tasks page.', array()) . '</p>';
     // Help for the localgov_content_easyread module admin page.
     case 'admin/localgov/modules/localgov_content/localgov_content_easyread/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: EasyRead module administrative tasks page.', array()) . '</p>';
   }
 }
