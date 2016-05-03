<?php
/**
 * @file
 * trf_ring_variations.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function trf_ring_variations_commerce_product_default_types() {
  $items = array(
    'rings' => array(
      'type' => 'rings',
      'name' => 'Rings',
      'description' => '<em>Rings</em> are titanium wedding rings with particular elements and sizes.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_ring_variations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
