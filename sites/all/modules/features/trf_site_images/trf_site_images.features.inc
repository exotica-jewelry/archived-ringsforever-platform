<?php
/**
 * @file
 * trf_site_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function trf_site_images_image_default_styles() {
  $styles = array();

  // Exported image style: large_breakpoints_theme_trf_mobile_1x.
  $styles['large_breakpoints_theme_trf_mobile_1x'] = array(
    'label' => 'large_breakpoints_theme_trf_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_trf_narrow_1x.
  $styles['large_breakpoints_theme_trf_narrow_1x'] = array(
    'label' => 'large_breakpoints_theme_trf_narrow_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_trf_tv_1x.
  $styles['large_breakpoints_theme_trf_tv_1x'] = array(
    'label' => 'large_breakpoints_theme_trf_tv_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_trf_wide_1x.
  $styles['large_breakpoints_theme_trf_wide_1x'] = array(
    'label' => 'large_breakpoints_theme_trf_wide_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_module_picture_empty_srcset_1x.
  $styles['large_module_picture_empty_srcset_1x'] = array(
    'label' => 'large_module_picture_empty_srcset_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: product_zoom.
  $styles['product_zoom'] = array(
    'label' => 'product_zoom',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 800,
          'height' => 800,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
