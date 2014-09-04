<?php
/**
 * @file
 * earthday_newsletter.features.inc
 */

/**
 * Implements hook_views_api().
 */
function earthday_newsletter_views_api() {
  return array("version" => "3.0");
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
  return $items;
}
