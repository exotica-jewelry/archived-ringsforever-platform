<?php
/**
 * @file
 * trf_ring_taxonomies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_ring_taxonomies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in collection'.
  $permissions['delete terms in collection'] = array(
    'name' => 'delete terms in collection',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in color'.
  $permissions['delete terms in color'] = array(
    'name' => 'delete terms in color',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in collection'.
  $permissions['edit terms in collection'] = array(
    'name' => 'edit terms in collection',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in color'.
  $permissions['edit terms in color'] = array(
    'name' => 'edit terms in color',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
