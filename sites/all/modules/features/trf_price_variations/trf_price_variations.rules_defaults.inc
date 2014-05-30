<?php
/**
 * @file
 * trf_price_variations.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_price_variations_default_rules_configuration() {
  $items = array();
  $items['rules_price_variations'] = entity_import('rules_config', '{ "rules_price_variations_update" : {
      "LABEL" : "Update prices on variations",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Product" ],
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--rings" : { "bundle" : "rings" },
        "node_update--rings" : { "bundle" : "rings" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_product" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_price_base" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-product" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_price_variations_create" : { "commerce_product" : [ "list-item" ], "product_display" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_price_variations_set'] = entity_import('rules_config', '{ "rules_price_variations_create" : {
      "LABEL" : "Create prices for variations",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_product" : { "label" : "Commerce Product", "type" : "commerce_product" },
        "product_display" : { "label" : "Product Display", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-product" ], "field" : "commerce_price" } },
        { "entity_has_field" : { "entity" : [ "product-display" ], "field" : "field_price_base" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "commerce-product:commerce_price" ],
            "value" : [ "product-display:field_price_base" ]
          }
        },
        { "entity_save" : { "data" : [ "commerce-product" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
