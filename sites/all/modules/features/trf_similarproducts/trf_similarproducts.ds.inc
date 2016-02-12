<?php
/**
 * @file
 * trf_similarproducts.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function trf_similarproducts_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'similar_products_collection';
  $ds_field->label = 'Similar products: Collection';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similarproducts-sp_collection',
    'block_render' => '1',
  );
  $export['similar_products_collection'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'similar_products_color';
  $ds_field->label = 'Similar products: Color';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similarproducts-sp_color',
    'block_render' => '1',
  );
  $export['similar_products_color'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'similar_products_element';
  $ds_field->label = 'Similar products: Element';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similarproducts-sp_element',
    'block_render' => '1',
  );
  $export['similar_products_element'] = $ds_field;

  return $export;
}
