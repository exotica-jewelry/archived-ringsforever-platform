<?php
/**
 * @file
 * trf_ring_taxonomies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function trf_ring_taxonomies_taxonomy_default_vocabularies() {
  return array(
    'elements' => array(
      'name' => 'Elements Old',
      'machine_name' => 'elements',
      'description' => 'Individual elements or tags for an item, such as gold, diamonds, blue diamonds, etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 3,
    ),
    'width' => array(
      'name' => 'Width',
      'machine_name' => 'width',
      'description' => 'Ring widths, in millimeters.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
  );
}
