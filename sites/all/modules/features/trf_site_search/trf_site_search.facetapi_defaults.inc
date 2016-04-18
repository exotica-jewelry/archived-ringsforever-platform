<?php
/**
 * @file
 * trf_site_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function trf_site_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display::field_product:field_color';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = '';
  $facet->facet = 'field_product:field_color';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@product_display::field_product:field_color'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display:block:field_product:field_color';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = 'block';
  $facet->facet = 'field_product:field_color';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'commerce_search_api_fancy',
    'filters' => array(
      'current_depth' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'active_items' => array(
        'status' => 1,
        'weight' => '-1',
      ),
      'useless_searches' => array(
        'status' => 1,
        'weight' => '0',
      ),
      'hide_search_start' => array(
        'status' => 0,
        'weight' => '1',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'display_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
  );
  $export['search_api@product_display:block:field_product:field_color'] = $facet;

  return $export;
}
