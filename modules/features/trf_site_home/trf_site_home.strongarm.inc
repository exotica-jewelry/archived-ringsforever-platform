<?php
/**
 * @file
 * trf_site_home.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_site_home_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityqueue_field_names';
  $strongarm->value = array(
    0 => 'eq_taxonomy_term',
  );
  $export['entityqueue_field_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityqueue_queue_names';
  $strongarm->value = array(
    0 => 'taxonomy_featured',
  );
  $export['entityqueue_queue_names'] = $strongarm;

  return $export;
}
