<?php
/**
 * @file
 * trf_site_analytics.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_site_analytics_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-2e471cea8459491b84c00c691114ef5c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2e471cea8459491b84c00c691114ef5c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
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
        'weight' => 0,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7196cbb81df1d17ca0cd459c31c8eac4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7196cbb81df1d17ca0cd459c31c8eac4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
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
        'weight' => 0,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
