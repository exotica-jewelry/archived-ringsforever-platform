<?php
/**
 * @file
 * trf_site_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_current_search_default_items_alter().
 */
function trf_site_search_current_search_default_items_alter(&$data) {
  if (isset($data['kickstart_search'])) {
    $data['kickstart_search']->settings['items']['active_items']['keys_link'] = 1; /* WAS: '' */
    $data['kickstart_search']->settings['items']['active_items']['keys_param'] = ''; /* WAS: '' */
    $data['kickstart_search']->settings['items']['results']['text'] = 'There is <em>[facetapi_results:result-count]</em> titanium ring'; /* WAS: 'There is <em>[facetapi_results:result-count]</em> search result' */
    $data['kickstart_search']->settings['items']['results']['text_plural'] = 'There are <em>[facetapi_results:result-count]</em> titanium rings'; /* WAS: 'There are <em>[facetapi_results:result-count]</em> search results' */
  }
}

/**
 * Implements hook_default_search_api_sort_alter().
 */
function trf_site_search_default_search_api_sort_alter(&$data) {
  if (isset($data['product_display__field_product_commerce_price_amount_decimal'])) {
    $data['product_display__field_product_commerce_price_amount_decimal']->options['field_name'] = 'Product variations » Price » Amount (decimal) (Min)'; /* WAS: 'Product » Price » Amount (decimal)' */
  }
}
