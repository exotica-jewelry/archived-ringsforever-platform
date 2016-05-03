<?php
/**
 * @file
 * trf_store_shipping.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_store_shipping_default_rules_configuration() {
  $items = array();
  $items['commerce_shipping_service_standard_shipping_ca'] = entity_import('rules_config', '{ "commerce_shipping_service_standard_shipping_ca" : {
      "LABEL" : "Rate Standard Shipping (Canada)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "standard_shipping_ca",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  return $items;
}
