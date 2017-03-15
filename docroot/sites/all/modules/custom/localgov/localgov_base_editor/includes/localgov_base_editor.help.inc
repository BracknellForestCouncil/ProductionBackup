<?php
/**
 * @file
 * localgov_base_editor.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_editor
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_editor_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_editor module.
     case 'admin/help#localgov_base_editor':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Editor module.', array()) . '</p>';
     // Help for the localgov_base_editor module page.
     case 'admin/localgov/modules/localgov/localgov_base_editor':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Editor module tasks page.', array()) . '</p>';
     // Help for the localgov_base_editor module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_editor/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Editor module administrative tasks page.', array()) . '</p>';
   }
 }
