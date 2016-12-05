<?php
/**
 * @file
 * trf_store_reports.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_store_reports_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_commerce_reports';
  $strongarm->value = 'l j F o';
  $export['date_format_commerce_reports'] = $strongarm;

  return $export;
}
