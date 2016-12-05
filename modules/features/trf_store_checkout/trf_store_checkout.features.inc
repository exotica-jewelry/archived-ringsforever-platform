<?php
/**
 * @file
 * trf_store_checkout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_store_checkout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
