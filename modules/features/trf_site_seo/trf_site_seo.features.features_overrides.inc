<?php
/**
 * @file
 * trf_site_seo.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_seo_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.search404_ignore_query.value"] = 'gif jpg jpeg bmp png pdf css js';

 return $overrides;
}
