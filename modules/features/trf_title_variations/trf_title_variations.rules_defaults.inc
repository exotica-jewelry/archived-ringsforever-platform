<?php
/**
 * @file
 * trf_title_variations.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_title_variations_default_rules_configuration() {
  $items = array();
  $items['rules_var_title_create'] = entity_import('rules_config', '{ "rules_var_title_create" : {
      "LABEL" : "Label variations with parent product title",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_product" : { "label" : "Commerce Product", "type" : "commerce_product" },
        "product_display" : { "label" : "Product Display", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-product" ], "field" : "field_title_parent" } },
        { "entity_has_field" : { "entity" : [ "product-display" ], "field" : "title_field" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "commerce-product:field_title_parent" ],
            "value" : [ "product-display:title_field" ]
          }
        },
        { "entity_save" : { "data" : [ "commerce-product" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_var_title_update'] = entity_import('rules_config', '{ "rules_var_title_update" : {
      "LABEL" : "Update labels on variations with parent product title",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Product" ],
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_presave--rings" : { "bundle" : "rings" },
        "node_update--rings" : { "bundle" : "rings" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_product" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "title_field" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-product" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_var_title_create" : { "commerce_product" : [ "list-item" ], "product_display" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
