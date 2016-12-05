<?php
/**
 * @file
 * trf_site_performance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_performance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_site_performance_strongarm_alter(&$data) {
  if (isset($data['advagg_browser_dns_prefetch'])) {
    unset($data['advagg_browser_dns_prefetch']);
  }
  if (isset($data['advagg_bundler_grouping_logic'])) {
    $data['advagg_bundler_grouping_logic']->value = 1; /* WAS: 0 */
  }
  if (isset($data['advagg_bundler_max_css'])) {
    $data['advagg_bundler_max_css']->value = 2; /* WAS: 4 */
  }
  if (isset($data['advagg_bundler_max_js'])) {
    $data['advagg_bundler_max_js']->value = 5; /* WAS: 4 */
  }
  if (isset($data['advagg_combine_css_media'])) {
    $data['advagg_combine_css_media']->value = 1; /* WAS: 0 */
  }
  if (isset($data['advagg_font_cookie'])) {
    $data['advagg_font_cookie']->value = 1; /* WAS: 0 */
  }
  if (isset($data['advagg_font_fontfaceobserver'])) {
    $data['advagg_font_fontfaceobserver']->value = 2; /* WAS: 0 */
  }
  if (isset($data['advagg_font_no_fout'])) {
    $data['advagg_font_no_fout']->value = 1; /* WAS: 0 */
  }
  if (isset($data['advagg_mod_css_defer_rel_preload'])) {
    unset($data['advagg_mod_css_defer_rel_preload']);
  }
  if (isset($data['advagg_mod_css_defer_visibility'])) {
    $data['advagg_mod_css_defer_visibility']->value = 0; /* WAS: 1 */
  }
  if (isset($data['advagg_mod_js_get_external_dns'])) {
    unset($data['advagg_mod_js_get_external_dns']);
  }
  if (isset($data['advagg_mod_js_preprocess'])) {
    $data['advagg_mod_js_preprocess']->value = 1; /* WAS: 0 */
  }
  if (isset($data['advagg_mod_js_remove_unused'])) {
    $data['advagg_mod_js_remove_unused']->value = 1; /* WAS: 0 */
  }
}
