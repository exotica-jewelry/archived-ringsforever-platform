<?php
/**
 * @file
 * trf_ring_catalog.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function trf_ring_catalog_views_default_views_alter(&$data) {
  if (isset($data['display_products'])) {
    $data['display_products']->display['default']->display_options['empty']['area']['content'] = 'No results found — check your spelling or try searching again.
    
    You can also <strong><a href="/products">browse all of our titanium wedding rings</a></strong>.'; /* WAS: 'No results found for your search.
      Check your spelling or try another term.' */
    $data['display_products']->display['default']->display_options['empty']['area']['empty'] = TRUE; /* WAS: '' */
    $data['display_products']->display['default']->display_options['pager']['options']['items_per_page'] = 18; /* WAS: 24 */
    $data['display_products']->display['default']->display_options['pager']['options']['quantity'] = 5; /* WAS: '' */
    $data['display_products']->display['page']->display_options['menu']['context_only_inline'] = 0; /* WAS: '' */
    $data['display_products']->display['page']->display_options['menu']['title'] = 'All rings'; /* WAS: 'All products' */
    $data['display_products']->display['page']->display_options['metatags'] = array(
      'und' => array(
        'title' => array(
          'value' => 'Catalog | [current-page:pager][site:name]',
          'default' => '[view:title] | [current-page:pager][site:name]',
        ),
        'description' => array(
          'value' => '[view:description]',
          'default' => '[view:description]',
        ),
        'abstract' => array(
          'value' => '',
          'default' => '',
        ),
        'keywords' => array(
          'value' => 'titanium,titanium wedding rings,wedding rings,titanium rings,titanium uses,exotica jewelry,jewelry,arizona,sedona,southwest,west,az,usa,united states,jerome,clarkdale,ringsforever,titaniumringsforever,ti',
          'default' => 'titanium,titanium wedding rings,wedding rings,titanium rings,titanium uses,exotica jewelry,jewelry,arizona,sedona,southwest,west,az,usa,united states,jerome,clarkdale,ringsforever,titaniumringsforever,ti',
        ),
        'robots' => array(
          'value' => array(
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
          'default' => array(
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
        'news_keywords' => array(
          'value' => 'jewelry,titanium,titanium rings,wedding rings,Exotica Jewelry',
          'default' => 'jewelry,titanium,titanium rings,wedding rings,Exotica Jewelry',
        ),
        'standout' => array(
          'value' => '',
          'default' => '',
        ),
        'rating' => array(
          'value' => 'general',
          'default' => 'general',
        ),
        'referrer' => array(
          'value' => '',
          'default' => '',
        ),
        'rights' => array(
          'value' => 'All text, images, and designs copyright Exotica Jewelry, Inc.',
          'default' => 'All text, images, and designs copyright Exotica Jewelry, Inc.',
        ),
        'image_src' => array(
          'value' => '',
          'default' => '',
        ),
        'canonical' => array(
          'value' => '[view:url]',
          'default' => '[view:url]',
        ),
        'shortlink' => array(
          'value' => '[current-page:url:unaliased]',
          'default' => '[current-page:url:unaliased]',
        ),
        'publisher' => array(
          'value' => '',
          'default' => '',
        ),
        'author' => array(
          'value' => '',
          'default' => '',
        ),
        'original-source' => array(
          'value' => '',
          'default' => '',
        ),
        'prev' => array(
          'value' => '',
          'default' => '',
        ),
        'next' => array(
          'value' => '',
          'default' => '',
        ),
        'content-language' => array(
          'value' => '',
          'default' => '',
        ),
        'geo.position' => array(
          'value' => '',
          'default' => '',
        ),
        'geo.placename' => array(
          'value' => '',
          'default' => '',
        ),
        'geo.region' => array(
          'value' => '',
          'default' => '',
        ),
        'icbm' => array(
          'value' => '',
          'default' => '',
        ),
        'refresh' => array(
          'value' => '',
          'default' => '',
        ),
        'revisit-after' => array(
          'value' => '',
          'period' => '',
          'default' => '',
        ),
        'pragma' => array(
          'value' => '',
          'default' => '',
        ),
        'cache-control' => array(
          'value' => '',
          'default' => '',
        ),
        'expires' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.title' => array(
          'value' => '[current-page:title]',
          'default' => '[current-page:title]',
        ),
        'dcterms.creator' => array(
          'value' => 'TitaniumRingsForever.com',
          'default' => 'TitaniumRingsForever.com',
        ),
        'dcterms.subject' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.description' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.publisher' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.contributor' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.date' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.type' => array(
          'value' => 'Text',
          'default' => 'Text',
        ),
        'dcterms.format' => array(
          'value' => 'text/html',
          'default' => 'text/html',
        ),
        'dcterms.identifier' => array(
          'value' => '[current-page:url:absolute]',
          'default' => '[current-page:url:absolute]',
        ),
        'dcterms.source' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.language' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.relation' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.coverage' => array(
          'value' => '',
          'default' => '',
        ),
        'dcterms.rights' => array(
          'value' => '[metatag:rights]',
          'default' => '[metatag:rights]',
        ),
        'fb:admins' => array(
          'value' => '',
          'default' => '',
        ),
        'fb:app_id' => array(
          'value' => '',
          'default' => '',
        ),
        'fb:pages' => array(
          'value' => '',
          'default' => '',
        ),
        'itemtype' => array(
          'value' => 'Article',
          'default' => 'Article',
        ),
        'itemprop:name' => array(
          'value' => '[current-page:title]',
          'default' => '[current-page:title]',
        ),
        'itemprop:description' => array(
          'value' => '',
          'default' => '',
        ),
        'itemprop:image' => array(
          'value' => '',
          'default' => '',
        ),
        'og:type' => array(
          'value' => 'article',
          'default' => 'article',
        ),
        'og:url' => array(
          'value' => '[current-page:url:absolute]',
          'default' => '[current-page:url:absolute]',
        ),
        'og:title' => array(
          'value' => '[current-page:title]',
          'default' => '[current-page:title]',
        ),
        'og:determiner' => array(
          'value' => '',
          'default' => '',
        ),
        'og:description' => array(
          'value' => '[metatag:description]',
          'default' => '[metatag:description]',
        ),
        'og:updated_time' => array(
          'value' => '',
          'default' => '',
        ),
        'og:see_also' => array(
          'value' => '',
          'default' => '',
        ),
        'og:image' => array(
          'value' => '',
          'default' => '',
        ),
        'og:image:url' => array(
          'value' => '',
          'default' => '',
        ),
        'og:image:secure_url' => array(
          'value' => '',
          'default' => '',
        ),
        'og:image:type' => array(
          'value' => '',
          'default' => '',
        ),
        'og:image:width' => array(
          'value' => '',
          'default' => '',
        ),
        'og:image:height' => array(
          'value' => '',
          'default' => '',
        ),
        'og:latitude' => array(
          'value' => '',
          'default' => '',
        ),
        'og:longitude' => array(
          'value' => '',
          'default' => '',
        ),
        'og:street_address' => array(
          'value' => '',
          'default' => '',
        ),
        'og:locality' => array(
          'value' => 'Clarkdale',
          'default' => 'Clarkdale',
        ),
        'og:region' => array(
          'value' => 'Arizona',
          'default' => 'Arizona',
        ),
        'og:postal_code' => array(
          'value' => 86324,
          'default' => 86324,
        ),
        'og:country_name' => array(
          'value' => 'United States',
          'default' => 'United States',
        ),
        'og:email' => array(
          'value' => 'info@titaniumringsforever.com',
          'default' => 'info@titaniumringsforever.com',
        ),
        'og:phone_number' => array(
          'value' => '+1-800-297-6707',
          'default' => '+1-800-297-6707',
        ),
        'og:fax_number' => array(
          'value' => '',
          'default' => '',
        ),
        'og:locale' => array(
          'value' => '',
          'default' => '',
        ),
        'og:locale:alternate' => array(
          'value' => '',
          'default' => '',
        ),
        'article:author' => array(
          'value' => '',
          'default' => '',
        ),
        'article:publisher' => array(
          'value' => 'https://www.facebook.com/TitaniumWeddingRings/',
          'default' => 'https://www.facebook.com/TitaniumWeddingRings/',
        ),
        'article:section' => array(
          'value' => '',
          'default' => '',
        ),
        'article:tag' => array(
          'value' => '',
          'default' => '',
        ),
        'article:published_time' => array(
          'value' => '',
          'default' => '',
        ),
        'article:modified_time' => array(
          'value' => '',
          'default' => '',
        ),
        'article:expiration_time' => array(
          'value' => '',
          'default' => '',
        ),
        'profile:first_name' => array(
          'value' => '',
          'default' => '',
        ),
        'profile:last_name' => array(
          'value' => '',
          'default' => '',
        ),
        'profile:username' => array(
          'value' => '',
          'default' => '',
        ),
        'profile:gender' => array(
          'value' => '',
          'default' => '',
        ),
        'og:audio' => array(
          'value' => '',
          'default' => '',
        ),
        'og:audio:secure_url' => array(
          'value' => '',
          'default' => '',
        ),
        'og:audio:type' => array(
          'value' => '',
          'default' => '',
        ),
        'book:author' => array(
          'value' => '',
          'default' => '',
        ),
        'book:isbn' => array(
          'value' => '',
          'default' => '',
        ),
        'book:release_date' => array(
          'value' => '',
          'default' => '',
        ),
        'book:tag' => array(
          'value' => '',
          'default' => '',
        ),
        'og:video:url' => array(
          'value' => '',
          'default' => '',
        ),
        'og:video:secure_url' => array(
          'value' => '',
          'default' => '',
        ),
        'og:video:width' => array(
          'value' => '',
          'default' => '',
        ),
        'og:video:height' => array(
          'value' => '',
          'default' => '',
        ),
        'og:video:type' => array(
          'value' => '',
          'default' => '',
        ),
        'video:actor' => array(
          'value' => '',
          'default' => '',
        ),
        'video:actor:role' => array(
          'value' => '',
          'default' => '',
        ),
        'video:director' => array(
          'value' => '',
          'default' => '',
        ),
        'video:writer' => array(
          'value' => '',
          'default' => '',
        ),
        'video:duration' => array(
          'value' => '',
          'default' => '',
        ),
        'video:release_date' => array(
          'value' => '',
          'default' => '',
        ),
        'video:tag' => array(
          'value' => '',
          'default' => '',
        ),
        'video:series' => array(
          'value' => '',
          'default' => '',
        ),
        'product:price:amount' => array(
          'value' => '',
          'default' => '',
        ),
        'product:price:currency' => array(
          'value' => '',
          'default' => '',
        ),
        'product:availability' => array(
          'value' => '',
          'default' => '',
        ),
        'product:brand' => array(
          'value' => '',
          'default' => '',
        ),
        'product:upc' => array(
          'value' => '',
          'default' => '',
        ),
        'product:ean' => array(
          'value' => '',
          'default' => '',
        ),
        'product:isbn' => array(
          'value' => '',
          'default' => '',
        ),
        'product:plural_title' => array(
          'value' => '',
          'default' => '',
        ),
        'product:retailer' => array(
          'value' => '',
          'default' => '',
        ),
        'product:retailer_title' => array(
          'value' => '',
          'default' => '',
        ),
        'product:retailer_part_no' => array(
          'value' => '',
          'default' => '',
        ),
        'product:mfr_part_no' => array(
          'value' => '',
          'default' => '',
        ),
        'product:size' => array(
          'value' => '',
          'default' => '',
        ),
        'product:product_link' => array(
          'value' => '',
          'default' => '',
        ),
        'product:category' => array(
          'value' => '',
          'default' => '',
        ),
        'product:color' => array(
          'value' => '',
          'default' => '',
        ),
        'product:material' => array(
          'value' => '',
          'default' => '',
        ),
        'product:pattern' => array(
          'value' => '',
          'default' => '',
        ),
        'product:shipping_cost:amount' => array(
          'value' => '',
          'default' => '',
        ),
        'product:shipping_cost:currency' => array(
          'value' => '',
          'default' => '',
        ),
        'product:weight:value' => array(
          'value' => '',
          'default' => '',
        ),
        'product:weight:units' => array(
          'value' => '',
          'default' => '',
        ),
        'product:shipping_weight:value' => array(
          'value' => '',
          'default' => '',
        ),
        'product:shipping_weight:units' => array(
          'value' => '',
          'default' => '',
        ),
        'product:expiration_time' => array(
          'value' => '',
          'default' => '',
        ),
        'product:condition' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:card' => array(
          'value' => 'summary',
          'default' => 'summary',
        ),
        'twitter:creator' => array(
          'value' => '@TitaniumRings',
          'default' => '@TitaniumRings',
        ),
        'twitter:creator:id' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:url' => array(
          'value' => '[current-page:url:absolute]',
          'default' => '[current-page:url:absolute]',
        ),
        'twitter:title' => array(
          'value' => '[current-page:title]',
          'default' => '[current-page:title]',
        ),
        'twitter:description' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image:width' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image:height' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image:alt' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image0' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image1' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image2' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:image3' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:player' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:player:width' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:player:height' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:player:stream' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:player:stream:content_type' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:country' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:name:iphone' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:id:iphone' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:url:iphone' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:name:ipad' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:id:ipad' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:url:ipad' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:name:googleplay' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:id:googleplay' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:app:url:googleplay' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:label1' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:data1' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:label2' => array(
          'value' => '',
          'default' => '',
        ),
        'twitter:data2' => array(
          'value' => '',
          'default' => '',
        ),
      ),
    ); /* WAS: '' */
  }
}
