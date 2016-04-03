<?php
/**
 * @file
 * trf_ring_variation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_ring_variation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_commerce_product_rings';
  $strongarm->value = '1';
  $export['auto_entitylabel_commerce_product_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_commerce_product_rings';
  $strongarm->value = '[commerce-product:field-product-node:0:field-ring-name]-[commerce-product:field-ring-width:name]';
  $export['auto_entitylabel_pattern_commerce_product_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_commerce_product_rings';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_commerce_product_rings'] = $strongarm;

  return $export;
}
