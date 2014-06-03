<?php
/**
 * @file
 * earthday_column.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_column_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earthday_column_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function earthday_column_node_info() {
  $items = array(
    'earthday_column' => array(
      'name' => t('積綠專欄'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
