<?php
/**
 * @file
 * trf_ring_type.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function trf_ring_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_free';
  $ds_field->label = 'Ring: Free';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|2',
    'block_render' => '1',
  );
  $export['ring_free'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_sizing';
  $ds_field->label = 'Ring: Sizing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|3',
    'block_render' => '1',
  );
  $export['ring_sizing'] = $ds_field;

  return $export;
}

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
