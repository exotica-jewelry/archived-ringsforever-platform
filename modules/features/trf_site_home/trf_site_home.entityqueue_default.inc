<?php
/**
 * @file
 * trf_site_home.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function trf_site_home_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'taxonomy_featured';
  $queue->label = 'Featured categories';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'brand' => 'brand',
      'collection' => 'collection',
    ),
    'min_size' => '3',
    'max_size' => '15',
    'act_as_queue' => 1,
  );
  $export['taxonomy_featured'] = $queue;

  return $export;
}
