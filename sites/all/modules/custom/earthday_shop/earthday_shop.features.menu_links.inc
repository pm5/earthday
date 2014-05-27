<?php
/**
 * @file
 * earthday_shop.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function earthday_shop_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:shop
  $menu_links['main-menu:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => '好康情報站',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: navigation:node/add/earthday-shop
  $menu_links['navigation:node/add/earthday-shop'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/earthday-shop',
    'router_path' => 'node/add/earthday-shop',
    'link_title' => '好康情報站',
    'options' => array(
      'attributes' => array(
        'title' => '各單位廠商提供的優惠活動。會在首頁輪播，並且在「地球日好康」頁全部列出。',
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
  t('好康情報站');


  return $menu_links;
}
