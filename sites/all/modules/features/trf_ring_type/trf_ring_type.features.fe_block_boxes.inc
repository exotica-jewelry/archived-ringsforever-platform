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
  $fe_block_boxes->body = 'A <a href="#">variety of colors</a> are available on this ring. <a href="#">Contact us</a> if you would like something other than what is shown.';

  $export['ring_colors'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Free';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_free';
  $fe_block_boxes->body = 'Includes <a href="#">free shipping</a>, <a href="#">free engraving</a> and <a href="#">free resizing</a>.';

  $export['ring_free'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ring pages: Sizing';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ring_sizing';
  $fe_block_boxes->body = 'We\'re committed to a <a href="#">guaranteed perfect fit</a> for your titanium wedding ring.

Because sizing equipment used by jewelers can vary a lot, once you place an order we\'ll <a href="#">mail finger sizers to you</a> in order to ensure your ring fits perfectly.';

  $export['ring_sizing'] = $fe_block_boxes;

  return $export;
}
