<?php
/**
 * @file
 * trf_site_text.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_text_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function trf_site_text_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['filter_autop']['weight'] = -45; /* WAS: -46 */
    $data['filtered_html']['filters']['filter_htmlcorrector']['weight'] = -44; /* WAS: -45 */
    $data['filtered_html']['filters']['filter_html']['weight'] = -46; /* WAS: -47 */
    $data['filtered_html']['filters']['image_resize_filter'] = array(
      'settings' => array(
        'image_locations' => array(
          'local' => 'local',
          'remote' => 0,
        ),
        'link' => 0,
        'link_class' => '',
        'link_rel' => '',
      ),
      'status' => 1,
      'weight' => -47,
    ); /* WAS: '' */
    $data['filtered_html']['filters']['lazyloader_filter']['weight'] = -43; /* WAS: -44 */
    $data['filtered_html']['filters']['typogrify']['weight'] = -42; /* WAS: -43 */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['filters']['filter_autop']['weight'] = -46; /* WAS: -47 */
    $data['full_html']['filters']['filter_htmlcorrector']['weight'] = -45; /* WAS: -46 */
    $data['full_html']['filters']['image_resize_filter'] = array(
      'settings' => array(
        'image_locations' => array(
          'local' => 'local',
          'remote' => 0,
        ),
        'link' => 0,
        'link_class' => '',
        'link_rel' => '',
      ),
      'status' => 1,
      'weight' => -47,
    ); /* WAS: '' */
    $data['full_html']['filters']['lazyloader_filter']['weight'] = -44; /* WAS: -45 */
    $data['full_html']['filters']['typogrify']['weight'] = -43; /* WAS: -44 */
  }
}
