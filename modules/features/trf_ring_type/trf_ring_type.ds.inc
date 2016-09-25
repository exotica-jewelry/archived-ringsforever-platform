<?php
/**
 * @file
 * trf_ring_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function trf_ring_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|rings|node_full';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'rings';
  $ds_fieldsetting->view_mode = 'node_full';
  $ds_fieldsetting->settings = array(
    'field_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['commerce_product|rings|node_full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|rings|node_reference_view';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'rings';
  $ds_fieldsetting->view_mode = 'node_reference_view';
  $ds_fieldsetting->settings = array(
    'field_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['commerce_product|rings|node_reference_view'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|rings|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'rings';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'addthis_buttons' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ring_width' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'similar_rings_colors' => array(
      'weight' => '21',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'conditions' => array(),
      ),
    ),
    'similar_rings_elements' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'conditions' => array(),
      ),
    ),
    'ring_colors' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_no_string',
            'configuration' => array(
              'target' => 'field_collection',
              'string' => 'Color',
            ),
          ),
        ),
      ),
    ),
    'ring_free' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ring_gemstones_add' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_no_string',
            'configuration' => array(
              'target' => 'field_gemstones_bool',
              'string' => '1',
            ),
          ),
          1 => array(
            'condition' => 'hide_if_string',
            'configuration' => array(
              'target' => 'field_collection',
              'string' => 'Gemstones',
            ),
          ),
        ),
      ),
    ),
    'ring_gemstones_other' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_no_string',
            'configuration' => array(
              'target' => 'field_collection',
              'string' => 'Gemstones',
            ),
          ),
        ),
      ),
    ),
    'ring_similar_rings_header' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'similar_rings_elements',
            ),
          ),
        ),
      ),
    ),
    'ring_sizing' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_related_rings' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'h4',
          'lbw-cl' => 'field-name-field-related-rings__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-related-rings',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-name-field-related-rings__items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-related-rings__item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|rings|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function trf_ring_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_colors';
  $ds_field->label = 'Ring: Colors';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|4',
    'block_render' => '1',
  );
  $export['ring_colors'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_free';
  $ds_field->label = 'Ring: Free';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|2',
    'block_render' => '1',
  );
  $export['ring_free'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_gemstones_add';
  $ds_field->label = 'Ring: Gemstones (add)';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|6',
    'block_render' => '1',
  );
  $export['ring_gemstones_add'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_gemstones_other';
  $ds_field->label = 'Ring: Gemstones (other)';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|5',
    'block_render' => '1',
  );
  $export['ring_gemstones_other'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_similar_rings_header';
  $ds_field->label = 'Ring: Similar rings header';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|7',
    'block_render' => '1',
  );
  $export['ring_similar_rings_header'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_sizing';
  $ds_field->label = 'Ring: Sizing';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|3',
    'block_render' => '1',
  );
  $export['ring_sizing'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ring_width';
  $ds_field->label = 'Ring: Width';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|11',
    'block_render' => '1',
  );
  $export['ring_width'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function trf_ring_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|rings|form';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'rings';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ring_width',
        1 => 'title_field',
        2 => 'sku',
        3 => 'commerce_price',
        4 => 'field_images',
        5 => '_add_existing_field',
      ),
      'hidden' => array(
        6 => 'field_title_parent',
        7 => 'status',
        8 => 'field_color',
      ),
    ),
    'fields' => array(
      'field_ring_width' => 'ds_content',
      'title_field' => 'ds_content',
      'sku' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_images' => 'ds_content',
      '_add_existing_field' => 'ds_content',
      'field_title_parent' => 'hidden',
      'status' => 'hidden',
      'field_color' => 'hidden',
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
  $export['commerce_product|rings|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|rings|node_full';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'rings';
  $ds_layout->view_mode = 'node_full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'commerce_price',
        1 => 'field_images',
      ),
    ),
    'fields' => array(
      'commerce_price' => 'ds_content',
      'field_images' => 'ds_content',
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
  $export['commerce_product|rings|node_full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|rings|node_reference_view';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'rings';
  $ds_layout->view_mode = 'node_reference_view';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'sku',
        1 => 'title_field',
        2 => 'commerce_price',
        3 => 'field_images',
        4 => 'field_ring_width',
        5 => 'status',
      ),
    ),
    'fields' => array(
      'sku' => 'ds_content',
      'title_field' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_images' => 'ds_content',
      'field_ring_width' => 'ds_content',
      'status' => 'ds_content',
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
  $export['commerce_product|rings|node_reference_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|rings|embedded';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'rings';
  $ds_layout->view_mode = 'embedded';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'product:field_images',
        1 => 'title_field',
        2 => 'product:commerce_price',
      ),
    ),
    'fields' => array(
      'product:field_images' => 'ds_content',
      'title_field' => 'ds_content',
      'product:commerce_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'class="embedded-ring"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|rings|embedded'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|rings|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'rings';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'two_column_stacked_66_33';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title_field',
        1 => 'product:commerce_price',
        2 => 'field_description',
        3 => 'addthis_buttons',
      ),
      'left' => array(
        4 => 'product:field_images',
        5 => 'field_ring_elements_primary',
        6 => 'field_ring_elements',
        7 => 'field_collection',
        8 => 'field_color',
      ),
      'right' => array(
        9 => 'ring_free',
        10 => 'field_product',
        11 => 'ring_width',
        12 => 'ring_colors',
        13 => 'ring_sizing',
        14 => 'ring_gemstones_other',
        15 => 'ring_gemstones_add',
        16 => 'product:field_ring_width',
        17 => 'product:field_color',
      ),
      'footer' => array(
        18 => 'ring_similar_rings_header',
        19 => 'similar_rings_elements',
        20 => 'field_related_rings',
        21 => 'similar_rings_colors',
      ),
    ),
    'fields' => array(
      'title_field' => 'header',
      'product:commerce_price' => 'header',
      'field_description' => 'header',
      'addthis_buttons' => 'header',
      'product:field_images' => 'left',
      'field_ring_elements_primary' => 'left',
      'field_ring_elements' => 'left',
      'field_collection' => 'left',
      'field_color' => 'left',
      'ring_free' => 'right',
      'field_product' => 'right',
      'ring_width' => 'right',
      'ring_colors' => 'right',
      'ring_sizing' => 'right',
      'ring_gemstones_other' => 'right',
      'ring_gemstones_add' => 'right',
      'product:field_ring_width' => 'right',
      'product:field_color' => 'right',
      'ring_similar_rings_header' => 'footer',
      'similar_rings_elements' => 'footer',
      'field_related_rings' => 'footer',
      'similar_rings_colors' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|rings|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function trf_ring_type_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'embedded';
  $ds_view_mode->label = 'Embedded';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['embedded'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured';
  $ds_view_mode->label = 'Featured';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['featured'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'reference_view';
  $ds_view_mode->label = 'Reference view';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['reference_view'] = $ds_view_mode;

  return $export;
}
