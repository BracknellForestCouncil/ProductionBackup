<?php
/**
 * @file
 * bracknell_feature_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bracknell_feature_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function bracknell_feature_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_search_page'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_search_page",
    "name" : "Search Page",
    "index_id" : "default_node_index",
    "suggester_id" : "server",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [] },
      "min_length" : "1",
      "results" : 0,
      "custom" : { "display" : "default" },
      "submit_button_selector" : ":submit",
      "autosubmit" : 1
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function bracknell_feature_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "bracknell_solr_default",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "basic",
          "form",
          "guide_section",
          "miscellaneous",
          "article",
          "promo",
          "promotional_page"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv pdf",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv pdf",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_attachments_paragraphs_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv pdf",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "type" : true,
              "title" : true,
              "promote" : true,
              "sticky" : true,
              "created" : true,
              "changed" : true,
              "author" : true,
              "field_tags" : true,
              "field_contactinfo" : true,
              "field_category" : true,
              "field_content" : true,
              "field_contact_email" : true,
              "field_contact_telephone" : true,
              "search_api_language" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_contactinfo:field_content" : true,
              "field_form_additional:value" : true,
              "field_description:value" : true,
              "field_contact_additional:value" : true,
              "field_contactinfo:field_contact_additional:value" : true,
              "field_content:field_paragraph_body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "type" : true,
              "title" : true,
              "promote" : true,
              "sticky" : true,
              "created" : true,
              "changed" : true,
              "author" : true,
              "field_tags" : true,
              "field_contactinfo" : true,
              "field_category" : true,
              "field_content" : true,
              "field_contact_email" : true,
              "field_contact_telephone" : true,
              "search_api_language" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_contactinfo:field_content" : true,
              "field_form_additional:value" : true,
              "field_description:value" : true,
              "field_contact_additional:value" : true,
              "field_contactinfo:field_contact_additional:value" : true,
              "field_content:field_paragraph_body:value" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_contact_email" : true,
              "field_contact_telephone" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_form_additional:value" : true,
              "field_description:value" : true,
              "field_contact_additional:value" : true,
              "field_contactinfo:field_contact_additional:value" : true,
              "field_content:field_paragraph_body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "500",
            "exclude_fields" : { "title" : "title" },
            "highlight" : "always",
            "highlight_partial" : 1
          }
        }
      },
      "fields" : {
        "attachments_field_paragraph_document" : { "type" : "text" },
        "attachments_field_video" : { "type" : "text" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_contact_additional:value" : { "type" : "text" },
        "field_contact_email" : { "type" : "text" },
        "field_contact_telephone" : { "type" : "text" },
        "field_contactinfo" : { "type" : "integer", "entity_type" : "node" },
        "field_contactinfo:field_contact_additional:value" : { "type" : "text" },
        "field_contactinfo:field_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_content:field_paragraph_body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_description:value" : { "type" : "text" },
        "field_form_additional:value" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
