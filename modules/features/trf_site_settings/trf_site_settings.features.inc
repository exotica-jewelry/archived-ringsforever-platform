<?php
/**
 * @file
 * trf_site_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_environment_indicator_environment_alter().
 */
function trf_site_settings_default_environment_indicator_environment_alter(&$data) {
  if (isset($data['default_environment'])) {
    $data['default_environment']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['staging_platform'])) {
    $data['staging_platform']->regexurl = 'www---staging-5em2ouy-44icmnpta2qxy.us.platform.sh/'; /* WAS: '^(dev|master)-[\\w.-]+\\.us.platform.sh' */
  }
}
