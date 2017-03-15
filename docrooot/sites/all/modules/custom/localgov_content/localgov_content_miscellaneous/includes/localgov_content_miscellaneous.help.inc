<?php
/**
 * @file
 * localgov_content_miscellaneous.help.inc
 * TODO: Add file description
 *
 * @package   localgov_content_miscellaneous
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_content_miscellaneous_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_content_miscellaneous module.
     case 'admin/help#localgov_content_miscellaneous':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Miscellaneous module.', array()) . '</p>';
     // Help for the localgov_content_miscellaneous module page.
     case 'admin/localgov/modules/localgov_content/localgov_content_miscellaneous':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Miscellaneous module tasks page.', array()) . '</p>';
     // Help for the localgov_content_miscellaneous module admin page.
     case 'admin/localgov/modules/localgov_content/localgov_content_miscellaneous/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Miscellaneous module administrative tasks page.', array()) . '</p>';
   }
 }
