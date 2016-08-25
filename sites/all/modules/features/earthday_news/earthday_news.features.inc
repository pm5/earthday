<?php
/**
 * @file
 * earthday_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function earthday_news_node_info() {
  $items = array(
    'earthday_news' => array(
      'name' => t('世界新聞台'),
      'base' => 'node_content',
      'description' => t('持續更新的內容，包括「新聞」、「專欄」、「活動報導」。會在首頁露出更新內容，並在「地球新聞台」全部列出。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
