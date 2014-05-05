<?php
/**
 * @file
 * trf_ck_product_shipping.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services_alter().
 */
function trf_ck_product_shipping_commerce_flat_rate_default_services_alter(&$data) {
  if (isset($data['free_shipping'])) {
    $data['free_shipping']['description'] = 'Free shipping on all orders.';
    $data['free_shipping']['display_title'] = 'Free shipping!';
  }
}
