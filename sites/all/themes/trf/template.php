<?php

/**
 * HTML preprocess hook
 */
function trf_preprocess_html(&$variables) {
  // Adding Google fonts
  drupal_add_css('//fonts.googleapis.com/css?family=Lora:400italic|Roboto:500,300,700,900', array(
    'type' => 'external',
    'scope' => 'header',
    'weight' => '-1'
  ));
  // Adding theme scripts
  // drupal_add_js(drupal_get_path('theme', 'trf') . '/scripts/webbykat.js', array(
  //   'scope' => 'header',
  //   'weight' => '15'
  // ));
}

/**
 * Implements hook_form_FORM_ID_alter()
 * @see https://drupal.org/node/853266#comment-4609888
 */
function trf_form_contact_site_form_alter(&$form, &$form_state) {
  $site_name = $GLOBALS['conf']['site_name'];
  drupal_set_title('Contact ' . $site_name);
}

/**
 * Implements hook_preprocess_views_view().
 *
 * Overrides commerce_kickstart_taxonomy to add "title to display" in
 * view header
 */
function trf_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  if ($view->name == 'collection_products') {
    if ($view->current_display == 'page') {
      // Keep the previous theming.
      $vars['classes_array'][] = 'view-collection-taxonomy-term';
      $tid = $view->args['0'];
      $term = taxonomy_term_load($tid);
      $vars['collection_title'] = $term->name;
      $vars['collection_title_display'] = $term->field_cat_title['und'][0]['safe_value'];
    }
  }
}
