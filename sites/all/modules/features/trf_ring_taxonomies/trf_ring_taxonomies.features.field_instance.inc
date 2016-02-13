<?php
/**
 * @file
 * trf_ring_taxonomies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function trf_ring_taxonomies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-collection-field_cat_featured_rings'.
  $field_instances['taxonomy_term-collection-field_cat_featured_rings'] = array(
    'bundle' => 'collection',
    'deleted' => 0,
    'description' => '<p>Select one or more rings to highlight in this category. If this category is featured on the home page, the image of the first highlighted ring will be used.</p>',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_multiple_limit' => 1,
          'field_multiple_limit_offset' => 0,
          'links' => 0,
          'view_mode' => 'featured',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'links' => 0,
          'view_mode' => 'reference_view',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_cat_featured_rings',
    'ied_settings' => array(
      'display_fields' => 0,
    ),
    'label' => 'Highlighted rings',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'allow_new' => 0,
          'delete_references' => 0,
          'label_plural' => 'rings',
          'label_singular' => 'ring',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-collection-field_cat_title'.
  $field_instances['taxonomy_term-collection-field_cat_title'] = array(
    'bundle' => 'collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The title that should appear on this category\'s page. For instance, <em>Titanium rings with inlays</em> or <em>Men\'s titanium rings</em>.',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => 'page-title',
          'title_link' => '',
          'title_style' => 'h1',
        ),
        'type' => 'title_linked',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_cat_title',
    'label' => 'Title to display',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-collection-field_home_feature_bool'.
  $field_instances['taxonomy_term-collection-field_home_feature_bool'] = array(
    'bundle' => 'collection',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_home_feature_bool',
    'label' => 'Feature this category on the home page',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Select one or more rings to highlight in this category. If this category is featured on the home page, the image of the first highlighted ring will be used.</p>');
  t('Feature this category on the home page');
  t('Highlighted rings');
  t('The title that should appear on this category\'s page. For instance, <em>Titanium rings with inlays</em> or <em>Men\'s titanium rings</em>.');
  t('Title to display');

  return $field_instances;
}
