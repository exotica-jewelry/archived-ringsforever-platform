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

 return $overrides;
}
