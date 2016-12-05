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

  // Exported permission: 'administer embed buttons'.
  $permissions['administer embed buttons'] = array(
    'name' => 'administer embed buttons',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_embed',
  );

  // Exported permission: 'administer lazyloader'.
  $permissions['administer lazyloader'] = array(
    'name' => 'administer lazyloader',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lazyloader',
  );

  return $permissions;
}
