<?php
/**
 * @file
 * trf_color_variations.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_color_variations_default_rules_configuration() {
  $items = array();
  $items['rules_color_create'] = entity_import('rules_config', '{ "rules_color_create" : {
      "LABEL" : "Create colors for variations",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_product" : { "label" : "Commerce Product", "type" : "commerce_product" },
        "product_display" : { "label" : "Product Display", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-product" ], "field" : "field_color" } },
        { "entity_has_field" : { "entity" : [ "product-display" ], "field" : "field_color" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "commerce-product:field_color" ],
            "value" : [ "product-display:field_color" ]
          }
        },
        { "entity_save" : { "data" : [ "commerce-product" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_color_update'] = entity_import('rules_config', '{ "rules_color_update" : {
      "LABEL" : "Update colors on variations",
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
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_color" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-product" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_color_create" : { "commerce_product" : [ "list-item" ], "product_display" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
