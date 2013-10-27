<?php
/**
 * @file
 * ringsforever_migrate.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function ringsforever_migrate_commerce_flat_rate_default_services() {
  $items = array(
    'free_shipping' => array(
      'name' => 'free_shipping',
      'base' => 'free_shipping',
      'display_title' => 'Free shipping: 5 - 8 business days',
      'description' => 'A free shipping service for an order over a certain amount.',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_free_shipping',
      'weight' => 1,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'free_shipping_details_form',
        'details_form_validate' => 'free_shipping_details_form_validate',
        'details_form_submit' => 'free_shipping_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'Free Shipping',
      'base_rate' => array(
        'amount' => '0',
        'currency_code' => 'USD',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function ringsforever_migrate_commerce_product_default_types() {
  $items = array(
    'rings' => array(
      'type' => 'rings',
      'name' => 'Rings',
      'description' => '<em>Rings</em> are titanium wedding rings with particular elements and sizes.',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ringsforever_migrate_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ringsforever_migrate_image_default_styles() {
  $styles = array();

  // Exported image style: product_full.
  $styles['product_full'] = array(
    'name' => 'product_full',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '400',
          'height' => '550',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: product_medium.
  $styles['product_medium'] = array(
    'name' => 'product_medium',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '230',
          'height' => '260',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: product_thumbnail.
  $styles['product_thumbnail'] = array(
    'name' => 'product_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '110',
          'height' => '130',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ringsforever_migrate_node_info() {
  $items = array(
    'tops' => array(
      'name' => t('Rings'),
      'base' => 'node_content',
      'description' => t('A <em>Ring</em> is a content type which contains product variations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
