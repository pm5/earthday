<?php
/**
 * @file
 * earthday_partner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function earthday_partner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function earthday_partner_image_default_styles() {
  $styles = array();

  // Exported image style: earthday-partner.
  $styles['earthday-partner'] = array(
    'name' => 'earthday-partner',
    'label' => 'earthday-partner',
    'effects' => array(
      2 => array(
        'label' => '縮放和裁剪',
        'help' => '比例縮放將會保持原始圖片的寬高比，然後裁切最大邊。這通常對建立不拉伸的完美的方形縮略圖是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '200',
        ),
        'weight' => '1',
      ),
      6 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => '1382',
          'upscale' => '',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
