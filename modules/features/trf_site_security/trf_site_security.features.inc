<?php
/**
 * @file
 * trf_site_security.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_security_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function trf_site_security_user_default_permissions_alter(&$data) {
  if (isset($data['use PHP for tracking visibility'])) {
    unset($data['use PHP for tracking visibility']['roles']['administrator']);
  }
}
