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
  $file_display->name = 'image__default__file_field_cloud_zoom';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'slide_style' => 'product_full',
    'zoom_style' => '0',
    'gallery_filedset' => array(
      'gallery_mode' => 0,
      'thumb_style' => '0',
    ),
    'zoom_position_fieldset' => array(
      'zoom_width' => 'auto',
      'zoom_height' => 'auto',
      'position' => 'right',
      'adjust_x' => '0',
      'adjust_y' => '0',
    ),
    'zoom_style_fieldset' => array(
      'tint' => 'false',
      'tint_opacity' => '0.5',
      'lens_opacity' => '0.5',
      'soft_focus' => 0,
      'smooth_move' => '3',
      'Show title' => 1,
      'title_opacity' => '0.5',
    ),
  );
  $export['image__default__file_field_cloud_zoom'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_editable';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'title_linked',
    'fallback_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
  );
  $export['image__default__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_download_link';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_table';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_url_plain';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_image_delta';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'deltas' => '0',
    'deltas_reversed' => 0,
    'image_style' => '',
    'image_link' => '',
  );
  $export['image__default__file_field_image_delta'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_picture_sizes_formatter';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'blog_full' => 0,
      'blog_medium' => 0,
      'hp_slideshow' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'linkit_thumb' => 0,
      'product_full' => 0,
      'product_medium' => 0,
      'product_thumbnail' => 0,
      'frontpage_block' => 0,
      'large_breakpoints_theme_trf_mobile_1x' => 0,
      'large_breakpoints_theme_trf_narrow_1x' => 0,
      'large_breakpoints_theme_trf_tv_1x' => 0,
      'large_breakpoints_theme_trf_wide_1x' => 0,
      'large_module_picture_empty_srcset_1x' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => 'blog_full',
    'image_link' => '',
  );
  $export['image__default__file_field_picture_sizes_formatter'] = $file_display;

  return $export;
}
