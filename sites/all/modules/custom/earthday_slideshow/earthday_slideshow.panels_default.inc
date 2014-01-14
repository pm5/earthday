<?php
/**
 * @file
 * earthday_slideshow.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function earthday_slideshow_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'highlighted';
  $mini->category = 'Earthday TW';
  $mini->admin_title = '首頁輪播';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'earthday_slideshow-earthday_slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_category_tid' => '',
      ),
      'items_per_page' => '8',
      'fields_override' => array(
        'path' => 0,
        'field_link' => 0,
        'field_image' => 1,
        'title_field' => 0,
        'body' => 0,
        'nothing' => 1,
      ),
      'override_title' => 1,
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
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'earthday_slideshow-earthday_slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'join
join/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_category_tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'earthday_slideshow-earthday_slideshow_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'organize',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_category_tid' => '2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $export['highlighted'] = $mini;

  return $export;
}
