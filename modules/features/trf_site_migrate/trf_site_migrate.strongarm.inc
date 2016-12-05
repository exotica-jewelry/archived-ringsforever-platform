<?php
/**
 * @file
 * trf_site_migrate.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_site_migrate_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'node-collections-explode' => FALSE,
    'node-elements-explode' => FALSE,
    'node-elements-array_filter' => FALSE,
    'node-elements-find_replace' => FALSE,
    'node-elements-find_replace_2' => FALSE,
    'node-elements-find_replace_3' => FALSE,
    'node-elements-find_replace_4' => FALSE,
    'node-name-find_replace_regex' => FALSE,
    'node-description-find_replace_regex' => FALSE,
    'node-imagetitle-rewrite' => FALSE,
    'node-imagetitle-find_replace_regex' => FALSE,
    'node-imagetitle-find_replace_regex_2' => FALSE,
    'testimonials-created-timetodate' => FALSE,
    'testimonials-body-find_replace_regex' => FALSE,
    'testimonials-body-find_replace_regex2' => FALSE,
    'testimonials-body-find_replace_regex1' => FALSE,
    'testimonials-body-find_replace_regex3' => FALSE,
    'testimonials-body-find_replace' => FALSE,
    'testimonials-body-find_replace2' => FALSE,
    'testimonials-body-find_replace3' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  return $export;
}
