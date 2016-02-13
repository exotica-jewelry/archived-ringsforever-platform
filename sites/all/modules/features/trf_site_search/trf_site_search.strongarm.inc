<?php
/**
 * @file
 * trf_site_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_site_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@product_display';
  $strongarm->value = '-1';
  $export['facetapi:block_cache:search_api@product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'product_display' => array(
      'search_api_views:collection_products:page' => 'search_api_views:collection_products:page',
      'search_api_views:collection_products:block_1' => 'search_api_views:collection_products:block_1',
      'search_api_views:display_products:page' => 'search_api_views:display_products:page',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
