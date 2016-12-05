<?php
/**
 * @file
 * trf_site_settings.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_settings_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: environment_indicator_environment
  $overrides["environment_indicator_environment.default_environment.disabled"] = FALSE;
  $overrides["environment_indicator_environment.staging_platform.regexurl"] = 'www---staging-5em2ouy-44icmnpta2qxy.us.platform.sh/';

 return $overrides;
}
