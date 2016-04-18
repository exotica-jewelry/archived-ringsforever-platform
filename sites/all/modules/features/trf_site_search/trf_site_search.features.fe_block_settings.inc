<?php
/**
 * @file
 * trf_site_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_site_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['current_search-kickstart_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'kickstart_search',
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => 'breadcrumb',
        'status' => 1,
        'theme' => 'commerce_kickstart_theme',
        'weight' => -10,
      ),
      'trf' => array(
        'region' => 'breadcrumb',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -10,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -32,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['current_search-standard'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'standard',
    'module' => 'current_search',
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
        'weight' => -30,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search-sorts',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => 'products',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'commerce_kickstart_theme',
        'weight' => -35,
      ),
      'trf' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -45,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
