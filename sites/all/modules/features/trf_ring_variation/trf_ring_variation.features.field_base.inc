<?php
/**
 * @file
 * trf_ring_variation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function trf_ring_variation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_title_parent'.
  $field_bases['field_title_parent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_parent',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
