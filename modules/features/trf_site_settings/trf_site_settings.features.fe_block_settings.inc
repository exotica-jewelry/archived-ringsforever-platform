<?php
/**
 * @file
 * trf_site_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_site_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['blockify-blockify-actions'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-actions',
    'module' => 'blockify',
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
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -54,
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

  $export['blockify-blockify-feed-icons'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-feed-icons',
    'module' => 'blockify',
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
        'weight' => -47,
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

  $export['blockify-blockify-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-logo',
    'module' => 'blockify',
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
        'region' => 'branding',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -55,
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

  $export['blockify-blockify-messages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-messages',
    'module' => 'blockify',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -55,
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

  $export['blockify-blockify-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-page-title',
    'module' => 'blockify',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -56,
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

  $export['blockify-blockify-site-name'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-site-name',
    'module' => 'blockify',
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
        'region' => 'branding',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -56,
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

  $export['blockify-blockify-site-slogan'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-site-slogan',
    'module' => 'blockify',
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
        'region' => 'menu',
        'status' => 1,
        'theme' => 'trf',
        'weight' => -56,
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

  $export['blockify-blockify-tabs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-tabs',
    'module' => 'blockify',
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
        'weight' => -44,
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
