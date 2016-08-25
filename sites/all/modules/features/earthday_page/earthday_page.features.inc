<?php
/**
 * @file
 * earthday_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function earthday_page_node_info() {
  $items = array(
    'earthday_page' => array(
      'name' => t('地球日頁面'),
      'base' => 'node_content',
      'description' => t('所有靜態頁面。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
