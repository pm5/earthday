<?php
/**
 * @file
 * earthday_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function earthday_newsletter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'earthday_newsletter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '地球日電子報';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '地球日電子報';
  $handler->display->display_options['css_class'] = 'center';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '更多';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '套用';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重設';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '排序依據';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = '遞增';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = '遞減';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = '每頁的項目數';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- 全部 -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = '位移';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一頁';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 上一頁';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一頁 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '最後一頁 »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_newsletter_link' => 'field_newsletter_link',
    'field_newsletter_number' => 'field_newsletter_number',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_newsletter_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_newsletter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<!-- This region is intentionally left empty. -->';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: 電子報備份連結 */
  $handler->display->display_options['fields']['field_newsletter_link']['id'] = 'field_newsletter_link';
  $handler->display->display_options['fields']['field_newsletter_link']['table'] = 'field_data_field_newsletter_link';
  $handler->display->display_options['fields']['field_newsletter_link']['field'] = 'field_newsletter_link';
  $handler->display->display_options['fields']['field_newsletter_link']['label'] = '';
  $handler->display->display_options['fields']['field_newsletter_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newsletter_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsletter_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsletter_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsletter_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsletter_link']['click_sort_column'] = 'url';
  /* Field: Content: 期數 */
  $handler->display->display_options['fields']['field_newsletter_number']['id'] = 'field_newsletter_number';
  $handler->display->display_options['fields']['field_newsletter_number']['table'] = 'field_data_field_newsletter_number';
  $handler->display->display_options['fields']['field_newsletter_number']['field'] = 'field_newsletter_number';
  $handler->display->display_options['fields']['field_newsletter_number']['label'] = '';
  $handler->display->display_options['fields']['field_newsletter_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_newsletter_number']['alter']['path'] = '[field_newsletter_link]';
  $handler->display->display_options['fields']['field_newsletter_number']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_newsletter_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsletter_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsletter_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsletter_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsletter_number']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_newsletter_link]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: 發報日期 (field_newsletter_date) */
  $handler->display->display_options['sorts']['field_newsletter_date_value']['id'] = 'field_newsletter_date_value';
  $handler->display->display_options['sorts']['field_newsletter_date_value']['table'] = 'field_data_field_newsletter_date';
  $handler->display->display_options['sorts']['field_newsletter_date_value']['field'] = 'field_newsletter_date_value';
  /* Contextual filter: Content: 年份 (field_newsletter_year) */
  $handler->display->display_options['arguments']['field_newsletter_year_value']['id'] = 'field_newsletter_year_value';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['table'] = 'field_data_field_newsletter_year';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['field'] = 'field_newsletter_year_value';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['exception']['title'] = '所有';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_newsletter_year_value']['title'] = '%1 地球日電子報';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_newsletter_year_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_newsletter_year_value']['use_fromto'] = 'no';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'earthday_newsletter' => 'earthday_newsletter',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'newsletter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '地球日電子報';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'pane');
  $handler->display->display_options['pane_category']['name'] = 'Earthday TW';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_newsletter_year_value' => array(
      'type' => 'panel',
      'context' => 'node_add_form.type',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => '內容: 年份 (field_newsletter_year)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['earthday_newsletter'] = array(
    t('Master'),
    t('地球日電子報'),
    t('更多'),
    t('套用'),
    t('重設'),
    t('排序依據'),
    t('遞增'),
    t('遞減'),
    t('每頁的項目數'),
    t('- 全部 -'),
    t('位移'),
    t('« 第一頁'),
    t('‹ 上一頁'),
    t('下一頁 ›'),
    t('最後一頁 »'),
    t('<!-- This region is intentionally left empty. -->'),
    t('所有'),
    t('%1 地球日電子報'),
    t('Page'),
    t('more'),
    t('Content pane'),
    t('Earthday TW'),
  );
  $export['earthday_newsletter'] = $view;

  return $export;
}
