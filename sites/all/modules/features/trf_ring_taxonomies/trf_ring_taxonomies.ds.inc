<?php
/**
 * @file
 * trf_ring_taxonomies.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function trf_ring_taxonomies_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|collection|featured';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'collection';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|collection|featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|collection|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'collection';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_cat_title' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|collection|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function trf_ring_taxonomies_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|collection|featured';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'collection';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_cat_featured_rings',
        2 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_cat_featured_rings' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|collection|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|collection|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'collection';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cat_title',
        1 => 'field_cat_featured_rings',
        2 => 'description',
      ),
    ),
    'fields' => array(
      'field_cat_title' => 'ds_content',
      'field_cat_featured_rings' => 'ds_content',
      'description' => 'ds_content',
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
  $export['taxonomy_term|collection|full'] = $ds_layout;

  return $export;
}
