<?php
/**
 * @file
 * trf_site_security.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_security_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.use PHP for tracking visibility.roles|administrator"]["DELETED"] = TRUE;

 return $overrides;
}
