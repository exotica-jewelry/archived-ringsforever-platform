<?php
/**
 * @file
 * trf_site_settings.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function trf_site_settings_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'development';
  $environment->name = 'Development';
  $environment->regexurl = 'trf.dev';
  $environment->settings = array(
    'color' => '#1fd15d',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 1,
  );
  $export['development'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live';
  $environment->name = 'Live';
  $environment->regexurl = 'titaniumringsforever.com';
  $environment->settings = array(
    'color' => '#d12d1f',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 1,
  );
  $export['live'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'staging';
  $environment->name = 'Staging: MFPL';
  $environment->regexurl = 'new.titaniumringsforever.com';
  $environment->settings = array(
    'color' => '#fff439',
    'text_color' => '#000000',
    'weight' => '',
    'position' => 'top',
    'fixed' => 1,
  );
  $export['staging'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'staging_platform';
  $environment->name = 'Staging: Platform.sh';
  $environment->regexurl = '^[\\w.-]+\\.us.platform.sh';
  $environment->settings = array(
    'color' => '#fff439',
    'text_color' => '#000000',
    'weight' => '',
    'position' => 'top',
    'fixed' => 1,
  );
  $export['staging_platform'] = $environment;

  return $export;
}
