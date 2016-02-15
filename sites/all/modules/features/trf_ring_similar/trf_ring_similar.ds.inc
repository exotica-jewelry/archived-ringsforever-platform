<?php
/**
 * @file
 * trf_ring_similar.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function trf_ring_similar_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'similar_rings_collections';
  $ds_field->label = 'Similar rings: Collections';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similar_rings-sr_collections',
    'block_render' => '1',
  );
  $export['similar_rings_collections'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'similar_rings_colors';
  $ds_field->label = 'Similar rings: Colors';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similar_rings-sr_colors',
    'block_render' => '1',
  );
  $export['similar_rings_colors'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'similar_rings_elements';
  $ds_field->label = 'Similar rings: Elements';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similar_rings-sr_elements',
    'block_render' => '1',
  );
  $export['similar_rings_elements'] = $ds_field;

  return $export;
}
