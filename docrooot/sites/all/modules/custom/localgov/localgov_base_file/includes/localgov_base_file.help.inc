<?php
/**
 * @file
 * localgov_base_file.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_file
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_file_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_file module.
     case 'admin/help#localgov_base_file':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: File module.', array()) . '</p>';
     // Help for the localgov_base_file module page.
     case 'admin/localgov/modules/localgov/localgov_base_file':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: File module tasks page.', array()) . '</p>';
     // Help for the localgov_base_file module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_file/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: File module administrative tasks page.', array()) . '</p>';
   }
 }
