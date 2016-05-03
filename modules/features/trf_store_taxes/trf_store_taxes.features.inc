<?php
/**
 * @file
 * trf_store_taxes.features.inc
 */

/**
 * Implements hook_commerce_tax_default_rates().
 */
function trf_store_taxes_commerce_tax_default_rates() {
  $items = array(
    'tax_az_sales' => array(
      'name' => 'tax_az_sales',
      'display_title' => 'Arizona Sales Tax',
      'description' => 'Sales tax charged to all Arizona orders.',
      'rate' => '0.0935',
      'type' => 'sales_tax',
      'rules_component' => 'commerce_tax_rate_tax_az_sales',
      'default_rules_component' => '1',
      'price_component' => 'tax|tax_az_sales',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'Arizona Sales Tax',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function trf_store_taxes_commerce_tax_default_types() {
  $items = array(
    'sales_tax' => array(
      'name' => 'sales_tax',
      'display_title' => 'Sales tax',
      'description' => 'A basic type for taxes that do not display inclusive with product prices.',
      'display_inclusive' => '0',
      'round_mode' => '0',
      'rule' => 'commerce_tax_type_sales_tax',
      'module' => 'commerce_tax_ui',
      'title' => 'Sales tax',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}
