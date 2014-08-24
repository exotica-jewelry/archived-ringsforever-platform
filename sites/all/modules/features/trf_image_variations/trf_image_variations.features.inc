<?php
/**
 * @file
 * trf_image_variations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_image_variations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
