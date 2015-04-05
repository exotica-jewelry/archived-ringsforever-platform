<?php
/**
 * @file
 * trf_ring_type.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function trf_ring_type_field_default_fields() {
  $fields = array();

  // Exported field: 'node-rings-field_collection'.
  $fields['node-rings-field_collection'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_collection',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'collection',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Collections by feature, such as inlays, gemstones, color, etc.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => '-1',
            'field_multiple_limit_offset' => '0',
            'taxonomy_term_link' => 1,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '5',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'reference_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'field_collection',
      'label' => 'Collection',
      'product_catalog' => 1,
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-rings-field_color'.
  $fields['node-rings-field_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_color',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'color',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p>Select the primary colors in this ring. For rings with no anodized color, you may want to choose the color of any stones or inlaid metal. Rings that <em>can</em> have color but are not anodized should be tagged with <em>uncolored</em>.</p>',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '7',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'reference_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'field_color',
      'label' => 'Colors',
      'product_catalog' => 1,
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-rings-field_description'.
  $fields['node-rings-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'reference_view' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => 'article',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-rings-field_images'.
  $fields['node-rings-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'deleted' => '0',
      'description' => 'Upload one or more images that should be displayed when this width is selected.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'reference_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
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
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
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
          'file_entity_inline' => '2',
          'file_entity_inline_fields' => array(
            0 => 'field_file_image_ring_width',
          ),
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'reference' => 0,
              'remote' => 'remote',
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-rings-field_price_base'.
  $fields['node-rings-field_price_base'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_price_base',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter a whole dollar amount without commas, e.g. <em>205</em> or <em>1095</em>.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'reference_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => 'no_wrapper',
      'field_name' => 'field_price_base',
      'label' => 'Base price',
      'required' => 1,
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
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-rings-field_product'.
  $fields['node-rings-field_product'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product',
      'foreign keys' => array(
        'product_id' => array(
          'columns' => array(
            'product_id' => 'product_id',
          ),
          'table' => 'commerce_product',
        ),
      ),
      'indexes' => array(
        'product_id' => array(
          0 => 'product_id',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_product_reference',
      'settings' => array(
        'options_list_limit' => NULL,
      ),
      'translatable' => '0',
      'type' => 'commerce_product_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => 1,
            'default_quantity' => '1',
            'field_multiple_limit' => '-1',
            'field_multiple_limit_offset' => '0',
            'line_item_type' => 'product',
            'show_quantity' => 0,
            'show_single_product_attributes' => 0,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'commerce_cart',
          'settings' => array(
            'combine' => 1,
            'default_quantity' => '1',
            'field_multiple_limit' => '-1',
            'field_multiple_limit_offset' => '0',
            'line_item_type' => 'product',
            'show_quantity' => 0,
            'show_single_product_attributes' => 0,
          ),
          'type' => 'commerce_cart_add_to_cart_form',
          'weight' => '3',
        ),
        'product_list' => array(
          'label' => 'hidden',
          'module' => 'field_extractor',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'field_name' => '',
            'formatter' => '',
            'settings' => array(),
          ),
          'type' => 'field_extractor',
          'weight' => '12',
        ),
        'reference_view' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_product',
      'label' => 'Product variations',
      'required' => TRUE,
      'settings' => array(
        'field_injection' => 1,
        'referenceable_types' => array(
          'rings' => 'rings',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 0,
            'autogenerate_title' => 1,
            'delete_references' => 1,
            'match_operator' => 'CONTAINS',
            'use_variation_language' => 1,
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-rings-field_product_type'.
  $fields['node-rings-field_product_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'category',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => array(
        0 => array(
          'tid' => '234',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'reference_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'field_product_type',
      'label' => 'Product type',
      'product_catalog' => 1,
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '0',
        ),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-rings-field_related_rings'.
  $fields['node-rings-field_related_rings'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_related_rings',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'rings' => 'rings',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'deleted' => '0',
      'description' => '<p>Select any corresponding rings that should be featured as related to this ring. Note that rings with the same categories or color will be automatically displayed — this field is designed for nearly-identical rings with variations in colors or stones (e.g. <em>Smith 1</em>, <em>Smith 2</em>, etc.).</p><p>Selecting <em>Remove</em> from an existing ring will only remove it as a related ring, it will not delete the ring itself unless you choose to do so.</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'field_multiple_limit' => '-1',
            'field_multiple_limit_offset' => '0',
            'links' => 0,
            'view_mode' => 'reference_view',
          ),
          'type' => 'entityreference_entity_view',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'field_multiple_limit' => '-1',
            'field_multiple_limit_offset' => '0',
            'links' => 0,
            'view_mode' => 'reference_view',
          ),
          'type' => 'entityreference_entity_view',
          'weight' => '12',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'reference_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'entityconnect_unload_add' => '0',
      'entityconnect_unload_edit' => '0',
      'fences_wrapper' => 'aside',
      'field_name' => 'field_related_rings',
      'label' => 'Related rings',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'delete_references' => 0,
            'label_plural' => 'rings',
            'label_singular' => 'ring',
            'match_operator' => 'STARTS_WITH',
            'override_labels' => 1,
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-rings-field_ring_elements'.
  $fields['node-rings-field_ring_elements'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ring_elements',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'elements',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter tags identifying various secondary elements. For example: gold, platinum, diamonds.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '8',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'reference_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'field_ring_elements',
      'label' => 'Elements',
      'product_catalog' => 1,
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => '10',
          'min_length' => '0',
          'size' => '60',
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-rings-field_ring_elements_primary'.
  $fields['node-rings-field_ring_elements_primary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ring_elements_primary',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'elements',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter <strong>one</strong> tag for this ring\'s primary element.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '9',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'reference_view' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'field_ring_elements_primary',
      'label' => 'Primary element',
      'product_catalog' => 1,
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'apply_chosen' => '',
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => '10',
          'min_length' => '0',
          'size' => '60',
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-rings-field_theme'.
  $fields['node-rings-field_theme'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_theme',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'brand',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Thematic collection, such as men\'s and women\'s rings, promise rings, and commitment rings.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'ds',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'taxonomy_term_link' => TRUE,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '6',
        ),
        'product_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'reference_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'field_theme',
      'label' => 'Theme',
      'product_catalog' => 1,
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '1',
        ),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-rings-title_field'.
  $fields['node-rings-title_field'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'title_field',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'rings',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '﻿Enter only the name of the ring itself, e.g. <em>Baldwin</em> or <em>Montana 2</em>.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'title',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'title_class' => '',
            'title_link' => 'content',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'title',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'title_class' => '',
            'title_link' => 'content',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'product_list' => array(
          'label' => 'hidden',
          'module' => 'title',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'title_class' => '',
            'title_link' => 'content',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '1',
        ),
        'reference_view' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'title',
          'settings' => array(
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'title_class' => '',
            'title_link' => 'content',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => '',
      'field_name' => 'title_field',
      'label' => 'Title',
      'required' => 1,
      'settings' => array(
        'hide_label' => array(
          'entity' => 'entity',
          'page' => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '0',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Select any corresponding rings that should be featured as related to this ring. Note that rings with the same categories or color will be automatically displayed — this field is designed for nearly-identical rings with variations in colors or stones (e.g. <em>Smith 1</em>, <em>Smith 2</em>, etc.).</p><p>Selecting <em>Remove</em> from an existing ring will only remove it as a related ring, it will not delete the ring itself unless you choose to do so.</p>');
  t('<p>Select the primary colors in this ring. For rings with no anodized color, you may want to choose the color of any stones or inlaid metal. Rings that <em>can</em> have color but are not anodized should be tagged with <em>uncolored</em>.</p>');
  t('Base price');
  t('Collection');
  t('Collections by feature, such as inlays, gemstones, color, etc.');
  t('Colors');
  t('Description');
  t('Elements');
  t('Enter <strong>one</strong> tag for this ring\'s primary element.');
  t('Enter a whole dollar amount without commas, e.g. <em>205</em> or <em>1095</em>.');
  t('Enter tags identifying various secondary elements. For example: gold, platinum, diamonds.');
  t('Images');
  t('Primary element');
  t('Product type');
  t('Product variations');
  t('Related rings');
  t('Thematic collection, such as men\'s and women\'s rings, promise rings, and commitment rings.');
  t('Theme');
  t('Title');
  t('Upload one or more images that should be displayed when this width is selected.');
  t('﻿Enter only the name of the ring itself, e.g. <em>Baldwin</em> or <em>Montana 2</em>.');

  return $fields;
}
