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
  drupal_add_js(drupal_get_path('theme', 'trf') . '/js/trf.js', array(
    'scope' => 'header',
    'weight' => '15'
  ));
}

/**
 * Implements hook_form_FORM_ID_alter()
 * @see https://drupal.org/node/853266#comment-4609888
 */
function trf_form_contact_site_form_alter(&$form, &$form_state) {
  $site_name = $GLOBALS['conf']['site_name'];
  drupal_set_title('Contact ' . $site_name);
}
