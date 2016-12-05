<?php
/**
 * @file
 * trf_site_images.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_images_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: file_type
  $overrides["file_type.image.disabled"] = FALSE;

  // Exported overrides for: image
  $overrides["image.product_full.effects|0|data|#imageinfo_cache_effect_callback"] = 'image_scale_effect';
  $overrides["image.product_full.effects|0|data|height"] = '';
  $overrides["image.product_full.effects|0|data|upscale"] = 0;
  $overrides["image.product_full.effects|0|data|width"] = 416;
  $overrides["image.product_full.effects|0|name"] = 'image_scale';
  $overrides["image.product_full.effects|0|weight"] = 2;
  $overrides["image.product_full.effects|1"] = array(
    'data' => array(
      '#imageinfo_cache_effect_callback' => 'canvasactions_definecanvas_effect',
      'RGB' => array(
        'HEX' => '#ffffff',
      ),
      'exact' => array(
        'height' => 416,
        'width' => 416,
        'xpos' => 'center',
        'ypos' => 'center',
      ),
      'relative' => array(
        'bottomdiff' => '',
        'leftdiff' => '',
        'rightdiff' => '',
        'topdiff' => '',
      ),
      'under' => 1,
    ),
    'name' => 'canvasactions_definecanvas',
    'weight' => 2,
  );
  $overrides["image.product_medium.effects|0|data|#imageinfo_cache_effect_callback"] = 'image_scale_effect';
  $overrides["image.product_medium.effects|0|data|height"] = '';
  $overrides["image.product_medium.effects|0|data|upscale"] = 0;
  $overrides["image.product_medium.effects|0|data|width"] = 215;
  $overrides["image.product_medium.effects|0|name"] = 'image_scale';
  $overrides["image.product_medium.effects|1"] = array(
    'data' => array(
      '#imageinfo_cache_effect_callback' => 'canvasactions_definecanvas_effect',
      'RGB' => array(
        'HEX' => '#ffffff',
      ),
      'exact' => array(
        'height' => 215,
        'width' => 215,
        'xpos' => 'center',
        'ypos' => 'center',
      ),
      'relative' => array(
        'bottomdiff' => '',
        'leftdiff' => '',
        'rightdiff' => '',
        'topdiff' => '',
      ),
      'under' => 1,
    ),
    'name' => 'canvasactions_definecanvas',
    'weight' => 3,
  );
  $overrides["image.product_thumbnail.effects|0|data|#imageinfo_cache_effect_callback"] = 'image_scale_effect';
  $overrides["image.product_thumbnail.effects|0|data|height"] = '';
  $overrides["image.product_thumbnail.effects|0|data|upscale"] = 0;
  $overrides["image.product_thumbnail.effects|0|name"] = 'image_scale';
  $overrides["image.product_thumbnail.effects|0|weight"] = 2;
  $overrides["image.product_thumbnail.effects|1"] = array(
    'data' => array(
      '#imageinfo_cache_effect_callback' => 'canvasactions_definecanvas_effect',
      'RGB' => array(
        'HEX' => '#ffffff',
      ),
      'exact' => array(
        'height' => 110,
        'width' => 110,
        'xpos' => 'center',
        'ypos' => 'center',
      ),
      'relative' => array(
        'bottomdiff' => '',
        'leftdiff' => '',
        'rightdiff' => '',
        'topdiff' => '',
      ),
      'under' => 1,
    ),
    'name' => 'canvasactions_definecanvas',
    'weight' => 2,
  );

 return $overrides;
}
