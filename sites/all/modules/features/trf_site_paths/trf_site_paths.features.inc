<?php
/**
 * @file
 * trf_site_paths.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_paths_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_site_paths_strongarm_alter(&$data) {
  if (isset($data['pathauto_taxonomy_term_brand_pattern'])) {
    $data['pathauto_taxonomy_term_brand_pattern']->value = 'titanium-rings/keywords/[term:name]'; /* WAS: 'brand/[term:name]' */
  }
  if (isset($data['pathauto_taxonomy_term_category_pattern'])) {
    $data['pathauto_taxonomy_term_category_pattern']->value = '[term:name]'; /* WAS: 'category/[term:name]' */
  }
  if (isset($data['pathauto_taxonomy_term_collection_pattern'])) {
    $data['pathauto_taxonomy_term_collection_pattern']->value = 'titanium-rings/collections/[term:name]'; /* WAS: 'collection/[term:name]' */
  }
  if (isset($data['pathauto_taxonomy_term_color_pattern'])) {
    $data['pathauto_taxonomy_term_color_pattern']->value = 'titanium-rings/colors/[term:name]'; /* WAS: 'color/[term:name]' */
  }
}
