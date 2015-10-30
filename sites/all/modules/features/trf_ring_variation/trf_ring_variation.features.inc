<?php
/**
 * @file
 * trf_ring_variation.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function trf_ring_variation_commerce_product_default_types() {
  $items = array(
    'rings' => array(
      'type' => 'rings',
      'name' => 'Rings',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_ring_variation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
}
