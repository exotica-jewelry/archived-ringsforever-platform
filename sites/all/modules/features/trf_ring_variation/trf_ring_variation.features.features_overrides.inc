<?php
/**
 * @file
 * trf_ring_variation.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_ring_variation_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: commerce_autosku_patterns
  $overrides["commerce_autosku_patterns.rings.advanced"] = '';
  $overrides["commerce_autosku_patterns.rings.pattern"] = '';

 return $overrides;
}
