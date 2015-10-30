<?php
/**
 * @file
 * trf_user_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function trf_user_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: store manager.
  $roles['store manager'] = array(
    'name' => 'store manager',
    'weight' => 2,
  );

  return $roles;
}
