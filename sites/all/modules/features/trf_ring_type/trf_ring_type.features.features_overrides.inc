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
  $overrides["field_instance.node-rings-field_images.settings|alt_field"] = 1;
  $overrides["field_instance.node-rings-field_images.settings|filefield_paths|file_name|value"] = '[node:field-ring-name].[file:ffp-extension-original]';
  $overrides["field_instance.node-rings-field_images.settings|title_field"] = 1;
  $overrides["field_instance.node-rings-field_images.widget|weight"] = 4;

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.weight"] = -42;
  $overrides["file_display.image__default__file_field_image.weight"] = -44;

 return $overrides;
}
