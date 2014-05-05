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
    $data['free_shipping']['description'] = 'Free shipping on all orders.'; \/* WAS: 'A free shipping service for an order over a certain amount.' */
    $data['free_shipping']['display_title'] = 'Free shipping!'; \/* WAS: 'Free shipping: 5 - 8 business days' */
  }
}

/**
 * Implements hook_default_rules_configuration_alter().
 */
function trf_ck_product_shipping_default_rules_configuration_alter(&$data) {
  if (isset($data['commerce_shipping_cart_update_delete'])) {
    $data['commerce_shipping_cart_update_delete']->0 = Array; \/* WAS: '' */
    $data['commerce_shipping_cart_update_delete']->1 = Array; \/* WAS: '' */
  }
  if (isset($data['commerce_shipping_method_flat_rate'])) {
    $data['commerce_shipping_method_flat_rate']->0 = Array; \/* WAS: '' */
    $data['commerce_shipping_method_flat_rate']->1 = Array; \/* WAS: '' */
  }
  if (isset($data['commerce_shipping_service_express_shipping'])) {
    $data['commerce_shipping_service_express_shipping']->0 = Array; \/* WAS: '' */
    $data['commerce_shipping_service_express_shipping']->1 = Array; \/* WAS: '' */
  }
  if (isset($data['commerce_shipping_service_free_shipping'])) {
    $data['commerce_shipping_service_free_shipping']->0 = Array; \/* WAS: '' */
    $data['commerce_shipping_service_free_shipping']->1 = Array; \/* WAS: '' */
  }
  if (isset($data['commerce_shipping_service_standard_shipping'])) {
    $data['commerce_shipping_service_standard_shipping']->0 = Array; \/* WAS: '' */
    $data['commerce_shipping_service_standard_shipping']->1 = Array; \/* WAS: '' */
  }
  if (isset($data['commerce_shipping_service_standard_shipping_ca'])) {
    $data['commerce_shipping_service_standard_shipping_ca']->0 = Array; \/* WAS: '' */
    $data['commerce_shipping_service_standard_shipping_ca']->1 = Array; \/* WAS: '' */
  }
  if (isset($data['rules_order_status_checkout_shipping'])) {
    $data['rules_order_status_checkout_shipping']->0 = Array; \/* WAS: '' */
  }
}
