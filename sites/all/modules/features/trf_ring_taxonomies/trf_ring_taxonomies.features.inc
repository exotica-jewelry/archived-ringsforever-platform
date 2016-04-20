<?php
/**
 * @file
 * trf_ring_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_ring_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function trf_ring_taxonomies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_taxonomy_default_vocabularies_alter().
 */
function trf_ring_taxonomies_taxonomy_default_vocabularies_alter(&$data) {
  if (isset($data['collection'])) {
    $data['collection']['description'] = 'Collections such as themes, men\'s and women\'s, gemstones, color, commitment rings, etc.'; /* WAS: '' */
    $data['collection']['rdf_mapping'] = array(
      'description' => array(
        'predicates' => array(
          0 => 'rdfs:comment',
        ),
      ),
      'name' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'rdftype' => array(
        0 => 'skos:ConceptScheme',
      ),
    ); /* WAS: '' */
    $data['collection']['weight'] = -10; /* WAS: 0 */
  }
  if (isset($data['color'])) {
    $data['color']['rdf_mapping'] = array(
      'description' => array(
        'predicates' => array(
          0 => 'rdfs:comment',
        ),
      ),
      'name' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'rdftype' => array(
        0 => 'skos:ConceptScheme',
      ),
    ); /* WAS: '' */
    $data['color']['weight'] = -8; /* WAS: 0 */
  }
  if (isset($data['elements'])) {
    $data['elements']['rdf_mapping'] = array(
      'description' => array(
        'predicates' => array(
          0 => 'rdfs:comment',
        ),
      ),
      'name' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'rdftype' => array(
        0 => 'skos:ConceptScheme',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['width'])) {
    $data['width']['rdf_mapping'] = array(
      'description' => array(
        'predicates' => array(
          0 => 'rdfs:comment',
        ),
      ),
      'name' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'rdftype' => array(
        0 => 'skos:ConceptScheme',
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_ring_taxonomies_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_taxonomy_term__collection'])) {
    $data['field_bundle_settings_taxonomy_term__collection']->value['extra_fields']['display']['description']['featured'] = array(
      'weight' => 2,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_taxonomy_term__collection']->value['extra_fields']['form']['description'] = array(
      'weight' => 3,
    ); /* WAS: '' */
    $data['field_bundle_settings_taxonomy_term__collection']->value['extra_fields']['form']['name'] = array(
      'weight' => 0,
    ); /* WAS: '' */
    $data['field_bundle_settings_taxonomy_term__collection']->value['extra_fields']['form']['path'] = array(
      'weight' => 5,
    ); /* WAS: '' */
    $data['field_bundle_settings_taxonomy_term__collection']->value['view_modes']['add_to_cart_form'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_taxonomy_term__collection']->value['view_modes']['featured'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
}
