<?php
/**
 * @file
 * earthday_slideshow.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function earthday_slideshow_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => '分類',
      'machine_name' => 'categories',
      'description' => '地球日新聞、頁面、輪播的分類架構。',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
