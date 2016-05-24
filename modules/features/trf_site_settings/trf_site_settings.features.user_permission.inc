<?php
/**
 * @file
 * trf_site_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator development_vagrant'.
  $permissions['access environment indicator development_vagrant'] = array(
    'name' => 'access environment indicator development_vagrant',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator live'.
  $permissions['access environment indicator live'] = array(
    'name' => 'access environment indicator live',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator live_platform'.
  $permissions['access environment indicator live_platform'] = array(
    'name' => 'access environment indicator live_platform',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator staging_mfpl'.
  $permissions['access environment indicator staging_mfpl'] = array(
    'name' => 'access environment indicator staging_mfpl',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator staging_platform'.
  $permissions['access environment indicator staging_platform'] = array(
    'name' => 'access environment indicator staging_platform',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  return $permissions;
}
