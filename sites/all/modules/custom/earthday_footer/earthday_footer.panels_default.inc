<?php
/**
 * @file
 * earthday_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function earthday_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_content';
  $mini->category = 'Earthday TW';
  $mini->admin_title = '頁尾';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '版權聲明',
      'title' => '',
      'body' => '<div>本站採用<a href="creativecommons.org/licenses/by-nc-nd/3.0/tw/" target="_blank">創用CC姓名標示-非商業性-禁止改作 2.0 台灣</a>授權條款授權<br />所有內容歡迎非營利轉載 商業轉載使用請來信洽詢授權 <a href="http://creativecommons.org/licenses/by-nc-nd/3.0/tw/">(CC BY-NC-ND 2.0 TW)</a></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
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
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '聯絡協會',
      'title' => '',
      'body' => '<div><a href="http://www.e-info.org.tw" target="_blank">台灣環境資訊協會</a> / <a href="http://www.e-info.org.tw" target="_blank">Taiwan Environmental Info Association</a><br />TEL:886-2-29332233 / FAX:886-2-29332120<br />地址：116台北市文山區萬隆街38號（地圖）&nbsp; / <a href="mailto:earthday@e-info.org.tw">earthday@e-info.org.tw</a></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_content'] = $mini;

  return $export;
}
