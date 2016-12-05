<?php
/**
 * @file
 * trf_site_text.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_text_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ckeditor_profile
  $overrides["ckeditor_profile.Basic.settings|loadPlugins|video_filter"] = array(
    'buttons' => array(
      'video_filter' => array(
        'icon' => 'video_filter.png',
        'label' => 'Video filter',
      ),
    ),
    'desc' => 'Plugin to directly embed videos with the video filter module.',
    'name' => 'video_filter',
    'path' => '%base_path%sites/all/modules/contrib/video_filter/editors/ckeditor/',
  );
  $overrides["ckeditor_profile.Full.settings|loadPlugins|video_filter"] = array(
    'buttons' => array(
      'video_filter' => array(
        'icon' => 'video_filter.png',
        'label' => 'Video filter',
      ),
    ),
    'desc' => 'Plugin to directly embed videos with the video filter module.',
    'name' => 'video_filter',
    'path' => '%base_path%sites/all/modules/contrib/video_filter/editors/ckeditor/',
  );

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|filter_autop|weight"] = -43;
  $overrides["filter.filtered_html.filters|filter_html"]["DELETED"] = TRUE;
  $overrides["filter.filtered_html.filters|filter_htmlcorrector|weight"] = -42;
  $overrides["filter.filtered_html.filters|filter_url|weight"] = -46;
  $overrides["filter.filtered_html.filters|image_resize_filter|weight"] = -45;
  $overrides["filter.filtered_html.filters|lazyloader_filter|weight"] = -41;
  $overrides["filter.filtered_html.filters|pathologic|weight"] = -47;
  $overrides["filter.filtered_html.filters|typogrify|weight"] = -40;
  $overrides["filter.filtered_html.filters|video_filter"] = array(
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
  );
  $overrides["filter.full_html.filters|filter_autop|weight"] = -44;
  $overrides["filter.full_html.filters|filter_htmlcorrector|weight"] = -43;
  $overrides["filter.full_html.filters|filter_url|weight"] = -46;
  $overrides["filter.full_html.filters|image_resize_filter|weight"] = -45;
  $overrides["filter.full_html.filters|lazyloader_filter|weight"] = -42;
  $overrides["filter.full_html.filters|pathologic|weight"] = -47;
  $overrides["filter.full_html.filters|typogrify|weight"] = -41;
  $overrides["filter.full_html.filters|video_filter"] = array(
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
  );

 return $overrides;
}
