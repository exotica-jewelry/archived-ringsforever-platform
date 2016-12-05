<?php
/**
 * @file
 * trf_store_checkout.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function trf_store_checkout_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'commerce_customer_address'.
  $field_bases['commerce_customer_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_customer_profile',
    ),
    'field_name' => 'commerce_customer_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'message_commerce_line_item'.
  $field_bases['message_commerce_line_item'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'message_commerce_line_item',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'line_item_id',
          'type' => 'property',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'commerce_line_item',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'message_commerce_order'.
  $field_bases['message_commerce_order'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'message_commerce_order',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'order_id',
          'type' => 'property',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'commerce_order',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
