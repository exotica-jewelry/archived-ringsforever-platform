<?php
/**
 * @file
 * trf_site_analytics.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_analytics_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access google analytics reports'.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'admin ga push'.
  $permissions['admin ga push'] = array(
    'name' => 'admin ga push',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ga_push',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer google analytics reports api'.
  $permissions['administer google analytics reports api'] = array(
    'name' => 'administer google analytics reports api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_analytics_reports_api',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  return $permissions;
}
