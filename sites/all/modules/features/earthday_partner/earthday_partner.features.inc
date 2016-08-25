<?php
/**
 * @file
 * earthday_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earthday_partner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earthday_partner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function earthday_partner_image_default_styles() {
  $styles = array();

  // Exported image style: earthday-partner.
  $styles['earthday-partner'] = array(
    'label' => 'earthday-partner',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 100,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function earthday_partner_node_info() {
  $items = array(
    'earthday_partner' => array(
      'name' => t('地球日夥伴'),
      'base' => 'node_content',
      'description' => t('贊助廠商。會在頁尾持續出現。'),
      'has_title' => '1',
      'title_label' => t('名稱'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
