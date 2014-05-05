<?php
/**
 * @file
 * trf_ring_type.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function trf_ring_type_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'reference_view';
  $ds_view_mode->label = 'Reference view';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['reference_view'] = $ds_view_mode;

  return $export;
}
