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
      'name' => 'Elements',
      'machine_name' => 'elements',
      'description' => 'Individual elements or tags for an item, such as gold, diamonds, blue diamonds, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'featuring' => array(
      'name' => 'Featuring',
      'machine_name' => 'featuring',
      'description' => 'Most notable features, such as inlays, gemstones, color, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'width' => array(
      'name' => 'Width',
      'machine_name' => 'width',
      'description' => 'Ring widths, in millimeters.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
