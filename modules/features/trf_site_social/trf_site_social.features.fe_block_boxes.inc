<?php
/**
 * @file
 * trf_site_social.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_site_social_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AddThis buttons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'addthis_buttons';
  $fe_block_boxes->body = '<div class="addthis_sharing_toolbox"></div>';

  $export['addthis_buttons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AddThis script';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'addthis_script';
  $fe_block_boxes->body = '<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=exotica"></script>';

  $export['addthis_script'] = $fe_block_boxes;

  return $export;
}
