<?php
/**
 * @file
 * localgov_feature_news.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_feature_news
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_feature_news_permission() {
  $items = array();

  $items['access localgov_feature_news'] = array(
    'title' => t('Access LocalGov Feature: News'),
    'description' => t('Access functionality provided by LocalGov Feature: News.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_feature_news'] = array(
    'title' => t('Administer LocalGov Feature: News'),
    'description' => t('Perform administration tasks for LocalGov Feature: News.'),
    'restrict access' => FALSE,
  );

  return $items;
}
