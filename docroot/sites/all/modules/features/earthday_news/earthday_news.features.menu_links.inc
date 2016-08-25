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

  // Exported menu link: main-menu_---menu-position-rule:menu-position/11.
  $menu_links['main-menu_---menu-position-rule:menu-position/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/11',
    'router_path' => 'menu-position/%',
    'link_title' => '分類: 世界新聞台: 活動報導 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_---menu-position-rule:menu-position/11',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_:taxonomy/term/35',
  );
  // Exported menu link: main-menu_---menu-position-rule:menu-position/5.
  $menu_links['main-menu_---menu-position-rule:menu-position/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/5',
    'router_path' => 'menu-position/%',
    'link_title' => '分類: 世界新聞台: 台灣 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_---menu-position-rule:menu-position/5',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
    'parent_identifier' => 'main-menu_:taxonomy/term/34',
  );
  // Exported menu link: main-menu_:taxonomy/term/34.
  $menu_links['main-menu_:taxonomy/term/34'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/34',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '台灣',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:taxonomy/term/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:taxonomy/term/3',
  );
  // Exported menu link: main-menu_:taxonomy/term/35.
  $menu_links['main-menu_:taxonomy/term/35'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/35',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '生活副刊',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_:taxonomy/term/35',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:taxonomy/term/3',
  );
  // Exported menu link: main-menu_:taxonomy/term/37.
  $menu_links['main-menu_:taxonomy/term/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/37',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '活動相簿',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:taxonomy/term/37',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_:taxonomy/term/3',
  );
  // Exported menu link: navigation_:node/add/earthday-news.
  $menu_links['navigation_:node/add/earthday-news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/earthday-news',
    'router_path' => 'node/add/earthday-news',
    'link_title' => '世界新聞台',
    'options' => array(
      'attributes' => array(
        'title' => '持續更新的內容，包括「新聞」、「專欄」、「活動報導」。會在首頁露出更新內容，並在「地球新聞台」全部列出。',
      ),
      'identifier' => 'navigation_:node/add/earthday-news',
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
  t('世界新聞台');
  t('分類: 世界新聞台: 台灣 (menu position rule)');
  t('分類: 世界新聞台: 活動報導 (menu position rule)');
  t('台灣');
  t('活動相簿');
  t('生活副刊');

  return $menu_links;
}
