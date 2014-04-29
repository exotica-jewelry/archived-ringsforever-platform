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

  $export['views-similarproducts-similarproducts'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'similarproducts-similarproducts',
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
        'region' => '',
        'status' => 0,
        'theme' => 'commerce_kickstart_theme',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
