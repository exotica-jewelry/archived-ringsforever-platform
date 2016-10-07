<?php
/**
 * @file
 * trf_user_settings.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_user_settings_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.user_mail_password_reset_body.value"] = '[user:name],
  
  A request to reset the password for your account has been made at TitaniumRingsForever.com.
  
  You may now log in by clicking this link or copying and pasting it to your browser:
  
  [user:one-time-login-url]
  
  This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.';

 return $overrides;
}
