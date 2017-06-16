<?php

/**
 * HTML preprocess hook
 */
function trf_preprocess_html(&$vars) {

  // Adding Google fonts
  drupal_add_css('//brick.a.ssl.fastly.net/Lora:400i/Roboto:500,300,700,900', array(
    'type' => 'external',
    'scope' => 'header',
    'weight' => '-1'
  ));

  // Adding theme scripts

    // fastclick.js
    drupal_add_js(drupal_get_path('theme', 'trf') . '/js/fastclick.js', array(
      'scope' => 'header',
      'weight' => '5'
    ));

    // jQuery Tooltipster
    drupal_add_js(drupal_get_path('theme', 'trf') . '/js/jquery.tooltipster.min.js', array(
      'scope' => 'header',
      'weight' => '10'
    ));

    // Theme JS: this should be last
    drupal_add_js(drupal_get_path('theme', 'trf') . '/js/trf.js', array(
      'scope' => 'header',
      'weight' => '15'
    ));
}

/**
 * Alter the contact page.
 *
 * Implements hook_form_FORM_ID_alter()
 * @see https://drupal.org/node/853266#comment-4609888
 */
function trf_form_contact_site_form_alter(&$form, &$form_state) {
  drupal_set_title('Contact Chris and Sandy Boothe');
  $form['mail']['#title'] = t('Your email address');
}

/**
 * Customize the empty cart message on the shopping cart page.
 *
 * Implements theme_commerce_cart_empty_block()
 * @see commerce_cart.module lines 790-795.
 */
function trf_commerce_cart_empty_page() {
  return '<div class="cart-empty-page"><p>Your shopping cart is empty.</p><p><a href="/products" title="View all titanium wedding rings">Browse our complete catalog of titanium wedding rings.</a></p></div>';
}

/**
 * (Blockify) Returns the rendered logo.
 *
 * @ingroup themeable
 */
function trf_blockify_logo($variables) {
  $site_name = filter_xss_admin(variable_get('site_name', 'Drupal'));

  // Strip the base_path from the beginning of the logo path.
  $path = preg_replace('|^' . base_path() . '|', '', $variables['logo_path']);

  $image = array(
    '#theme' => 'image',
    '#path' => $path,
    '#attributes' => array('class' => 'logo-img'),
    '#alt' => t('!site_name', array(
      '!site_name' => $site_name,
    ))
  );

  return l(render($image), '<front>', array(
    'html' => TRUE,
    'attributes' => array(
      'rel' => 'home',
      'title' => t('Return to the !site_name home page', array(
        '!site_name' => $site_name,
      )),
    ),
  ));
}

/**
 * (Blockify) Returns the rendered page title.
 *
 * @ingroup themeable
 */
function trf_blockify_page_title($variables) {
  if ($variables['page_title'] !== '') {
    $title_attributes_array = array(
      'class' => array('title page-title'),
      'id' => array('page_title'),
    );
    $title_attributes = drupal_attributes($title_attributes_array);

    return '<h1' . $title_attributes . '>' . $variables['page_title'] . '</h1>';
  }
}
