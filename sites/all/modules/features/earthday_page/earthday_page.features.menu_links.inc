<?php
/**
 * @file
 * earthday_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function earthday_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/earthday-page
  $menu_links['navigation:node/add/earthday-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/earthday-page',
    'router_path' => 'node/add/earthday-page',
    'link_title' => '地球日頁面',
    'options' => array(
      'attributes' => array(
        'title' => '所有靜態頁面。',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('地球日頁面');


  return $menu_links;
}
