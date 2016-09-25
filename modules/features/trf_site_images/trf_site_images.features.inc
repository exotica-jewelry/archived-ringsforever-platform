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
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
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
 * Implements hook_file_default_types_alter().
 */
function trf_site_images_file_default_types_alter(&$data) {
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function trf_site_images_image_styles_alter(&$data) {
  if (isset($data['product_full'])) {

  if (!isset($data['product_full']['storage']) || $data['product_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_full']['effects'] = array_values($data['product_full']['effects']);
    $data['product_full']['effects'][0]['data']['height'] = '';
  }

  if (!isset($data['product_full']['storage']) || $data['product_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_full']['effects'] = array_values($data['product_full']['effects']);
    $data['product_full']['effects'][0]['data']['upscale'] = 0;
  }

  if (!isset($data['product_full']['storage']) || $data['product_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_full']['effects'] = array_values($data['product_full']['effects']);
    $data['product_full']['effects'][0]['data']['width'] = 416;
  }

  if (!isset($data['product_full']['storage']) || $data['product_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_full']['effects'] = array_values($data['product_full']['effects']);
    $data['product_full']['effects'][0]['name'] = 'image_scale';
  }

  if (!isset($data['product_full']['storage']) || $data['product_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_full']['effects'] = array_values($data['product_full']['effects']);
    $data['product_full']['effects'][0]['weight'] = 2;
  }

  if (!isset($data['product_full']['storage']) || $data['product_full']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_full']['effects'] = array_values($data['product_full']['effects']);
    $data['product_full']['effects'][1] = array(
      'data' => array(
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
  }
  }
  if (isset($data['product_medium'])) {

  if (!isset($data['product_medium']['storage']) || $data['product_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_medium']['effects'] = array_values($data['product_medium']['effects']);
    $data['product_medium']['effects'][0]['data']['height'] = '';
  }

  if (!isset($data['product_medium']['storage']) || $data['product_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_medium']['effects'] = array_values($data['product_medium']['effects']);
    $data['product_medium']['effects'][0]['data']['upscale'] = 0;
  }

  if (!isset($data['product_medium']['storage']) || $data['product_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_medium']['effects'] = array_values($data['product_medium']['effects']);
    $data['product_medium']['effects'][0]['data']['width'] = 215;
  }

  if (!isset($data['product_medium']['storage']) || $data['product_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_medium']['effects'] = array_values($data['product_medium']['effects']);
    $data['product_medium']['effects'][0]['name'] = 'image_scale';
  }

  if (!isset($data['product_medium']['storage']) || $data['product_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_medium']['effects'] = array_values($data['product_medium']['effects']);
    $data['product_medium']['effects'][1] = array(
      'data' => array(
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
  }
  }
  if (isset($data['product_thumbnail'])) {

  if (!isset($data['product_thumbnail']['storage']) || $data['product_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_thumbnail']['effects'] = array_values($data['product_thumbnail']['effects']);
    $data['product_thumbnail']['effects'][0]['data']['height'] = '';
  }

  if (!isset($data['product_thumbnail']['storage']) || $data['product_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_thumbnail']['effects'] = array_values($data['product_thumbnail']['effects']);
    $data['product_thumbnail']['effects'][0]['data']['upscale'] = 0;
  }

  if (!isset($data['product_thumbnail']['storage']) || $data['product_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_thumbnail']['effects'] = array_values($data['product_thumbnail']['effects']);
    $data['product_thumbnail']['effects'][0]['name'] = 'image_scale';
  }

  if (!isset($data['product_thumbnail']['storage']) || $data['product_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_thumbnail']['effects'] = array_values($data['product_thumbnail']['effects']);
    $data['product_thumbnail']['effects'][0]['weight'] = 2;
  }

  if (!isset($data['product_thumbnail']['storage']) || $data['product_thumbnail']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['product_thumbnail']['effects'] = array_values($data['product_thumbnail']['effects']);
    $data['product_thumbnail']['effects'][1] = array(
      'data' => array(
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
  }
  }
}
