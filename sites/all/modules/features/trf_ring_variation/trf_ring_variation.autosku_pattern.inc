<?php
/**
 * @file
 * trf_ring_variation.autosku_pattern.inc
 */

/**
 * Implements hook_default_commerce_autosku_patterns().
 */
function trf_ring_variation_default_commerce_autosku_patterns() {
  $export = array();

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'rings';
  $commerce_autosku_patterns->pattern = '';
  $commerce_autosku_patterns->advanced = '';
  $export['rings'] = $commerce_autosku_patterns;

  return $export;
}
