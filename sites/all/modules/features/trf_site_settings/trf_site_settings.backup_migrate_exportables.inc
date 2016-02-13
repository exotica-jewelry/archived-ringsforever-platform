<?php
/**
 * @file
 * trf_site_settings.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function trf_site_settings_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'default';
  $item->name = 'Default Settings';
  $item->filename = 'trf';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => 'web@titaniumringsforever.com',
    'notify_failure_enable' => 0,
    'notify_failure_email' => 'web@titaniumringsforever.com',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'Titanium Rings Forever is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
        'use_mysqldump' => 0,
      ),
      'db:old:default' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'accesslog' => 'accesslog',
          'cache' => 'cache',
          'cache_block' => 'cache_block',
          'cache_content' => 'cache_content',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'devel_queries' => 'devel_queries',
          'devel_times' => 'devel_times',
          'search_dataset' => 'search_dataset',
          'search_index' => 'search_index',
          'search_total' => 'search_total',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 0,
        'use_mysqldump' => 0,
      ),
    ),
  );
  $export['default'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function trf_site_settings_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = '1fca2ca1cde5f675b1a97e3aa049b33b';
  $item->name = 'Default Schedule';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '0';
  $item->profile_id = 'default';
  $item->keep = 21;
  $item->period = 43200;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['1fca2ca1cde5f675b1a97e3aa049b33b'] = $item;

  return $export;
}
