<?php
/**
 * @file
 * trf_ring_catalog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_ring_catalog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-display_products-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-display_products-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'commerce_kickstart_theme',
        'weight' => 0,
      ),
      'trf' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -43,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -30,
      ),
    ),
    'title' => 'Search our titanium wedding rings',
    'visibility' => 0,
  );

  return $export;
}
