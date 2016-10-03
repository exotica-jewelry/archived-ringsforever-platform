<?php
/**
 * @file
 * trf_site_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trf_site_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function trf_site_blog_field_default_field_instances_alter(&$data) {
  if (isset($data['node-blog_post-body'])) {
    $data['node-blog_post-body']['display']['default']['settings']['conditions'] = array(); /* WAS: '' */
    $data['node-blog_post-body']['display']['default']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-blog_post-body']['display']['default']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-blog_post-body']['display']['default']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-blog_post-body']['display']['teaser']['settings']['conditions'] = array(); /* WAS: '' */
    $data['node-blog_post-body']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-blog_post-body']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-blog_post-body']['display']['teaser']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-blog_post-body']['display']['teaser']['weight'] = 2; /* WAS: 1 */
  }
  if (isset($data['node-blog_post-field_blog_category'])) {
    unset($data['node-blog_post-field_blog_category']);
  }
  if (isset($data['node-blog_post-field_image'])) {
    unset($data['node-blog_post-field_image']);
  }
  if (isset($data['node-blog_post-field_tags'])) {
    unset($data['node-blog_post-field_tags']);
  }
  if (isset($data['node-blog_post-title_field'])) {
    $data['node-blog_post-title_field']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-blog_post-title_field']['display']['teaser']['module'] = 'title'; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['conditions'] = array(); /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['field_multiple_limit'] = -1; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['field_multiple_limit_offset'] = 0; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['field_multiple_limit_order'] = 0; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['title_class'] = ''; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['title_link'] = 'content'; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['settings']['title_style'] = '_none'; /* WAS: '' */
    $data['node-blog_post-title_field']['display']['teaser']['type'] = 'title_linked'; /* WAS: 'hidden' */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function trf_site_blog_node_info_alter(&$data) {
  if (isset($data['blog_post'])) {
    $data['blog_post']['description'] = 'Write a <em>blog post</em> and it will show up at the bottom of the home page, along with the blog page.'; /* WAS: 'Use <em>blog post</em> to write regular content.' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function trf_site_blog_strongarm_alter(&$data) {
  if (isset($data['comment_anonymous_blog_post'])) {
    unset($data['comment_anonymous_blog_post']);
  }
  if (isset($data['comment_blog_post'])) {
    unset($data['comment_blog_post']);
  }
  if (isset($data['comment_default_mode_blog_post'])) {
    unset($data['comment_default_mode_blog_post']);
  }
  if (isset($data['comment_default_per_page_blog_post'])) {
    unset($data['comment_default_per_page_blog_post']);
  }
  if (isset($data['comment_form_location_blog_post'])) {
    unset($data['comment_form_location_blog_post']);
  }
  if (isset($data['comment_preview_blog_post'])) {
    unset($data['comment_preview_blog_post']);
  }
  if (isset($data['comment_subject_field_blog_post'])) {
    unset($data['comment_subject_field_blog_post']);
  }
  if (isset($data['field_bundle_settings_node__blog_post'])) {
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['colorbox'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['embedded'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['featured'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['product_list']['custom_settings'] = FALSE; /* WAS: TRUE */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['reference_view'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['revision'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_blog_post'])) {
    $data['node_options_blog_post']->value[1] = 'revision'; /* WAS: '' */
  }
  if (isset($data['node_submitted_blog_post'])) {
    $data['node_submitted_blog_post']->value = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function trf_site_blog_views_default_views_alter(&$data) {
  if (isset($data['blog'])) {
    $data['blog']->display['default']->display_options['title'] = 'As the lathe turns: Chris & Sandy’s blog on titanium rings'; /* WAS: 'Blog' */
  }
}
