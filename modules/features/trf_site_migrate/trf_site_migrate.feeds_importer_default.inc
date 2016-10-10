<?php
/**
 * @file
 * trf_site_migrate.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function trf_site_migrate_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'node_update';
  $feeds_importer->config = array(
    'name' => 'Ring product update',
    'description' => 'Updates ring products (product displays) with width references. Based on default node import.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'rings',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'sku',
            'target' => 'field_sku_master',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'width',
            'target' => 'field_temp_width_ref',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => '43',
        'authorize' => 0,
        'insert_new' => '0',
        'update_non_existent' => 'skip',
        'skip_hash_check' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['node_update'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ring_price_update';
  $feeds_importer->config = array(
    'name' => 'Ring price update',
    'description' => 'Updates ring products (product displays) with new prices. Based on default node import.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'rings',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'sku',
            'target' => 'field_sku_master',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'price',
            'target' => 'field_price_base:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => '43',
        'authorize' => 0,
        'insert_new' => '0',
        'update_non_existent' => 'skip',
        'skip_hash_check' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ring_price_update'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'testimonials';
  $feeds_importer->config = array(
    'name' => 'Testimonials import',
    'description' => 'Import all testimonials. Based on default node import.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'testimonial',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'created',
            'target' => 'field_testimonial_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'fname',
            'target' => 'field_testimonial_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'path',
            'target' => 'path_alias',
            'pathauto_override' => 1,
            'language' => 'und',
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => '43',
        'authorize' => 0,
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'skip_hash_check' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['testimonials'] = $feeds_importer;

  return $export;
}
