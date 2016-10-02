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
  $overrides["filter.filtered_html.filters|filter_autop|weight"] = -45;
  $overrides["filter.filtered_html.filters|filter_htmlcorrector|weight"] = -44;
  $overrides["filter.filtered_html.filters|filter_html|weight"] = -46;
  $overrides["filter.filtered_html.filters|image_resize_filter"] = array(
    'settings' => array(
      'image_locations' => array(
        'local' => 'local',
        'remote' => 0,
      ),
      'link' => 0,
      'link_class' => '',
      'link_rel' => '',
    ),
    'status' => 1,
    'weight' => -47,
  );
  $overrides["filter.filtered_html.filters|lazyloader_filter|weight"] = -43;
  $overrides["filter.filtered_html.filters|typogrify|weight"] = -42;
  $overrides["filter.full_html.filters|filter_autop|weight"] = -46;
  $overrides["filter.full_html.filters|filter_htmlcorrector|weight"] = -45;
  $overrides["filter.full_html.filters|image_resize_filter"] = array(
    'settings' => array(
      'image_locations' => array(
        'local' => 'local',
        'remote' => 0,
      ),
      'link' => 0,
      'link_class' => '',
      'link_rel' => '',
    ),
    'status' => 1,
    'weight' => -47,
  );
  $overrides["filter.full_html.filters|lazyloader_filter|weight"] = -44;
  $overrides["filter.full_html.filters|typogrify|weight"] = -43;

 return $overrides;
}
