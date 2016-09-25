<?php
/**
 * @file
 * trf_site_images.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function trf_site_images_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_imagezoom';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'imagezoom_zoom_type' => 'window',
    'imagezoom_display_style' => '',
    'imagezoom_zoom_style' => '',
  );
  $export['image__default__file_field_imagezoom'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_imagezoom_gallery';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'imagezoom_zoom_type' => 'window',
    'imagezoom_display_style' => '',
    'imagezoom_zoom_style' => '',
    'imagezoom_thumb_style' => '',
  );
  $export['image__default__file_field_imagezoom_gallery'] = $file_display;

  return $export;
}
