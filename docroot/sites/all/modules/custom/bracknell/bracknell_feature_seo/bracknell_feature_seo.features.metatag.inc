<?php
/**
 * @file
 * bracknell_feature_seo.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function bracknell_feature_seo_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [current-page:pager][site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [current-page:pager]',
      ),
      'description' => array(
        'value' => 'This is the website for Bracknell Forest Council. It includes all of our services, such as bins
and recycling, council tax, benefits, libraries and schools.',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:description' => array(
        'value' => 'This is the website for Bracknell Forest Council. It includes all of our services, such as bins and recycling, council tax, benefits, libraries and schools.',
      ),
      'og:image:url' => array(
        'value' => '/sites/bracknell/BFC_green_landscape_logo.png',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[term:name]',
      ),
    ),
  );

  return $config;
}
