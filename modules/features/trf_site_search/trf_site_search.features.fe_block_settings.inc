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
        'weight' => -46,
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

  $export['facetapi-MjplL8YFjgfpB0BofBtFkGCDuU73WZbo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'MjplL8YFjgfpB0BofBtFkGCDuU73WZbo',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings
titanium-rings/*',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_theme',
        'weight' => 0,
      ),
      'trf' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -41,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by keyword',
    'visibility' => 1,
  );

  $export['facetapi-RaRggymYJWiRdxA9HqiEmx2BSbtQZSdk'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'RaRggymYJWiRdxA9HqiEmx2BSbtQZSdk',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings
titanium-rings/*',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'commerce_kickstart_theme',
        'weight' => 0,
      ),
      'trf' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -43,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -23,
      ),
    ),
    'title' => 'Filter by color',
    'visibility' => 1,
  );

  $export['facetapi-TFVaQKSORCPdrULxfXDnLQZ40xH0Nper'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'TFVaQKSORCPdrULxfXDnLQZ40xH0Nper',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings
titanium-rings/*',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'commerce_kickstart_theme',
        'weight' => -1,
      ),
      'trf' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -45,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -22,
      ),
    ),
    'title' => 'Filter by price',
    'visibility' => 1,
  );

  $export['facetapi-ljmT8Ts69OP0ErEpRJXGjkCr6c79Qs0Z'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ljmT8Ts69OP0ErEpRJXGjkCr6c79Qs0Z',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products',
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
        'weight' => -27,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-vUYGSexnUUscrjhcUt8k5AIsnGVrjJho'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vUYGSexnUUscrjhcUt8k5AIsnGVrjJho',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings
titanium-rings/*',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_theme',
        'weight' => 0,
      ),
      'trf' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -42,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter by width',
    'visibility' => 1,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
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

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search-sorts',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => 'products
products/*
taxonomy/term/*',
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
        'weight' => -47,
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
