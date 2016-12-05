<?php
/**
 * @file
 * trf_site_performance.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_performance_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.advagg_browser_dns_prefetch.advagg_browser_dns_prefetch"]["DELETED"] = TRUE;
  $overrides["variable.advagg_bundler_grouping_logic.value"] = 1;
  $overrides["variable.advagg_bundler_max_css.value"] = 2;
  $overrides["variable.advagg_bundler_max_js.value"] = 5;
  $overrides["variable.advagg_combine_css_media.value"] = 1;
  $overrides["variable.advagg_font_cookie.value"] = 1;
  $overrides["variable.advagg_font_fontfaceobserver.value"] = 2;
  $overrides["variable.advagg_font_no_fout.value"] = 1;
  $overrides["variable.advagg_mod_css_defer_rel_preload.advagg_mod_css_defer_rel_preload"]["DELETED"] = TRUE;
  $overrides["variable.advagg_mod_css_defer_visibility.value"] = 0;
  $overrides["variable.advagg_mod_js_get_external_dns.advagg_mod_js_get_external_dns"]["DELETED"] = TRUE;
  $overrides["variable.advagg_mod_js_preprocess.value"] = 1;
  $overrides["variable.advagg_mod_js_remove_unused.value"] = 1;

 return $overrides;
}
