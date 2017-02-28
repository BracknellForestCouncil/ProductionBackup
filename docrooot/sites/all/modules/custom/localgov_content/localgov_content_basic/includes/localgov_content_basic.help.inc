<?php
/**
 * @file
 * localgov_content_basic.help.inc
 * TODO: Add file description
 *
 * @package   localgov_content_basic
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_content_basic_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_content_basic module.
     case 'admin/help#localgov_content_basic':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Basic module.', array()) . '</p>';
     // Help for the localgov_content_basic module page.
     case 'admin/localgov/modules/localgov_content/localgov_content_basic':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Basic module tasks page.', array()) . '</p>';
     // Help for the localgov_content_basic module admin page.
     case 'admin/localgov/modules/localgov_content/localgov_content_basic/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Basic module administrative tasks page.', array()) . '</p>';
   }
 }
