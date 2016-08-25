<?php
/**
 * @file
 * earthday_join.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function earthday_join_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:join
  $menu_links['main-menu:join'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'join',
    'router_path' => 'join',
    'link_title' => '地球日活動',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('地球日活動');


  return $menu_links;
}
