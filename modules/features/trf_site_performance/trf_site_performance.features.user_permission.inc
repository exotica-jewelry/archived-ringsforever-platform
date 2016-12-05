<?php
/**
 * @file
 * trf_site_performance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_performance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advagg',
  );

  return $permissions;
}
