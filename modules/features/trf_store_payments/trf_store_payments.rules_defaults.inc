<?php
/**
 * @file
 * trf_store_payments.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_store_payments_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_paypal_ec'] = entity_import('rules_config', '{ "commerce_payment_paypal_ec" : {
      "LABEL" : "PayPal Express Checkout",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_ec" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "paypal_ec"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_paypal_ppa'] = entity_import('rules_config', '{ "commerce_payment_paypal_ppa" : {
      "LABEL" : "PayPal Payments Advanced",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_ppa" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "paypal_ppa"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_paypal_wps'] = entity_import('rules_config', '{ "commerce_payment_paypal_wps" : {
      "LABEL" : "PayPal WPS",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "orders@ringsforever.com",
                  "currency_code" : "USD",
                  "allow_supported_currencies" : 0,
                  "language" : "US",
                  "server" : "live",
                  "payment_action" : "sale",
                  "ipn_logging" : "notification",
                  "receiver_emails" : "",
                  "ipn_create_billing_profile" : 0,
                  "show_payment_instructions" : 1
                }
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
