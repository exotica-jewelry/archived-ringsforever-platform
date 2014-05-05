<?php
/**
 * @file
 * trf_ck_product_shipping.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services_alter().
 */
function trf_ck_product_shipping2_commerce_flat_rate_default_services_alter(&$data) {
  if (isset($data['free_shipping'])) {
    $data['free_shipping']['description'] = 'Free shipping on all orders.'; /* WAS: 'A free shipping service for an order over a certain amount.' */
    $data['free_shipping']['display_title'] = 'Free shipping!'; /* WAS: 'Free shipping: 5 - 8 business days' */
  }
}
