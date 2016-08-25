<?php
/**
 * @file
 * earthday_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function earthday_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-links:http://www.e-info.org.tw/
  $menu_links['menu-links:http://www.e-info.org.tw/'] = array(
    'menu_name' => 'menu-links',
    'link_path' => 'http://www.e-info.org.tw/',
    'router_path' => '',
    'link_title' => 'TEIA 台灣環境資訊協會',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-links:https://e-info.neticrm.tw/civicrm/profile/create?gid=56&reset=1
  $menu_links['menu-links:https://e-info.neticrm.tw/civicrm/profile/create?gid=56&reset=1'] = array(
    'menu_name' => 'menu-links',
    'link_path' => 'https://e-info.neticrm.tw/civicrm/profile/create?gid=56&reset=1',
    'router_path' => '',
    'link_title' => 'Newsletter 電子報',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-links:https://www.facebook.com/EarthDayTW
  $menu_links['menu-links:https://www.facebook.com/EarthDayTW'] = array(
    'menu_name' => 'menu-links',
    'link_path' => 'https://www.facebook.com/EarthDayTW',
    'router_path' => '',
    'link_title' => 'Facebook 臉書',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook 臉書');
  t('Newsletter 電子報');
  t('TEIA 台灣環境資訊協會');


  return $menu_links;
}
