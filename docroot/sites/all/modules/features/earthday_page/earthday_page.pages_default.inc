<?php
/**
 * @file
 * earthday_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function earthday_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Panels',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => '分類項目 from 內容 (on 內容: 分類 [field_category])',
        'keyword' => 'category',
        'name' => 'entity_from_field:field_category-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'earthday_news' => 'earthday_news',
              'earthday_page' => 'earthday_page',
              'earthday_partner' => 'earthday_partner',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5c29af0d-eead-4e1b-810f-abe1346f80a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c054739c-c9f1-4253-b109-6bccfef0134d';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c054739c-c9f1-4253-b109-6bccfef0134d';
    $display->content['new-c054739c-c9f1-4253-b109-6bccfef0134d'] = $pane;
    $display->panels['left'][0] = 'new-c054739c-c9f1-4253-b109-6bccfef0134d';
    $pane = new stdClass();
    $pane->pid = 'new-a897a5b1-fb4d-43fc-b924-1969179afb9c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term-related_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
      'offset' => '0',
      'path' => 'taxonomy/term/%category:tid',
      'fields_override' => array(
        'field_image' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'exposed' => array(
        'promote' => 'All',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a897a5b1-fb4d-43fc-b924-1969179afb9c';
    $display->content['new-a897a5b1-fb4d-43fc-b924-1969179afb9c'] = $pane;
    $display->panels['right'][0] = 'new-a897a5b1-fb4d-43fc-b924-1969179afb9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c054739c-c9f1-4253-b109-6bccfef0134d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Panels',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'grid-3-col',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
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
  $display->title = '%term:name';
  $display->uuid = 'f90b5979-5f42-4e97-8660-3b032d437cdc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec1c74c1-bf80-4c37-8a3d-c18a3432a728';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term-pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'items_per_page' => '6',
      'offset' => '0',
      'path' => 'taxonomy/term/%',
      'arguments' => array(
        'term_node_tid_depth' => '%term:tid',
        'term_node_tid_depth_modifier' => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'link_to_view' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec1c74c1-bf80-4c37-8a3d-c18a3432a728';
    $display->content['new-ec1c74c1-bf80-4c37-8a3d-c18a3432a728'] = $pane;
    $display->panels['middle'][0] = 'new-ec1c74c1-bf80-4c37-8a3d-c18a3432a728';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
