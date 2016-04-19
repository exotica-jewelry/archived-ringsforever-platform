<?php
/**
 * @file
 * trf_ring_type.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function trf_ring_type_default_cer() {
  $items = array();
  $items['node:rings:field_related_rings*node:rings:field_related_rings'] = entity_import('cer', '{
    "identifier" : "node:rings:field_related_rings*node:rings:field_related_rings",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:rings:field_related_rings" } ] },
    "cer_right" : { "und" : [ { "path" : "node:rings:field_related_rings" } ] }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_ring_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function trf_ring_type_field_default_field_bases_alter(&$data) {
  if (isset($data['field_collection'])) {
    $data['field_collection']['cardinality'] = -1; /* WAS: 1 */
  }
  if (isset($data['field_color'])) {
    $data['field_color']['cardinality'] = -1; /* WAS: 1 */
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function trf_ring_type_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_field_file_default'])) {
    $data['image__default__file_field_file_default']->weight = -42; /* WAS: 50 */
  }
  if (isset($data['image__default__file_field_image'])) {
    $data['image__default__file_field_image']->weight = -44; /* WAS: 48 */
  }
}

/**
 * Implements hook_node_info().
 */
function trf_ring_type_node_info() {
  $items = array(
    'rings' => array(
      'name' => t('Rings'),
      'base' => 'node_content',
      'description' => t('<em>Rings</em> are titanium wedding rings with particular elements and sizes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
