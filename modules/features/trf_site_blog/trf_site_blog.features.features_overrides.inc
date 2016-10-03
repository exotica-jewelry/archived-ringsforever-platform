<?php
/**
 * @file
 * trf_site_blog.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function trf_site_blog_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-blog_post-body.display|default|settings|conditions"] = array();
  $overrides["field_instance.node-blog_post-body.display|default|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-blog_post-body.display|default|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-blog_post-body.display|default|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-blog_post-body.display|teaser|settings|conditions"] = array();
  $overrides["field_instance.node-blog_post-body.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-blog_post-body.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-blog_post-body.display|teaser|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-blog_post-body.display|teaser|weight"] = 2;
  $overrides["field_instance.node-blog_post-field_blog_category.node-blog_post-field_blog_category"]["DELETED"] = TRUE;
  $overrides["field_instance.node-blog_post-field_image.node-blog_post-field_image"]["DELETED"] = TRUE;
  $overrides["field_instance.node-blog_post-field_tags.node-blog_post-field_tags"]["DELETED"] = TRUE;
  $overrides["field_instance.node-blog_post-title_field.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-blog_post-title_field.display|teaser|module"] = 'title';
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|conditions"] = array();
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|field_multiple_limit"] = -1;
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|field_multiple_limit_offset"] = 0;
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|field_multiple_limit_order"] = 0;
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|title_class"] = '';
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|title_link"] = 'content';
  $overrides["field_instance.node-blog_post-title_field.display|teaser|settings|title_style"] = '_none';
  $overrides["field_instance.node-blog_post-title_field.display|teaser|type"] = 'title_linked';

  // Exported overrides for: node
  $overrides["node.blog_post.description"] = 'Write a <em>blog post</em> and it will show up at the bottom of the home page, along with the blog page.';

  // Exported overrides for: variable
  $overrides["variable.comment_anonymous_blog_post.comment_anonymous_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.comment_blog_post.comment_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.comment_default_mode_blog_post.comment_default_mode_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.comment_default_per_page_blog_post.comment_default_per_page_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.comment_form_location_blog_post.comment_form_location_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.comment_preview_blog_post.comment_preview_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.comment_subject_field_blog_post.comment_subject_field_blog_post"]["DELETED"] = TRUE;
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|colorbox"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|embedded"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|featured"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|product_list|custom_settings"] = FALSE;
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|reference_view"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__blog_post.value|view_modes|revision"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.node_options_blog_post.value|1"] = 'revision';
  $overrides["variable.node_submitted_blog_post.value"] = 0;

  // Exported overrides for: views_view
  $overrides["views_view.blog.display|default|display_options|title"] = 'As the lathe turns: Chris & Sandy’s blog on titanium rings';

 return $overrides;
}
