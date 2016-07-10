<?php
/**
 * @file
 * trf_site_social.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function trf_site_social_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'addthis_buttons';
  $ds_field->label = 'AddThis buttons';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|10',
    'block_render' => '1',
  );
  $export['addthis_buttons'] = $ds_field;

  return $export;
}
