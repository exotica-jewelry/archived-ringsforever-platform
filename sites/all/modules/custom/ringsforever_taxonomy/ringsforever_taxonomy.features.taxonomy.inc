<?php
/**
 * @file
 * test.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function test_taxonomy_default_vocabularies() {
  return array(
    'featuring' => array(
      'name' => 'Featuring',
      'machine_name' => 'featuring',
      'description' => 'Most notable features, such as inlays, gemstones, color, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
