<?php
/**
 * @file
 * trf_site_paths.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_ring_taxonomies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_elements_pattern';
  $strongarm->value = 'titanium-rings/[term:name]';
  $export['pathauto_taxonomy_term_elements_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_featuring_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_featuring_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_width_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_width_pattern'] = $strongarm;

  return $export;
}
