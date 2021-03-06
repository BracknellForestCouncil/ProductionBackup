<?php
/**
 * @file
 * bracknell_feature_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bracknell_feature_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
    "server" : "database_backend",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "basic",
          "guide",
          "guide_section",
          "landing_page",
          "miscellaneous",
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
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
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
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
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
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_tags" : true,
              "field_node_display_title" : true,
              "field_category" : true,
              "field_content" : true,
              "field_promotional_content" : true,
              "search_api_language" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_description:value" : true,
              "field_content:field_paragraph_body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_tags" : true,
              "field_node_display_title" : true,
              "field_category" : true,
              "field_content" : true,
              "field_promotional_content" : true,
              "search_api_language" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_description:value" : true,
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
              "field_node_display_title" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_description:value" : true,
              "field_content:field_paragraph_body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_tags" : true,
              "field_node_display_title" : true,
              "field_content" : true,
              "field_promotional_content" : true,
              "attachments_field_video" : true,
              "attachments_field_paragraph_document" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_description:value" : true,
              "field_content:field_paragraph_body:value" : true
            },
            "file" : "",
            "stopwords" : "a\\r\\nan\\r\\nand\\r\\nare\\r\\nas\\r\\nat\\r\\nbe\\r\\nbut\\r\\nby\\r\\ndid\\r\\netc\\r\\nfor\\r\\nif\\r\\nin\\r\\ninto\\r\\nis\\r\\nit\\r\\nno\\r\\nnot\\r\\nof\\r\\non\\r\\nor\\r\\ns\\r\\nsuch\\r\\nt\\r\\nthat\\r\\nthe\\r\\ntheir\\r\\nthen\\r\\nthere\\r\\nthese\\r\\nthey\\r\\nthose\\r\\nthis\\r\\nthrough\\r\\nto\\r\\nwas\\r\\nwill\\r\\nwith"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : { "body:value" : true }, "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
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
        "field_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_content:field_paragraph_body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_description:value" : { "type" : "text" },
        "field_node_display_title" : { "type" : "text", "boost" : "5.0" },
        "field_promotional_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "sticky" : { "type" : "boolean" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function bracknell_feature_search_default_search_api_server() {
  $items = array();
  $items['database_backend'] = entity_import('search_api_server', '{
    "name" : "Database backend",
    "machine_name" : "database_backend",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "autocomplete" : { "suggest_suffix" : 1, "suggest_words" : 0 },
      "indexes" : { "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_default_node_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_category" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_content" : {
            "table" : "search_api_db_default_node_index_field_content",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_promotional_content" : {
            "table" : "search_api_db_default_node_index_field_promotional_content",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "attachments_field_video" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "attachments_field_paragraph_document" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_description:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_content:field_paragraph_body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_node_display_title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_default_node_index_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "nid" : {
            "table" : "search_api_db_default_node_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_default_node_index",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author_1",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
