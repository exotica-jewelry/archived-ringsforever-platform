<?php
/**
 * @file
 * trf_ring_type.features.inc
 */

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
