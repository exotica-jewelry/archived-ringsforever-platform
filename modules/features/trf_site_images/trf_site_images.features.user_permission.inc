<?php
/**
 * @file
 * trf_site_images.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_images_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'breakpoints',
  );

  return $permissions;
}
