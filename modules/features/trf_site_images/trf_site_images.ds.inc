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
  $ds_layout->id = 'file|image|caption_only';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'caption_only';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_file_image_title_text',
      ),
    ),
    'fields' => array(
      'field_file_image_title_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['file|image|caption_only'] = $ds_layout;

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
      ),
      'hidden' => array(
        4 => 'redirect',
        5 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'filename' => 'ds_content',
      'preview' => 'ds_content',
      'field_file_image_alt_text' => 'ds_content',
      'field_file_image_title_text' => 'ds_content',
      'redirect' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['file|image|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function trf_site_images_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'caption_only';
  $ds_view_mode->label = 'Caption only';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['caption_only'] = $ds_view_mode;

  return $export;
}
