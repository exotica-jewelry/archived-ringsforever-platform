<?php
/**
 * @file
 * trf_site_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_images_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
