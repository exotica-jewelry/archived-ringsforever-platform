<?php
/**
 * @file
 * trf_site_images.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function trf_site_images_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|form';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'filename',
        1 => 'preview',
        2 => 'field_file_image_alt_text',
        3 => 'field_file_image_title_text',
        4 => 'field_file_image_ring_width',
        5 => 'redirect',
      ),
    ),
    'fields' => array(
      'filename' => 'ds_content',
      'preview' => 'ds_content',
      'field_file_image_alt_text' => 'ds_content',
      'field_file_image_title_text' => 'ds_content',
      'field_file_image_ring_width' => 'ds_content',
      'redirect' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['file|image|form'] = $ds_layout;

  return $export;
}
