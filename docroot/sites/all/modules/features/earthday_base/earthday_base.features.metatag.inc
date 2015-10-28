<?php
/**
 * @file
 * earthday_base.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function earthday_base_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.title' => array(
        'value' => '[node:title]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:author]',
      ),
      'dcterms.date' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.language' => array(
        'value' => '[node:language]',
      ),
      'og:title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:locale' => array(
        'value' => 'zh_TW',
      ),
      'article:author' => array(
        'value' => 'https://www.facebook.com/EarthDayTW/',
      ),
      'article:publisher' => array(
        'value' => 'https://www.facebook.com/EarthDayTW/',
      ),
    ),
  );

  return $config;
}
