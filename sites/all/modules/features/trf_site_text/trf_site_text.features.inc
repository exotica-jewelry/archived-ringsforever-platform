<?php
/**
 * @file
 * trf_site_text.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_text_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}