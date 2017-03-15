<?php
/**
 * @file
 * localgov_base_weight.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_weight
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_weight_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_weight module.
     case 'admin/help#localgov_base_weight':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Weight module.', array()) . '</p>';
     // Help for the localgov_base_weight module page.
     case 'admin/localgov/modules/localgov/localgov_base_weight':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Weight module tasks page.', array()) . '</p>';
     // Help for the localgov_base_weight module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_weight/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Weight module administrative tasks page.', array()) . '</p>';
   }
 }
