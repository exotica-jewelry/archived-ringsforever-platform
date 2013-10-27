<?php
/**
 * @file
 * ringsforever_migrate.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ringsforever_migrate_taxonomy_default_vocabularies() {
  return array(
    'featuring' => array(
      'name' => 'Featuring',
      'machine_name' => 'featuring',
      'description' => 'Most notable features, such as inlays, gemstones, color, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'elements' => array(
      'name' => 'Elements',
      'machine_name' => 'elements',
      'description' => 'Individual elements or tags for an item, such as gold, diamonds, blue diamonds, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'collection' => array(
      'name' => 'Collection',
      'machine_name' => 'collection',
      'description' => 'Thematic collection, such as mens and womens rings, promise rings, and commitment rings.',
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
