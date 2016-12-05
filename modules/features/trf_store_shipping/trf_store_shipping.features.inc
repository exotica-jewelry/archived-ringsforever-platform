<?php
/**
 * @file
 * trf_store_shipping.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function trf_store_shipping_commerce_flat_rate_default_services() {
  $items = array(
    'overnight_shipping' => array(
      'name' => 'overnight_shipping',
      'base' => 'overnight_shipping',
      'display_title' => 'Overnight shipping: Next-day air',
      'description' => 'Shipped via UPS air.',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_overnight_shipping',
      'weight' => 2,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'overnight_shipping_details_form',
        'details_form_validate' => 'overnight_shipping_details_form_validate',
        'details_form_submit' => 'overnight_shipping_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Overnight Shipping',
      'base_rate' => array(
        'amount' => 2500,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'standard_shipping_ca' => array(
      'name' => 'standard_shipping_ca',
      'base' => 'standard_shipping_ca',
      'display_title' => 'Standard Shipping (Canada)',
      'description' => 'Flat-rate shipping to Canadian addresses.',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_standard_shipping_ca',
      'weight' => 3,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'standard_shipping_ca_details_form',
        'details_form_validate' => 'standard_shipping_ca_details_form_validate',
        'details_form_submit' => 'standard_shipping_ca_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Standard Shipping (Canada)',
      'base_rate' => array(
        'amount' => 4000,
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}
