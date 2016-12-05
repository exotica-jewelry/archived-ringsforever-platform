<?php
/**
 * @file
 * trf_site_home.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_home_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'update taxonomy_featured entityqueue'.
  $permissions['update taxonomy_featured entityqueue'] = array(
    'name' => 'update taxonomy_featured entityqueue',
    'roles' => array(
      'store manager' => 'store manager',
    ),
    'module' => 'entityqueue',
  );

  return $permissions;
}
