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

  $export['facetapi-4MnuqsU9U0F81nBMXnQt67Y06gEKf0TG'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4MnuqsU9U0F81nBMXnQt67Y06gEKf0TG',
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
        'weight' => -20,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-ARkvnenCSdjpeJ0Du1THMhhmYXUcRKIZ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ARkvnenCSdjpeJ0Du1THMhhmYXUcRKIZ',
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
        'weight' => -24,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-HfJZL5dTPBfTFWKGwiEbeOwXzN1I2c72'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'HfJZL5dTPBfTFWKGwiEbeOwXzN1I2c72',
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
        'weight' => -22,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -24,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-KAx5oauQc7V1T59j32aqbHSfIoIPGRDY'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'KAx5oauQc7V1T59j32aqbHSfIoIPGRDY',
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
        'weight' => -35,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-MjplL8YFjgfpB0BofBtFkGCDuU73WZbo'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'MjplL8YFjgfpB0BofBtFkGCDuU73WZbo',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-Nm4CRgtowO1tVgxZjXwsqLYvUReoez0Q'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Nm4CRgtowO1tVgxZjXwsqLYvUReoez0Q',
    'module' => 'facetapi',
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
        'weight' => -23,
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

  $export['facetapi-PkQ0BcHQAoCQ0kNLdvPxh1jd20OztqL3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'PkQ0BcHQAoCQ0kNLdvPxh1jd20OztqL3',
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
        'weight' => -25,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-RaRggymYJWiRdxA9HqiEmx2BSbtQZSdk'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'RaRggymYJWiRdxA9HqiEmx2BSbtQZSdk',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
    'title' => 'Colors',
    'visibility' => 1,
  );

  $export['facetapi-TFVaQKSORCPdrULxfXDnLQZ40xH0Nper'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'TFVaQKSORCPdrULxfXDnLQZ40xH0Nper',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
    'title' => 'Price',
    'visibility' => 1,
  );

  $export['facetapi-WdSr4XKt0SrUv225hgcm2Iy1SQmdtGO8'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'WdSr4XKt0SrUv225hgcm2Iy1SQmdtGO8',
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
        'weight' => -33,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-jz9zjwz2szWr1worAU9IyJvIlUtWbzEj'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'jz9zjwz2szWr1worAU9IyJvIlUtWbzEj',
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
        'weight' => -34,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-k2i1LZFEaYtSE0qAIOjO2ht0a7HlC8Vr'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'k2i1LZFEaYtSE0qAIOjO2ht0a7HlC8Vr',
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
        'weight' => -26,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-kzV6cVQWPWigoxvJX1AmTZSDoEgBakN3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'kzV6cVQWPWigoxvJX1AmTZSDoEgBakN3',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
        'weight' => -40,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-ljmT8Ts69OP0ErEpRJXGjkCr6c79Qs0Z'] = array(
    'cache' => -1,
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

  $export['facetapi-qROfiZEtQEAfwoMRWSGPpKFBROMPdjks'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qROfiZEtQEAfwoMRWSGPpKFBROMPdjks',
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
        'weight' => -43,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-qaiJFFWcONPdab410d19wMBxBLUpWihn'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qaiJFFWcONPdab410d19wMBxBLUpWihn',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
        'weight' => -39,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-vUYGSexnUUscrjhcUt8k5AIsnGVrjJho'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'vUYGSexnUUscrjhcUt8k5AIsnGVrjJho',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
    'title' => 'Available widths',
    'visibility' => 1,
  );

  $export['facetapi-zdzpxOsVNBUrRCx1INU01vdSfFgSPuP0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'zdzpxOsVNBUrRCx1INU01vdSfFgSPuP0',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products
titanium-rings/collections
titanium-rings/collections/*',
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
        'weight' => -44,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => -26,
      ),
    ),
    'title' => 'Collections',
    'visibility' => 1,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
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
