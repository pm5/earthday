<?php
/**
 * @file
 * earthday_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earthday_newsletter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function earthday_newsletter_node_info() {
  $items = array(
    'earthday_newsletter' => array(
      'name' => t('地球日電子報'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('主旨'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
