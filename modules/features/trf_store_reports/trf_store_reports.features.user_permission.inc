<?php
/**
 * @file
 * trf_store_reports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_store_reports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access commerce reports'.
  $permissions['access commerce reports'] = array(
    'name' => 'access commerce reports',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'commerce_reports',
  );

  // Exported permission: 'access example charts'.
  $permissions['access example charts'] = array(
    'name' => 'access example charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'administer charts'.
  $permissions['administer charts'] = array(
    'name' => 'administer charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  return $permissions;
}
