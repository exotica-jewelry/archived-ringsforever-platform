<?php
/**
 * @file
 * ringsforever_migrate.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ringsforever_migrate_user_default_permissions() {
  $permissions = array();

  // Exported permission: view any commerce_product entity of bundle rings.
  $permissions['view any commerce_product entity of bundle rings'] = array(
    'name' => 'view any commerce_product entity of bundle rings',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle rings.
  $permissions['view own commerce_product entities of bundle rings'] = array(
    'name' => 'view own commerce_product entities of bundle rings',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
