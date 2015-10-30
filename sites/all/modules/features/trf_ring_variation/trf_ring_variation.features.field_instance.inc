<?php
/**
 * @file
 * trf_ring_variation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function trf_ring_variation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_product-rings-commerce_price'.
  $field_instances['commerce_product-rings-commerce_price'] = array(
    'bundle' => 'rings',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a whole dollar amount without commas, e.g. <em>205</em> or <em>1095</em>.',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => FALSE,
          'text_format' => NULL,
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 0,
      ),
      'commerce_line_item_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => FALSE,
          'text_format' => NULL,
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => FALSE,
          'text_format' => NULL,
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => FALSE,
          'text_format' => NULL,
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 0,
      ),
      'node_product_list' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => TRUE,
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => 0,
          'text_format' => 'filtered_html',
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 0,
      ),
      'node_reference_view' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => FALSE,
          'text_format' => NULL,
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 0,
      ),
      'node_rss' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'module' => 'commerce_extra_price_formatters',
        'settings' => array(
          'alternative_text_for_zero_price' => '',
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'raw' => FALSE,
          'text_format' => NULL,
        ),
        'type' => 'commerce_price_no_decimals',
        'weight' => 2,
      ),
      'node_token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
      'product_in_cart' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => 'calculated_sell_price',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => '',
    'field_name' => 'commerce_price',
    'label' => 'Price',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'commerce_product-rings-field_color'.
  $field_instances['commerce_product-rings-field_color'] = array(
    'bundle' => 'rings',
    'commerce_cart_settings' => array(
      'attribute_field' => 0,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Color',
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_product_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_reference_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => '',
    'field_name' => 'field_color',
    'label' => 'Color',
    'product_catalog' => 1,
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'commerce_product-rings-field_images'.
  $field_instances['commerce_product-rings-field_images'] = array(
    'bundle' => 'rings',
    'deleted' => 0,
    'description' => 'Upload one or more images that should be displayed when this width is selected.',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => 1,
          'field_multiple_limit_offset' => 0,
          'image_link' => '',
          'image_style' => 'product_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'cloud_zoom',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'gallery_filedset' => array(
            'gallery_mode' => 1,
            'thumb_style' => 'product_thumbnail',
          ),
          'slide_style' => 'product_full',
          'zoom_position_fieldset' => array(
            'adjust_x' => 0,
            'adjust_y' => 0,
            'position' => 'inside',
            'zoom_height' => 'auto',
            'zoom_width' => 'auto',
          ),
          'zoom_style' => 0,
          'zoom_style_fieldset' => array(
            'Show title' => 1,
            'lens_opacity' => 0.5,
            'smooth_move' => 3,
            'soft_focus' => 0,
            'tint' => 'false',
            'tint_opacity' => 0.5,
            'title_opacity' => 0,
          ),
        ),
        'type' => 'cloud_zoom',
        'weight' => 1,
      ),
      'node_product_list' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => 1,
          'field_multiple_limit_offset' => 0,
          'image_link' => 'content',
          'image_style' => 'product_medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'node_reference_view' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => 1,
          'field_multiple_limit_offset' => 0,
          'image_link' => 'content',
          'image_style' => 'product_thumbnail',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'node_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'product_in_cart' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_multiple_limit' => 1,
          'field_multiple_limit_offset' => 0,
          'image_link' => '',
          'image_style' => 'product_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => 'figcaption',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[commerce-product:field-title-parent].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'rings',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'file_entity_inline' => 0,
        'file_entity_inline_fields' => array(),
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'commerce_product-rings-field_ring_width'.
  $field_instances['commerce_product-rings-field_ring_width'] = array(
    'bundle' => 'rings',
    'commerce_cart_settings' => array(
      'attribute_field' => 1,
      'attribute_widget' => 'select',
      'attribute_widget_title' => 'Width',
    ),
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Select a width to add it to the options for this ring.</p>',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'commerce_line_item_display' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'node_product_list' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'node_reference_view' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => '',
    'field_name' => 'field_ring_width',
    'label' => 'Width',
    'product_catalog' => 1,
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'commerce_product-rings-field_title_parent'.
  $field_instances['commerce_product-rings-field_title_parent'] = array(
    'bundle' => 'rings',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of the parent product.',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'commerce_line_item_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_product_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_reference_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'product_in_cart' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_product',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_title_parent',
    'label' => 'Parent title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'commerce_product-rings-title_field'.
  $field_instances['commerce_product-rings-title_field'] = array(
    'bundle' => 'rings',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_confirmation_view' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => '',
          'title_link' => '',
          'title_style' => 'h5',
        ),
        'type' => 'title_linked',
        'weight' => 1,
      ),
      'commerce_line_item_display' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'line_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'node_full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'node_product_list' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'node_reference_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'node_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'product_in_cart' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => '',
          'title_link' => '',
          'title_style' => 'h5',
        ),
        'type' => 'title_linked',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_product',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Select a width to add it to the options for this ring.</p>');
  t('Color');
  t('Enter a whole dollar amount without commas, e.g. <em>205</em> or <em>1095</em>.');
  t('Images');
  t('Name of the parent product.');
  t('Parent title');
  t('Price');
  t('Title');
  t('Upload one or more images that should be displayed when this width is selected.');
  t('Width');

  return $field_instances;
}
