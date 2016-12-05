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
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_intro';
  $fe_block_boxes->body = '<p><img alt="Chris and Sandy Boothe" class="align-right" src="/sites/default/files/imce/photos/chris-sandy-married.jpg" style="width:250px;height:177px;" />We will be happy to answer any questions about our handcrafted titanium wedding rings. This is also the place to send us ideas for a <strong><a href="/blog/custom-titanium-rings-your-design" title="Learn more about the custom titanium rings we have created in the past">custom titanium ring</a></strong> — we\'re happy to discuss your plans and give you a price quote.</p>

<p>For fastest service, email us using the form below.</p>

<div itemscope itemtype="http://schema.org/LocalBusiness">

  <p>You can also call us at <span itemprop="telephone"><a href="tel:+18002976707" rel="nofollow"><strong>(800) 297-6707</strong></a></span> or <span itemprop="telephone"><a href="tel:+19286345307" rel="nofollow"><strong>(928) 634-5307</strong></a></span>, or write to us at:</p>

  <p itemprop="address" itemscope itemtype="http://schema.org/PostalAddress"><em><span itemprop="name">Exotica Jewelry</span><br />
  <span itemprop="streetAddress">P.O. Box <span itemprop="postOfficeBoxNumber">9</span></span><br />
  <span itemprop="addressLocality">Clarkdale</span>, <span itemprop="addressRegion">AZ</span> <span itemprop="postalCode">86324</span><br />
  <span itemprop="addressCountry">United States</span></em></p>

</div>

<p>—Chris and Sandy Boothe</p>

<h3>Email us</h3>';

  $export['contact_intro'] = $fe_block_boxes;

  return $export;
}
