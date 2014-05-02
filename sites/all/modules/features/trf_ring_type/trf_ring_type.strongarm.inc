<?php
/**
 * @file
 * trf_ring_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_ring_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__rings';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'reference_view' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'reference_view' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'reference_view' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:field_color' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_ring_width' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'reference_view' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:field_ring_width_shown' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'reference_view' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rings';
  $strongarm->value = array();
  $export['menu_options_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rings';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rings';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rings';
  $strongarm->value = '1';
  $export['node_preview_rings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rings';
  $strongarm->value = 0;
  $export['node_submitted_rings'] = $strongarm;

  return $export;
}