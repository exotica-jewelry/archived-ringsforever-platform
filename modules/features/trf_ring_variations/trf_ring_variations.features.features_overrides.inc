<?php
/**
 * @file
 * trf_ring_variations.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_ring_variations_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: commerce_autosku_patterns
  $overrides["commerce_autosku_patterns.rings.advanced|case"] = 'original';
  $overrides["commerce_autosku_patterns.rings.advanced|hide_sku"] = 1;
  $overrides["commerce_autosku_patterns.rings.advanced|update_existing"] = 1;
  $overrides["commerce_autosku_patterns.rings.pattern"] = '[commerce-product:field-product-node:0:field-sku-master]-[commerce-product:field-ring-width:name]';

 return $overrides;
}
