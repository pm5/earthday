<?php
/**
 * @file
 * earthday_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function earthday_frontpage_default_page_manager_pages() {
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
    'type' => 'normal',
    'title' => '首頁',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'frontpage',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term-slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '8',
      'path' => 'taxonomy/term/%',
      'fields_override' => array(
        'field_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'promote' => '1',
      ),
      'override_title' => 0,
      'override_title_text' => 'foobar',
      'arguments' => array(
        'term_node_tid_depth' => '5',
        'term_node_tid_depth_modifier' => '',
      ),
      'link_to_view' => 0,
      'more_link' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'earthday-donate',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'earthday_join-slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '6',
      'fields_override' => array(
        'field_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'promote' => 'All',
      ),
      'override_title' => 0,
      'override_title_text' => 'barbaz',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'earthday-event',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'earthday_shop-slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '8',
      'offset' => '0',
      'override_title' => 0,
      'override_title_text' => 'bazfoo',
      'fields_override' => array(
        'field_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'promote' => 'All',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'earthday-shop',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['right'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term-4_stories_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'path' => 'taxonomy/term/%',
      'arguments' => array(
        'term_node_tid_depth' => '3',
      ),
      'fields_override' => array(
        'field_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'promote' => '0',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'earthday-newsroom',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['top'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
