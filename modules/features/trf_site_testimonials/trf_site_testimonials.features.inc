<?php
/**
 * @file
 * trf_site_testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_testimonials_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function trf_site_testimonials_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function trf_site_testimonials_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('<em>Testimonials</em> are praise from previous customers!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
