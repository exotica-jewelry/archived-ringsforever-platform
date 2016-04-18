<?php
/**
 * @file
 * trf_site_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: current_search
  $overrides["current_search.kickstart_search.settings|items|active_items|keys_link"] = 1;
  $overrides["current_search.kickstart_search.settings|items|active_items|keys_param"] = '';
  $overrides["current_search.kickstart_search.settings|items|results|text"] = 'There is <em>[facetapi_results:result-count]</em> titanium ring';
  $overrides["current_search.kickstart_search.settings|items|results|text_plural"] = 'There are <em>[facetapi_results:result-count]</em> titanium rings';

  // Exported overrides for: search_api_sort
  $overrides["search_api_sort.product_display__field_product_commerce_price_amount_decimal.options|field_name"] = 'Product variations » Price » Amount (decimal) (Min)';

 return $overrides;
}
