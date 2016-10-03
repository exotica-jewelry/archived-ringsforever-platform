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
    $data['filtered_html']['filters']['filter_autop']['weight'] = -44; /* WAS: -45 */
    $data['filtered_html']['filters']['filter_htmlcorrector']['weight'] = -43; /* WAS: -44 */
    $data['filtered_html']['filters']['filter_html']['weight'] = -45; /* WAS: -46 */
    $data['filtered_html']['filters']['filter_url']['weight'] = -47; /* WAS: -48 */
    $data['filtered_html']['filters']['image_resize_filter']['weight'] = -46; /* WAS: -47 */
    $data['filtered_html']['filters']['lazyloader_filter']['weight'] = -42; /* WAS: -43 */
    $data['filtered_html']['filters']['pathologic'] = array(
      'settings' => array(
        'local_paths' => '',
        'local_settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
        'protocol_style' => 'full',
        'settings_source' => 'global',
      ),
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
    $data['filtered_html']['filters']['typogrify']['weight'] = -41; /* WAS: -42 */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['filters']['filter_autop']['weight'] = -45; /* WAS: -46 */
    $data['full_html']['filters']['filter_htmlcorrector']['weight'] = -44; /* WAS: -45 */
    $data['full_html']['filters']['filter_url']['weight'] = -47; /* WAS: -48 */
    $data['full_html']['filters']['image_resize_filter']['weight'] = -46; /* WAS: -47 */
    $data['full_html']['filters']['lazyloader_filter']['weight'] = -43; /* WAS: -44 */
    $data['full_html']['filters']['pathologic'] = array(
      'settings' => array(
        'local_paths' => '',
        'local_settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
        'protocol_style' => 'full',
        'settings_source' => 'global',
      ),
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
    $data['full_html']['filters']['typogrify']['weight'] = -42; /* WAS: -43 */
  }
}
