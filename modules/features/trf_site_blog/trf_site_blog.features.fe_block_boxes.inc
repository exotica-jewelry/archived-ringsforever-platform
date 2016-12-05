<?php
/**
 * @file
 * trf_site_blog.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_site_blog_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact us CTA';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'blog_contact';
  $fe_block_boxes->body = '<hr />
<p><a href="/contact"><strong>Contact us and we\'ll get started on your titanium wedding ring!</strong></a></p>
';

  $export['blog_contact'] = $fe_block_boxes;

  return $export;
}
