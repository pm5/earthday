<?php
/**
 * @file
 * earthday_join.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_join_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earthday_join_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function earthday_join_node_info() {
  $items = array(
    'earthday_join' => array(
      'name' => t('地球日活動'),
      'base' => 'node_content',
      'description' => t('地球日相關活動資訊。會在首頁輪播，並在「參與地球日」全部列出。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
