<?php
/**
 * @file
 * trf_site_text.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function trf_site_text_filter_default_formats() {
  $formats = array();

  // Exported format: Commerce Order Message.
  $formats['commerce_order_message'] = array(
    'format' => 'commerce_order_message',
    'name' => 'Commerce Order Message',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'entity_embed' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_align' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'image_resize_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <h3> <h4> <h5> <div> <figure> <figcaption> <drupal-entity data-*>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'lazyloader_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 1,
          'space_hyphens' => 1,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'space_to_nbsp' => 0,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 1,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 1,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;' => '-&gt;',
            '&lt;-' => '&lt;-',
            '-&gt;&gt;' => 0,
            '&lt;&lt;-' => 0,
            '-&gt;|' => 0,
            '|&lt;-' => 0,
            '&lt;-&gt;' => 0,
            '&lt;=&gt;' => 0,
            '=&gt;' => 0,
            '&lt;=' => 0,
          ),
          'fractions' => array(
            '1/4' => '1/4',
            '1/2' => '1/2',
            '3/4' => '3/4',
            '1/3' => '1/3',
            '2/3' => '2/3',
            '1/5' => '1/5',
            '2/5' => '2/5',
            '3/5' => '3/5',
            '4/5' => '4/5',
            '1/6' => '1/6',
            '5/6' => '5/6',
            '1/8' => '1/8',
            '3/8' => '3/8',
            '5/8' => '5/8',
            '7/8' => '7/8',
          ),
          'quotes' => array(
            ',,' => 0,
            '\'\'' => 0,
            '&lt;&lt;' => 0,
            '&gt;&gt;' => 0,
          ),
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'entity_embed' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_align' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'image_resize_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'lazyloader_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 1,
          'space_hyphens' => 1,
          'wrap_ampersand' => 1,
          'widont_enabled' => 1,
          'space_to_nbsp' => 0,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 1,
          'wrap_caps' => 1,
          'wrap_initial_quotes' => 1,
          'wrap_numbers' => 1,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;' => '-&gt;',
            '&lt;-' => '&lt;-',
            '-&gt;&gt;' => 0,
            '&lt;&lt;-' => 0,
            '-&gt;|' => 0,
            '|&lt;-' => 0,
            '&lt;-&gt;' => 0,
            '&lt;=&gt;' => 0,
            '=&gt;' => 0,
            '&lt;=' => 0,
          ),
          'fractions' => array(
            '1/4' => '1/4',
            '1/2' => '1/2',
            '3/4' => '3/4',
            '1/3' => '1/3',
            '2/3' => '2/3',
            '1/5' => '1/5',
            '2/5' => '2/5',
            '3/5' => '3/5',
            '4/5' => '4/5',
            '1/6' => '1/6',
            '5/6' => '5/6',
            '1/8' => '1/8',
            '3/8' => '3/8',
            '5/8' => '5/8',
            '7/8' => '7/8',
          ),
          'quotes' => array(
            ',,' => 0,
            '\'\'' => 0,
            '&lt;&lt;' => 0,
            '&gt;&gt;' => 0,
          ),
        ),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
