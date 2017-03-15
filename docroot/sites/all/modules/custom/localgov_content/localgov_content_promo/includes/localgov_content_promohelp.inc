<?php
/**
 * @file
 * localgov_content_promo.help.inc
 * TODO: Add file description
 *
 * @package   localgov_content_promo
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_content_promo_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_content_promo module.
     case 'admin/help#localgov_content_promo':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Promo module.', array()) . '</p>';
     // Help for the localgov_content_promo module page.
     case 'admin/localgov/modules/localgov_content/localgov_content_promo':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Promo module tasks page.', array()) . '</p>';
     // Help for the localgov_content_promo module admin page.
     case 'admin/localgov/modules/localgov_content/localgov_content_promo/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Content: Promo module administrative tasks page.', array()) . '</p>';
   }
 }
