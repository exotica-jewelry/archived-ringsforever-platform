<?php
/**
 * @file
 * trf_user_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_user_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_user_settings_strongarm_alter(&$data) {
  if (isset($data['user_mail_password_reset_body'])) {
    $data['user_mail_password_reset_body']->value = '[user:name],
    
    A request to reset the password for your account has been made at TitaniumRingsForever.com.
    
    You may now log in by clicking this link or copying and pasting it to your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.'; /* WAS: '[user:name],
    
    A request to reset the password for your account has been made at TitaniumRingsForever.com.
    
    You may now log in by clicking this link or copying and pasting it to your browser:
    
    [user:one-time-login-url]
    
    This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.' */
  }
}
