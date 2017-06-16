<?php
/**
 * @file
 * trf_site_comments.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_comments_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__blog_post.value|extra_fields|display|disqus"] = array(
    'teaser' => array(
      'weight' => 1002,
      'visible' => FALSE,
    ),
    'default' => array(
      'weight' => 1002,
      'visible' => TRUE,
    ),
  );

 return $overrides;
}
