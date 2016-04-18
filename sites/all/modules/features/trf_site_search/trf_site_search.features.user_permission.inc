<?php
/**
 * @file
 * trf_site_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'use search_api_sorts'.
  $permissions['use search_api_sorts'] = array(
    'name' => 'use search_api_sorts',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_sorts',
  );

  return $permissions;
}
