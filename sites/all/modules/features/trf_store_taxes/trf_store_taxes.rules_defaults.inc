<?php
/**
 * @file
 * trf_store_taxes.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_store_taxes_default_rules_configuration() {
  $items = array();
  $items['commerce_tax_rate_tax_az_sales'] = entity_import('rules_config', '{ "commerce_tax_rate_tax_az_sales" : {
      "LABEL" : "Calculate Arizona Sales Tax",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "sales_tax" ],
      "REQUIRES" : [ "commerce_order", "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "Line item", "type" : "commerce_line_item" } },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce-line-item:order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "administrative_area",
            "value" : "AZ"
          }
        }
      ],
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "tax_az_sales"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  return $items;
}
