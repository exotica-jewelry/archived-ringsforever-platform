<?php
/**
 * @file
 * trf_site_paths.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_paths_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.pathauto_taxonomy_term_brand_pattern.value"] = 'titanium-rings/[term:name]';
  $overrides["variable.pathauto_taxonomy_term_category_pattern.value"] = '[term:name]';
  $overrides["variable.pathauto_taxonomy_term_collection_pattern.value"] = 'titanium-rings/collections/[term:name]';
  $overrides["variable.pathauto_taxonomy_term_color_pattern.value"] = 'titanium-rings/colors/[term:name]';

 return $overrides;
}
