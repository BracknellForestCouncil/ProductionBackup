<?php
/**
 * @file
 * localgov_base_content.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_content
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_content_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_content module.
     case 'admin/help#localgov_base_content':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Content module.', array()) . '</p>';
     // Help for the localgov_base_content module page.
     case 'admin/localgov/modules/localgov/localgov_base_content':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Content module tasks page.', array()) . '</p>';
     // Help for the localgov_base_content module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_content/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Content module administrative tasks page.', array()) . '</p>';
   }
 }
