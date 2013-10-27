<?php
/**
 * @file
 * ringsforever_migrate.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ringsforever_migrate_default_rules_configuration() {
  $items = array();
  $items['commerce_shipping_service_free_shipping'] = entity_import('rules_config', '{ "commerce_shipping_service_free_shipping" : {
      "LABEL" : "Rate Free Shipping",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "commerce-order:commerce-order-total:amount" ],
            "op" : "\\u003C",
            "value" : "9999"
          }
        }
      ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "free_shipping",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  return $items;
}
