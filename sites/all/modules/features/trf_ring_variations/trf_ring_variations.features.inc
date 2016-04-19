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

/**
 * Implements hook_default_commerce_autosku_patterns_alter().
 */
function trf_ring_variations_default_commerce_autosku_patterns_alter(&$data) {
  if (isset($data['rings'])) {
    $data['rings']->advanced['case'] = 'original'; /* WAS: '' */
    $data['rings']->advanced['hide_sku'] = 1; /* WAS: '' */
    $data['rings']->advanced['update_existing'] = 1; /* WAS: '' */
    $data['rings']->pattern = '[commerce-product:field-product-node:0:field-sku-master]-[commerce-product:field-ring-width:name]'; /* WAS: '' */
  }
}
