<?php
/**
 * @file
 * trf_ring_type.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_ring_type_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Colors';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_colors';
  $fe_block_boxes->body = 'A <a class="colorbox-node" href="/color-spectrum-possibilities-your-ring">variety of colors</a> are available on this ring. <a href="/contact">Contact us</a> if you would like something other than what is shown.';

  $export['ring_colors'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Free';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_free';
  $fe_block_boxes->body = 'Includes <a class="colorbox-node" href="/shipping-information" title="Every order comes with free shipping in the U.S.">free shipping</a>, <a class="colorbox-node" href="/engraving-inside-outside-your-titanium-wedding-ring" title="Free inside-ring engraving makes a ring your own!">free engraving</a> and <a class="colorbox-node" href="/sizing-resizing-our-guarantee" title="Our rings are guaranteed to fit, and we\'ll resize any that don\'t">free resizing</a>.';

  $export['ring_free'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Gemstones (add)';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_gemstones_add';
  $fe_block_boxes->body = 'You can <a class="colorbox-node" href="/titanium-rings-diamonds-rubies-sapphires-more">add one or more gemstones</a> to this ring. <a href="/contact">Contact us</a> for details.';

  $export['ring_gemstones_add'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Gemstones (other)';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_gemstones_other';
  $fe_block_boxes->body = 'Other <a class="colorbox-node" href="/titanium-rings-diamonds-rubies-sapphires-more">types and sizes of gemstones are available</a> for this ring. <a href="/contact">Contact us</a> for details.';

  $export['ring_gemstones_other'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Similar rings header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_similar_header';
  $fe_block_boxes->body = '<h2 class="block-title">Other titanium rings you may like</h2>';

  $export['ring_similar_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Sizing';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_sizing';
  $fe_block_boxes->body = '<p>We\'re committed to a <a class="colorbox-node" href="/sizing-resizing-our-guarantee">guaranteed perfect fit</a> for your titanium wedding ring. Because sizing equipment used by jewelers can vary a lot, once you place an order we\'ll <a class="colorbox-node" href="/where-do-i-select-my-ring-size">mail finger sizers to you</a> in order to ensure your ring fits perfectly.</p>';

  $export['ring_sizing'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Width';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_width';
  $fe_block_boxes->body = '<p>Select your desired width for this ring.</p>';

  $export['ring_width'] = $fe_block_boxes;

  return $export;
}
