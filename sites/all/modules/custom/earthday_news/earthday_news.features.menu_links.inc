<?php
/**
 * @file
 * earthday_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function earthday_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:menu-position/11
  $menu_links['main-menu:menu-position/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/11',
    'router_path' => 'menu-position/%',
    'link_title' => '分類: 地球日新聞: 活動報導 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/35',
  );
  // Exported menu link: main-menu:menu-position/5
  $menu_links['main-menu:menu-position/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/5',
    'router_path' => 'menu-position/%',
    'link_title' => '分類: 地球日新聞: 新聞 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/34',
  );
  // Exported menu link: main-menu:taxonomy/term/34
  $menu_links['main-menu:taxonomy/term/34'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/34',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '新聞',
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
    'weight' => '-49',
    'parent_path' => 'taxonomy/term/3',
  );
  // Exported menu link: main-menu:taxonomy/term/35
  $menu_links['main-menu:taxonomy/term/35'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/35',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '活動報導',
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
    'weight' => '-48',
    'parent_path' => 'taxonomy/term/3',
  );
  // Exported menu link: main-menu:taxonomy/term/37
  $menu_links['main-menu:taxonomy/term/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/37',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '活動相簿',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'taxonomy/term/3',
  );
  // Exported menu link: navigation:node/add/earthday-news
  $menu_links['navigation:node/add/earthday-news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/earthday-news',
    'router_path' => 'node/add/earthday-news',
    'link_title' => '地球日新聞',
    'options' => array(
      'attributes' => array(
        'title' => '持續更新的內容，包括「新聞」、「專欄」、「活動報導」。會在首頁露出更新內容，並在「地球新聞台」全部列出。',
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
  t('分類: 地球日新聞: 新聞 (menu position rule)');
  t('分類: 地球日新聞: 活動報導 (menu position rule)');
  t('地球日新聞');
  t('新聞');
  t('活動報導');
  t('活動相簿');


  return $menu_links;
}
