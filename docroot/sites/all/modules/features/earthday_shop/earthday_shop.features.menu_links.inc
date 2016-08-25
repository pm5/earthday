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

  // Exported menu link: main-menu_:shop.
  $menu_links['main-menu_:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => '好康情報站',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:shop',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: navigation_:node/add/earthday-shop.
  $menu_links['navigation_:node/add/earthday-shop'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/earthday-shop',
    'router_path' => 'node/add/earthday-shop',
    'link_title' => '好康情報站',
    'options' => array(
      'attributes' => array(
        'title' => '各單位廠商提供的優惠活動。會在首頁輪播，並且在「地球日好康」頁全部列出。',
      ),
      'identifier' => 'navigation_:node/add/earthday-shop',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('好康情報站');

  return $menu_links;
}
