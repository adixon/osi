<?php
/**
 * @file
 * osi.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function osi_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => 'Category',
      'machine_name' => 'category',
      'description' => 'Categorization of standards into primary and subcategories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'en',
      'i18n_mode' => 2,
    ),
    'standard' => array(
      'name' => 'Standard',
      'machine_name' => 'standard',
      'description' => 'Grouping of Self-Assessment Indicators by Standard',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'en',
      'i18n_mode' => 2,
    ),
  );
}
