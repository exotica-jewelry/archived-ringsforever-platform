<?php
/**
 * @file
 * trf_site_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_site_seo_strongarm_alter(&$data) {
  if (isset($data['search404_ignore_query'])) {
    $data['search404_ignore_query']->value = 'gif jpg jpeg bmp png pdf css js'; /* WAS: 'gif jpg jpeg bmp png pdf' */
  }
}
