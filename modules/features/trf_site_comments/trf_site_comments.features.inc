<?php
/**
 * @file
 * trf_site_comments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_comments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_site_comments_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__blog_post'])) {
    $data['field_bundle_settings_node__blog_post']->value['extra_fields']['display']['disqus'] = array(
      'teaser' => array(
        'weight' => 1002,
        'visible' => FALSE,
      ),
      'default' => array(
        'weight' => 1002,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
  }
}
