<?php
/**
 * @file
 * trf_store_checkout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_store_checkout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*',
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
        'weight' => 1,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_checkout_progress-indication'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'indication',
    'module' => 'commerce_checkout_progress',
    'node_types' => array(),
    'pages' => 'checkout/*
cart',
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
        'weight' => -47,
      ),
      'trf_admin' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'trf_admin',
        'weight' => -41,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-shopping_cart-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shopping_cart-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'cart
checkout
checkout/*',
    'roles' => array(),
    'themes' => array(
      'commerce_kickstart_theme' => array(
        'region' => 'user_second',
        'status' => 1,
        'theme' => 'commerce_kickstart_theme',
        'weight' => 0,
      ),
      'trf' => array(
        'region' => 'breadcrumb',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -48,
      ),
      'trf_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trf_admin',
        'weight' => 33,
      ),
    ),
    'title' => 'Shopping cart',
    'visibility' => 0,
  );

  return $export;
}
