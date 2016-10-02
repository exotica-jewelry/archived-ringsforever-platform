<?php
/**
 * @file
 * trf_site_text.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_text_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
