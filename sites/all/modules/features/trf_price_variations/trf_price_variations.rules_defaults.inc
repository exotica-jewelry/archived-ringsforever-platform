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
  $items['rules_price_12mm_rings'] = entity_import('rules_config', '{ "rules_price_12mm_rings" : {
      "LABEL" : "Price 12mm rings",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Product" ],
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_product_reference" ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "component_rules_ring_width_12mm" : { "commerce_product" : [ "commerce-line-item:commerce-product" ] } }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_add" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : "5000",
            "component_name" : "base_price",
            "round_mode" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_price_variations'] = entity_import('rules_config', '{ "rules_price_variations" : {
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
            "DO" : [ { "component_rules_price_variations_create" : [] } ]
          }
        }
      ]
    }
  }');
  $items['rules_price_variations_create'] = entity_import('rules_config', '{ "rules_price_variations_create" : {
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
  $items['rules_ring_width_12mm'] = entity_import('rules_config', '{ "rules_ring_width_12mm" : {
      "LABEL" : "Ring width is 12mm",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Product" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "commerce_product" : { "label" : "Product", "type" : "commerce_product" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "commerce-product" ], "field" : "field_ring_width" } },
        { "NOT data_is_empty" : { "data" : [ "commerce-product:field-ring-width" ] } },
        { "NOT data_is_empty" : { "data" : [ "commerce-product:field-ring-width:tid" ] } },
        { "data_is" : {
            "data" : [ "commerce-product:field-ring-width:name" ],
            "value" : "12mm"
          }
        }
      ]
    }
  }');
  return $items;
}
