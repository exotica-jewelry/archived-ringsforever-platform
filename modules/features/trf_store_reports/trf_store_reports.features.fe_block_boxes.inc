<?php
/**
 * @file
 * trf_store_reports.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_store_reports_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Commerce Reports link';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'commerce_reports_link';
  $fe_block_boxes->body = '<p><strong><a href="/admin/commerce/reports">View the complete sales reports dashboard &raquo;</a></strong></p>
';

  $export['commerce_reports_link'] = $fe_block_boxes;

  return $export;
}
