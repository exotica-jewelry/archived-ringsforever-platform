<?php
/**
 * @file
 * trf_site_text.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_text_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|filter_autop|weight"] = -44;
  $overrides["filter.filtered_html.filters|filter_htmlcorrector|weight"] = -43;
  $overrides["filter.filtered_html.filters|filter_html|weight"] = -45;
  $overrides["filter.filtered_html.filters|filter_url|weight"] = -47;
  $overrides["filter.filtered_html.filters|image_resize_filter|weight"] = -46;
  $overrides["filter.filtered_html.filters|lazyloader_filter|weight"] = -42;
  $overrides["filter.filtered_html.filters|pathologic"] = array(
    'settings' => array(
      'local_paths' => '',
      'local_settings' => array(
        'local_paths' => '',
        'protocol_style' => 'full',
      ),
      'protocol_style' => 'full',
      'settings_source' => 'global',
    ),
    'status' => 1,
    'weight' => -48,
  );
  $overrides["filter.filtered_html.filters|typogrify|weight"] = -41;
  $overrides["filter.full_html.filters|filter_autop|weight"] = -45;
  $overrides["filter.full_html.filters|filter_htmlcorrector|weight"] = -44;
  $overrides["filter.full_html.filters|filter_url|weight"] = -47;
  $overrides["filter.full_html.filters|image_resize_filter|weight"] = -46;
  $overrides["filter.full_html.filters|lazyloader_filter|weight"] = -43;
  $overrides["filter.full_html.filters|pathologic"] = array(
    'settings' => array(
      'local_paths' => '',
      'local_settings' => array(
        'local_paths' => '',
        'protocol_style' => 'full',
      ),
      'protocol_style' => 'full',
      'settings_source' => 'global',
    ),
    'status' => 1,
    'weight' => -48,
  );
  $overrides["filter.full_html.filters|typogrify|weight"] = -42;

 return $overrides;
}
