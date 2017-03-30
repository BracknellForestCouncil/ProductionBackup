<?php
/**
 * @file
 * bracknell_feature_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bracknell_feature_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_header';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~search' => '~search',
        '~search/*' => '~search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_page-page',
          'region' => 'search',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['search_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_page-page',
          'region' => 'content',
          'weight' => '-19',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['search_page'] = $context;

  return $export;
}
