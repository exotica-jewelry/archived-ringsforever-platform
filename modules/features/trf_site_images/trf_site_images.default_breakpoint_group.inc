<?php
/**
 * @file
 * trf_site_images.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function trf_site_images_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'trf';
  $breakpoint_group->name = 'Titanium Rings Forever';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.trf.tv',
    1 => 'breakpoints.theme.trf.wide',
    2 => 'breakpoints.theme.trf.narrow',
    3 => 'breakpoints.theme.trf.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['trf'] = $breakpoint_group;

  return $export;
}
