<?php
/**
 * @file
 * trf_site_images.default_entity_embed_configurations.inc
 */

/**
 * Implements hook_default_entity_embed_configuration().
 */
function trf_site_images_default_entity_embed_configuration() {
  $export = array();

  $configuration = new stdClass();
  $configuration->disabled = FALSE; /* Edit this to true to make a default configuration disabled initially */
  $configuration->api_version = 1;
  $configuration->admin_title = 'Ring';
  $configuration->name = 'ring';
  $configuration->button_label = 'Ring';
  $configuration->entity_type = 'node';
  $configuration->entity_type_bundles = array(
    'rings' => 'rings',
  );
  $configuration->button_icon_fid = 3234;
  $export['ring'] = $configuration;

  return $export;
}
