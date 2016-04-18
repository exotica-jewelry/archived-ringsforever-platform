<?php
/**
 * @file
 * trf_ring_type.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_ring_type_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.weight"] = -42;
  $overrides["file_display.image__default__file_field_image.weight"] = -44;

 return $overrides;
}
