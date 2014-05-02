<?php
/**
 * @file
 * trf_similarproducts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_similarproducts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-similarproducts-sp_collection'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'similarproducts-sp_collection',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'commerce_kickstart_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_admin',
        'weight' => '0',
      ),
      'commerce_kickstart_theme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'commerce_kickstart_theme',
        'weight' => '-30',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-similarproducts-sp_color'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'similarproducts-sp_color',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'commerce_kickstart_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_admin',
        'weight' => '0',
      ),
      'commerce_kickstart_theme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'commerce_kickstart_theme',
        'weight' => '-31',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-similarproducts-sp_feature'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'similarproducts-sp_feature',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'commerce_kickstart_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_admin',
        'weight' => '0',
      ),
      'commerce_kickstart_theme' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'commerce_kickstart_theme',
        'weight' => '-29',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}