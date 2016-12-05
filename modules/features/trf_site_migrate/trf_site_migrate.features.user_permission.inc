<?php
/**
 * @file
 * trf_site_migrate.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trf_site_migrate_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(),
    'module' => 'migrate',
  );

  // Exported permission: 'clear commerce_importer feeds'.
  $permissions['clear commerce_importer feeds'] = array(
    'name' => 'clear commerce_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node_update feeds'.
  $permissions['clear node_update feeds'] = array(
    'name' => 'clear node_update feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ring_price_update feeds'.
  $permissions['clear ring_price_update feeds'] = array(
    'name' => 'clear ring_price_update feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear testimonials feeds'.
  $permissions['clear testimonials feeds'] = array(
    'name' => 'clear testimonials feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import commerce_importer feeds'.
  $permissions['import commerce_importer feeds'] = array(
    'name' => 'import commerce_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import node_update feeds'.
  $permissions['import node_update feeds'] = array(
    'name' => 'import node_update feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ring_price_update feeds'.
  $permissions['import ring_price_update feeds'] = array(
    'name' => 'import ring_price_update feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import testimonials feeds'.
  $permissions['import testimonials feeds'] = array(
    'name' => 'import testimonials feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'tamper commerce_importer'.
  $permissions['tamper commerce_importer'] = array(
    'name' => 'tamper commerce_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper node'.
  $permissions['tamper node'] = array(
    'name' => 'tamper node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper node_update'.
  $permissions['tamper node_update'] = array(
    'name' => 'tamper node_update',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ring_price_update'.
  $permissions['tamper ring_price_update'] = array(
    'name' => 'tamper ring_price_update',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper testimonials'.
  $permissions['tamper testimonials'] = array(
    'name' => 'tamper testimonials',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock commerce_importer feeds'.
  $permissions['unlock commerce_importer feeds'] = array(
    'name' => 'unlock commerce_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'store manager' => 'store manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node_update feeds'.
  $permissions['unlock node_update feeds'] = array(
    'name' => 'unlock node_update feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ring_price_update feeds'.
  $permissions['unlock ring_price_update feeds'] = array(
    'name' => 'unlock ring_price_update feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock testimonials feeds'.
  $permissions['unlock testimonials feeds'] = array(
    'name' => 'unlock testimonials feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
