<?php
/**
 * @file
 * trf_site_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function trf_site_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home page: Free';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_free';
  $fe_block_boxes->body = '<p class="home-free__intro">All of our handcrafted titanium rings come with</p>

<ul class="home-free__list">
	<li class="home-free__item"><a class="home-free__link home-free__link--shipping" href="/shipping-information" title="Get free shipping on your order">Free<br />shipping!</a></li>
	<li class="home-free__item"><a class="home-free__link home-free__link--resizing" href="/sizing-resizing-our-guarantee" title="We guarantee our rings will fit">Free<br />resizing!</a></li>
	<li class="home-free__item"><a class="home-free__link home-free__link--engraving" href="/engraving-inside-outside-your-titanium-wedding-ring" title="Make your rings your own with an inside-ring engraving">Free<br />engraving!</a></li>
</ul>
';

  $export['home_free'] = $fe_block_boxes;

  return $export;
}
