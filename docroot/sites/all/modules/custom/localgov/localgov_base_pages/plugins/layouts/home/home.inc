<?php
/**
 * @file   home.inc
 */

// Plugin definition
$plugin = array(
  'title' => t('Home'),
  'icon' => 'home.png',
  'category' => t('LocalGov Pages'),
  'theme' => 'home',
  'regions' => array(
    'navigation' => t('Navigation'),
    'feature_one' => t('Feature (Primary)'),
    'feature_two' => t('Feature (Secondary)'),
    'block_one' => t('First Block'),
    'block_two' => t('Second Block'),
  ),
);
