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

  // Exported permission: 'access environment indicator development'.
  $permissions['access environment indicator development'] = array(
    'name' => 'access environment indicator development',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator live'.
  $permissions['access environment indicator live'] = array(
    'name' => 'access environment indicator live',
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

  // Exported permission: 'exclude from message filtering'.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: 'view error messages'.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'store manager' => 'store manager',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: 'view status messages'.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'store manager' => 'store manager',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: 'view warning messages'.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'store manager' => 'store manager',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
