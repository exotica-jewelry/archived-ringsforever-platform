<?php
/**
 * @file
 * trf_store_reports.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_store_reports_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-commerce_reports_link'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'commerce_reports_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'admin/commerce/orders',
    'roles' => array(
      'administrator' => 3,
      'store manager' => 4,
    ),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_theme',
        'weight' => 0,
      ),
      'trf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf',
        'weight' => -33,
      ),
      'trf_admin' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'trf_admin',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
