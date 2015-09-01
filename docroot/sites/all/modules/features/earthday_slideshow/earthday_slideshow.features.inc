<?php
/**
 * @file
 * earthday_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earthday_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function earthday_slideshow_node_info() {
  $items = array(
    'earthday_slideshow' => array(
      'name' => t('地球日輪播'),
      'base' => 'node_content',
      'description' => t('大圖輪播，包括「首頁」與「台北地球日」的輪播。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
