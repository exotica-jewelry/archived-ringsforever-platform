<?php
/**
 * @file
 * trf_site_seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit seo_checklist checklistapi checklist'.
  $permissions['edit seo_checklist checklistapi checklist'] = array(
    'name' => 'edit seo_checklist checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: 'view seo_checklist checklistapi checklist'.
  $permissions['view seo_checklist checklistapi checklist'] = array(
    'name' => 'view seo_checklist checklistapi checklist',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'checklistapi',
  );

  return $permissions;
}
