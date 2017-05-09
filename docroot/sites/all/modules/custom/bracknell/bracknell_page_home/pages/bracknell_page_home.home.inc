<?php
/**
 * @file
 * bracknell_page_home.node.inc
 * TODO: Add file description
 *
 * @package   bracknell_page_home
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'home';
$page->task = 'page';
$page->admin_title = 'Home';
$page->admin_description = '';
$page->path = 'home';
$page->access = array();
$page->menu = array(
  'type' => 'none',
  'title' => '',
  'weight' => '0',
  'name' => 'navigation',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'weight' => 0,
    'name' => 'navigation',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_home__panel_context_000a95b1-d38f-4fa1-9488-55548929682e';
$handler->task = 'page';
$handler->subtask = 'home';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Home page',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
);
$display = new panels_display();
$display->layout = 'home';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'feature_one' => NULL,
    'feature_two' => NULL,
    'block_one' => NULL,
    'block_two' => NULL,
    'navigation' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Home';
$display->uuid = '12a61a01-11e5-464b-91c0-727227f7d14b';
$display->storage_type = 'page_manager';
$display->storage_id = 'page_home__panel_context_000a95b1-d38f-4fa1-9488-55548929682e';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-14368bbe-a3da-49fc-bd82-b136ff113ded';
$pane->panel = 'navigation';
$pane->type = 'block';
$pane->subtype = 'localgov_base_navigation-navigation_homepage';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
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
$pane->uuid = '14368bbe-a3da-49fc-bd82-b136ff113ded';
$display->content['new-14368bbe-a3da-49fc-bd82-b136ff113ded'] = $pane;
$display->panels['navigation'][0] = 'new-14368bbe-a3da-49fc-bd82-b136ff113ded';
$pane = new stdClass();
$pane->pid = 'new-e1a27ef9-c360-4732-a8a1-f30f31cb8466';
$pane->panel = 'feature_one';
$pane->type = 'views_panes';
$pane->subtype = 'home_feature-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'e1a27ef9-c360-4732-a8a1-f30f31cb8466';
$display->content['new-e1a27ef9-c360-4732-a8a1-f30f31cb8466'] = $pane;
$display->panels['feature_one'][0] = 'new-e1a27ef9-c360-4732-a8a1-f30f31cb8466';
$pane = new stdClass();
$pane->pid = 'new-8f77cf5b-9223-4620-9f4f-290c6dd4ab0e';
$pane->panel = 'feature_two';
$pane->type = 'views_panes';
$pane->subtype = 'home_keyfact-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '8f77cf5b-9223-4620-9f4f-290c6dd4ab0e';
$display->content['new-8f77cf5b-9223-4620-9f4f-290c6dd4ab0e'] = $pane;
$display->panels['feature_two'][0] = 'new-8f77cf5b-9223-4620-9f4f-290c6dd4ab0e';
$pane = new stdClass();
$pane->pid = 'new-1c6f955e-3835-41f0-a2f5-feee162c3d43';
$pane->panel = 'block_one';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => 'News link',
  'title' => '',
  'title_heading' => 'h2',
  'body' => '<p>
  Bracknell Forest Council <span class="lge">News</span> from around the borough</p>

<p>
  <a class="btn" href="/news">Read news</a></p>
',
  'format' => 'html_full',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'news-link',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '1c6f955e-3835-41f0-a2f5-feee162c3d43';
$display->content['new-1c6f955e-3835-41f0-a2f5-feee162c3d43'] = $pane;
$display->panels['block_one'][0] = 'new-1c6f955e-3835-41f0-a2f5-feee162c3d43';
$pane = new stdClass();
$pane->pid = 'new-863a66fe-018f-40fb-a1bf-007b999c6167';
$pane->panel = 'block_two';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => 'Events link',
  'title' => '',
  'title_heading' => 'h2',
  'body' => '<p>
  Find <span class="lge">Events</span> from around the area</p>

<p>
  <a class="btn" href="https://bracknellforest.fsd.org.uk/kb5/bracknell/directory/whats_on.page">View events</a></p>
',
  'format' => 'html_full',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'events-link',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '863a66fe-018f-40fb-a1bf-007b999c6167';
$display->content['new-863a66fe-018f-40fb-a1bf-007b999c6167'] = $pane;
$display->panels['block_two'][0] = 'new-863a66fe-018f-40fb-a1bf-007b999c6167';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = 'new-1c6f955e-3835-41f0-a2f5-feee162c3d43';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
