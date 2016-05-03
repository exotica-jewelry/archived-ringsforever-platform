<?php
/**
 * @file
 * trf_image_variations.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trf_image_variations_default_rules_configuration() {
  $items = array();
  $items['rules_image_create'] = entity_import('rules_config', '{ "rules_image_create" : {
      "LABEL" : "Create images for variations",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_product" : { "label" : "Commerce Product", "type" : "commerce_product" },
        "product_display" : { "label" : "Product Display", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-product" ], "field" : "field_images" } },
        { "entity_has_field" : { "entity" : [ "product-display" ], "field" : "field_images" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "commerce-product:field_images" ],
            "value" : [ "product-display:field_images" ]
          }
        },
        { "entity_save" : { "data" : [ "commerce-product" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_image_update'] = entity_import('rules_config', '{ "rules_image_update" : {
      "LABEL" : "Update images on variations",
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
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_images" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-product" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_image_create" : { "commerce_product" : [ "list-item" ], "product_display" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
