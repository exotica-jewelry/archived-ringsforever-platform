<?php
/**
 * @file
 * trf_ck_product_shipping.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_ck_product_shipping_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: commerce_flat_rate_services
  $overrides["commerce_flat_rate_services.free_shipping.description"] = 'Free shipping on all orders.';
  $overrides["commerce_flat_rate_services.free_shipping.display_title"] = 'Free shipping!';

  // Exported overrides for: rules_config
  $overrides["rules_config.commerce_shipping_cart_update_delete.0"] = Array;
  $overrides["rules_config.commerce_shipping_cart_update_delete.1"] = Array;
  $overrides["rules_config.commerce_shipping_method_flat_rate.0"] = Array;
  $overrides["rules_config.commerce_shipping_method_flat_rate.1"] = Array;
  $overrides["rules_config.commerce_shipping_service_express_shipping.0"] = Array;
  $overrides["rules_config.commerce_shipping_service_express_shipping.1"] = Array;
  $overrides["rules_config.commerce_shipping_service_free_shipping.0"] = Array;
  $overrides["rules_config.commerce_shipping_service_free_shipping.1"] = Array;
  $overrides["rules_config.commerce_shipping_service_standard_shipping.0"] = Array;
  $overrides["rules_config.commerce_shipping_service_standard_shipping.1"] = Array;
  $overrides["rules_config.commerce_shipping_service_standard_shipping_ca.0"] = Array;
  $overrides["rules_config.commerce_shipping_service_standard_shipping_ca.1"] = Array;
  $overrides["rules_config.rules_order_status_checkout_shipping.0"] = Array;

 return $overrides;
}
