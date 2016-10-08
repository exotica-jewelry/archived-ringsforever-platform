<?php
/**
 * @file
 * trf_site_text.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_text_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ckeditor_profile_defaults_alter().
 */
function trf_site_text_ckeditor_profile_defaults_alter(&$data) {
  if (isset($data['Basic'])) {
    $data['Basic']['settings']['loadPlugins']['video_filter'] = array(
      'buttons' => array(
        'video_filter' => array(
          'icon' => 'video_filter.png',
          'label' => 'Video filter',
        ),
      ),
      'desc' => 'Plugin to directly embed videos with the video filter module.',
      'name' => 'video_filter',
      'path' => '%base_path%sites/all/modules/contrib/video_filter/editors/ckeditor/',
    ); /* WAS: '' */
  }
  if (isset($data['Full'])) {
    $data['Full']['settings']['loadPlugins']['video_filter'] = array(
      'buttons' => array(
        'video_filter' => array(
          'icon' => 'video_filter.png',
          'label' => 'Video filter',
        ),
      ),
      'desc' => 'Plugin to directly embed videos with the video filter module.',
      'name' => 'video_filter',
      'path' => '%base_path%sites/all/modules/contrib/video_filter/editors/ckeditor/',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function trf_site_text_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['filter_autop']['weight'] = -43; /* WAS: -44 */
    $data['filtered_html']['filters']['filter_htmlcorrector']['weight'] = -42; /* WAS: -43 */
    $data['filtered_html']['filters']['filter_url']['weight'] = -46; /* WAS: -47 */
    $data['filtered_html']['filters']['image_resize_filter']['weight'] = -45; /* WAS: -46 */
    $data['filtered_html']['filters']['lazyloader_filter']['weight'] = -41; /* WAS: -42 */
    $data['filtered_html']['filters']['pathologic']['weight'] = -47; /* WAS: -48 */
    $data['filtered_html']['filters']['typogrify']['weight'] = -40; /* WAS: -41 */
    $data['filtered_html']['filters']['video_filter'] = array(
      'settings' => array(
        'video_filter_autoplay' => 0,
        'video_filter_codecs' => array(
          'archive' => 'archive',
          'bliptv' => 'bliptv',
          'candidcareer' => 0,
          'capped' => 0,
          'collegehumor' => 0,
          'coub' => 0,
          'dailymotion' => 'dailymotion',
          'democracynow_fullshow' => 0,
          'democracynow_story' => 0,
          'flickr_slideshows' => 'flickr_slideshows',
          'flickr_video' => 'flickr_video',
          'foxnews' => 0,
          'gametrailers' => 0,
          'gamevideos' => 0,
          'giphy' => 'giphy',
          'godtube' => 0,
          'google' => 'google',
          'instagram' => 'instagram',
          'mailru' => 0,
          'metacafe' => 0,
          'myspace' => 0,
          'myvideo' => 0,
          'picasa_slideshows' => 'picasa_slideshows',
          'rutube' => 0,
          'slideshare' => 'slideshare',
          'streamhoster' => 0,
          'teachertube' => 0,
          'ted' => 0,
          'twitch' => 0,
          'ustream' => 'ustream',
          'vbox' => 0,
          'vimeo' => 'vimeo',
          'vine' => 'vine',
          'whatchado' => 0,
          'wistia' => 0,
          'youku' => 0,
          'youtube' => 'youtube',
          'youtube_playlist' => 'youtube_playlist',
        ),
        'video_filter_height' => 225,
        'video_filter_html5' => 1,
        'video_filter_multiple_sources' => 1,
        'video_filter_related' => 0,
        'video_filter_width' => 400,
      ),
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
    unset($data['filtered_html']['filters']['filter_html']);
  }
  if (isset($data['full_html'])) {
    $data['full_html']['filters']['filter_autop']['weight'] = -44; /* WAS: -45 */
    $data['full_html']['filters']['filter_htmlcorrector']['weight'] = -43; /* WAS: -44 */
    $data['full_html']['filters']['filter_url']['weight'] = -46; /* WAS: -47 */
    $data['full_html']['filters']['image_resize_filter']['weight'] = -45; /* WAS: -46 */
    $data['full_html']['filters']['lazyloader_filter']['weight'] = -42; /* WAS: -43 */
    $data['full_html']['filters']['pathologic']['weight'] = -47; /* WAS: -48 */
    $data['full_html']['filters']['typogrify']['weight'] = -41; /* WAS: -42 */
    $data['full_html']['filters']['video_filter'] = array(
      'settings' => array(
        'video_filter_autoplay' => 0,
        'video_filter_codecs' => array(
          'archive' => 'archive',
          'bliptv' => 'bliptv',
          'candidcareer' => 0,
          'capped' => 0,
          'collegehumor' => 0,
          'coub' => 0,
          'dailymotion' => 'dailymotion',
          'democracynow_fullshow' => 0,
          'democracynow_story' => 0,
          'flickr_slideshows' => 'flickr_slideshows',
          'flickr_video' => 'flickr_video',
          'foxnews' => 0,
          'gametrailers' => 0,
          'gamevideos' => 0,
          'giphy' => 'giphy',
          'godtube' => 0,
          'google' => 'google',
          'instagram' => 'instagram',
          'mailru' => 0,
          'metacafe' => 0,
          'myspace' => 0,
          'myvideo' => 0,
          'picasa_slideshows' => 'picasa_slideshows',
          'rutube' => 0,
          'slideshare' => 'slideshare',
          'streamhoster' => 0,
          'teachertube' => 0,
          'ted' => 0,
          'twitch' => 0,
          'ustream' => 'ustream',
          'vbox' => 0,
          'vimeo' => 'vimeo',
          'vine' => 'vine',
          'whatchado' => 0,
          'wistia' => 0,
          'youku' => 0,
          'youtube' => 'youtube',
          'youtube_playlist' => 'youtube_playlist',
        ),
        'video_filter_height' => 225,
        'video_filter_html5' => 1,
        'video_filter_multiple_sources' => 1,
        'video_filter_related' => 0,
        'video_filter_width' => 400,
      ),
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
  }
}
