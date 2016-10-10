<?php
/**
 * @file
 * trf_site_contact.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_site_contact_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact page introduction';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact_intro';
  $fe_block_boxes->body = '<p><img alt="chris-sandy-married.jpg" class="align-right" src="/sites/default/files/imce/photos/chris-sandy-married.jpg" style="width:250px;height:177px;" />We will be happy to answer any questions about our handcrafted titanium wedding rings. This is also the place to send us ideas for a&nbsp;<strong><a href="/blog/custom-titanium-rings-your-design" title="Learn more about the custom titanium rings we have created in the past">custom titanium ring</a></strong>&nbsp;— we\'re happy to discuss your plans and give you a price&nbsp;quote.</p>

<p>For fastest service, email us using the form below.</p>

<p>You can also call us at&nbsp;<strong>(800) 297-6707</strong>&nbsp;or&nbsp;<strong>(928) 634-5307</strong>, or write to us&nbsp;at:</p>

<p><em>Exotica Jewelry<br />
P.O. Box 9<br />
Clarkdale, AZ 86324<br />
United&nbsp;States</em></p>

<p>—Chris and&nbsp;Sandy&nbsp;Boothe</p>

<h3>Email us</h3>
';

  $export['contact_intro'] = $fe_block_boxes;

  return $export;
}
