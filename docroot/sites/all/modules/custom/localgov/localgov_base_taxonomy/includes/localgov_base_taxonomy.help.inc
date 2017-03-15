<?php
/**
 * @file
 * localgov_base_taxonomy.help.inc
 * TODO: Add file description
 *
 * @package   localgov_base_taxonomy
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_base_taxonomy_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_base_taxonomy module.
     case 'admin/help#localgov_base_taxonomy':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Taxonomy module.', array()) . '</p>';
     // Help for the localgov_base_taxonomy module page.
     case 'admin/localgov/modules/localgov/localgov_base_taxonomy':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Taxonomy module tasks page.', array()) . '</p>';
     // Help for the localgov_base_taxonomy module admin page.
     case 'admin/localgov/modules/localgov/localgov_base_taxonomy/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Base: Taxonomy module administrative tasks page.', array()) . '</p>';
   }
 }
