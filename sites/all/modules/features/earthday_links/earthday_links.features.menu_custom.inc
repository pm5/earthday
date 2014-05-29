<?php
/**
 * @file
 * earthday_links.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function earthday_links_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-links.
  $menus['menu-links'] = array(
    'menu_name' => 'menu-links',
    'title' => '連結',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('連結');


  return $menus;
}
