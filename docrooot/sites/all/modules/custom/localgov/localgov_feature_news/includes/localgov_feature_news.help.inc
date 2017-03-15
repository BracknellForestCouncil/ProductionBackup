<?php
/**
 * @file
 * localgov_feature_news.help.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_news
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Implements hook_help().
  */
 function localgov_feature_news_help($path, $arg) {
   switch ($path) {
     // Help text for the localgov_feature_news module.
     case 'admin/help#localgov_feature_news':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: News module.', array()) . '</p>';
     // Help for the localgov_feature_news module page.
     case 'admin/localgov/modules/localgov/localgov_feature_news':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: News module tasks page.', array()) . '</p>';
     // Help for the localgov_feature_news module admin page.
     case 'admin/localgov/modules/localgov/localgov_feature_news/admin':
       return '<p>' . t('TODO: Add help text for the LocalGov Feature: News module administrative tasks page.', array()) . '</p>';
   }
 }
