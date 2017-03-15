<?php
/**
* @file
* term_view__panel_context_category_basic.handler.inc
* TODO: Add file description
*
* @package   localgov_feature_landingpage
* @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
* @copyright Copyright (c) 2016, Craig Gardener
* @license   http://opensource.org/licenses/gpl-license.php
*            GNU General Public License, version 2 or later
*/

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'term_view__panel_context_category_basic';
$handler->task = 'term_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 1;
$handler->conf = array(
  'title' => 'Category: Basic',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:taxonomy_term:category:field_category_layout',
        'settings' => array(
          'field_category_layout' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_category_layout_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'term_vocabulary',
        'settings' => array(
          'machine_name' => array(
            'category' => 'category',
          ),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '7c8313d7-f1b3-4890-bc35-079152aff182';
$display->storage_type = 'page_manager';
$display->storage_id = 'term_view__panel_context_category_basic';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-3509342f-9134-4ae0-aa28-06543b527823';
$pane->panel = 'middle';
$pane->type = 'entity_field';
$pane->subtype = 'taxonomy_term:field_category_tasks';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
  'formatter' => 'link_default',
  'delta_limit' => '0',
  'delta_offset' => '0',
  'delta_reversed' => 0,
  'formatter_settings' => array(),
  'context' => 'argument_term_1',
  'override_title' => 0,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '3509342f-9134-4ae0-aa28-06543b527823';
$display->content['new-3509342f-9134-4ae0-aa28-06543b527823'] = $pane;
$display->panels['middle'][0] = 'new-3509342f-9134-4ae0-aa28-06543b527823';
$pane = new stdClass();
$pane->pid = 'new-39d58cfe-a975-49f6-9037-1616f002a467';
$pane->panel = 'middle';
$pane->type = 'views_panes';
$pane->subtype = 'localgov_base_taxonomy_children-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'list-of-subcategories',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$pane->uuid = '39d58cfe-a975-49f6-9037-1616f002a467';
$display->content['new-39d58cfe-a975-49f6-9037-1616f002a467'] = $pane;
$display->panels['middle'][1] = 'new-39d58cfe-a975-49f6-9037-1616f002a467';
$pane = new stdClass();
$pane->pid = 'new-b244dd67-3516-4923-b048-b7e62f4f0521';
$pane->panel = 'middle';
$pane->type = 'views_panes';
$pane->subtype = 'localgov_base_taxonomy_node-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'list-of-pages',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 2;
$pane->locks = array();
$pane->uuid = 'b244dd67-3516-4923-b048-b7e62f4f0521';
$display->content['new-b244dd67-3516-4923-b048-b7e62f4f0521'] = $pane;
$display->panels['middle'][2] = 'new-b244dd67-3516-4923-b048-b7e62f4f0521';
$pane = new stdClass();
$pane->pid = 'new-b29aed02-9e2d-44c0-90c6-f62812a96111';
$pane->panel = 'middle';
$pane->type = 'views_panes';
$pane->subtype = 'localgov_base_taxonomy_node-panel_pane_2';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'list-of-additional-pages',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 3;
$pane->locks = array();
$pane->uuid = 'b29aed02-9e2d-44c0-90c6-f62812a96111';
$display->content['new-b29aed02-9e2d-44c0-90c6-f62812a96111'] = $pane;
$display->panels['middle'][3] = 'new-b29aed02-9e2d-44c0-90c6-f62812a96111';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$handlers['term_view__panel_context_category_basic'] = $handler;
