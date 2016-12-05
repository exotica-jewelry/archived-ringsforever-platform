<?php
/**
 * @file
 * trf_site_performance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_site_performance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_defer_skip_first_file';
  $strongarm->value = '4';
  $export['advagg_mod_css_defer_skip_first_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_inline_resource_hints';
  $strongarm->value = 1;
  $export['advagg_mod_js_inline_resource_hints'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_resource_hints_dns_prefetch';
  $strongarm->value = 1;
  $export['advagg_resource_hints_dns_prefetch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_resource_hints_location';
  $strongarm->value = '1';
  $export['advagg_resource_hints_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_resource_hints_preconnect';
  $strongarm->value = 1;
  $export['advagg_resource_hints_preconnect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_resource_hints_preload';
  $strongarm->value = 0;
  $export['advagg_resource_hints_preload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_resource_hints_preload_settings';
  $strongarm->value = array(
    'style' => array(
      '#weight' => '-10',
      'enabled' => 1,
      'external' => 1,
      'local' => 1,
      'push' => 0,
    ),
    'font' => array(
      '#weight' => '-9',
      'enabled' => 1,
      'external' => 1,
      'local' => 1,
      'push' => 0,
    ),
    'script' => array(
      '#weight' => '-8',
      'enabled' => 1,
      'external' => 1,
      'local' => 1,
      'push' => 0,
    ),
    'svg' => array(
      '#weight' => '-7',
      'enabled' => 1,
      'external' => 1,
      'local' => 1,
      'push' => 0,
    ),
    'image' => array(
      '#weight' => '-6',
      'enabled' => 1,
      'external' => 1,
      'local' => 1,
      'push' => 0,
    ),
    'all_others' => array(
      '#weight' => '-5',
      'enabled' => 1,
      'external' => 1,
      'local' => 1,
      'push' => 0,
    ),
  );
  $export['advagg_resource_hints_preload_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '0';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '10800';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  return $export;
}
