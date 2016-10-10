<?php
/**
 * @file
 * trf_site_contact.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function trf_site_contact_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-contact_intro'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'contact_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact',
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
        'weight' => -48,
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

  return $export;
}
