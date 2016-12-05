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
