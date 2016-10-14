<?php
/**
 * @file
 * trf_site_security.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_security_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer hide fatal error'.
  $permissions['administer hide fatal error'] = array(
    'name' => 'administer hide fatal error',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hide_php_fatal_error',
  );

  // Exported permission: 'administer seckit'.
  $permissions['administer seckit'] = array(
    'name' => 'administer seckit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'seckit',
  );

  // Exported permission: 'use PHP for label patterns'.
  $permissions['use PHP for label patterns'] = array(
    'name' => 'use PHP for label patterns',
    'roles' => array(),
    'module' => 'auto_entitylabel',
  );

  // Exported permission: 'use PHP for service visibility'.
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(),
    'module' => 'service_links',
  );

  return $permissions;
}
