<?php
/**
 * @file
 * trf_site_text.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function trf_site_text_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'standard';
  $linkit_profile->admin_title = 'Standard';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'filtered_html' => 'filtered_html',
      'full_html' => 'full_html',
      'commerce_order_message' => 0,
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:commerce_discount' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:commerce_payment_transaction' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_sort' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:commerce_product' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'page' => 'page',
        'blog_post' => 'blog_post',
        'rings' => 'rings',
        'ad_push' => 0,
        'bags_cases' => 0,
        'drinks' => 0,
        'hats' => 0,
        'shoes' => 0,
        'slideshow' => 0,
        'storage_devices' => 0,
        'tops' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'brand' => 'brand',
        'category' => 'category',
        'collection' => 'collection',
        'color' => 'color',
        'bag_size' => 0,
        'gender' => 0,
        'hat_size' => 0,
        'shoe_size' => 0,
        'storage_capacity' => 0,
        'top_size' => 0,
        'elements' => 0,
        'width' => 0,
      ),
      'group_by_bundle' => 1,
    ),
    'entity:commerce_discount' => array(
      'result_description' => '',
      'bundles' => array(
        'order_discount' => 0,
        'product_discount' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:commerce_payment_transaction' => array(
      'result_description' => '',
      'bundles' => array(
        'amex_hosted' => 0,
        'hosted_pci' => 0,
        'payflow_link' => 0,
        'paypal_ppa' => 0,
        'payleap_direct' => 0,
        'payleap_cof' => 0,
        'commerce_payment_example' => 0,
        'paypal_ec' => 0,
        'paypal_wps' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:commerce_product' => array(
      'result_description' => '',
      'bundles' => array(
        'rings' => 'rings',
        'bags_cases' => 0,
        'drinks' => 0,
        'hats' => 0,
        'shoes' => 0,
        'storage_devices' => 0,
        'tops' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:search_api_sort' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
    ),
    'imce' => 1,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['standard'] = $linkit_profile;

  return $export;
}
