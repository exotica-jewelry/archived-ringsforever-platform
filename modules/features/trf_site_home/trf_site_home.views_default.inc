<?php
/**
 * @file
 * trf_site_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trf_site_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_featured_categories';
  $view->description = 'Displays featured categories on the home page in a grid.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Home featured categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured';
  $handler->display->display_options['css_class'] = 'featured-categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'featured-categories__item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entityqueue: Taxonomy term Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Taxonomy Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'taxonomy_featured' => 'taxonomy_featured',
  );
  /* Field: Taxonomy term: Rendered Taxonomy term */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'featured';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Entityqueue: Taxonomy term Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Taxonomy term: Feature this category on the home page (field_home_feature_bool) */
  $handler->display->display_options['filters']['field_home_feature_bool_value']['id'] = 'field_home_feature_bool_value';
  $handler->display->display_options['filters']['field_home_feature_bool_value']['table'] = 'field_data_field_home_feature_bool';
  $handler->display->display_options['filters']['field_home_feature_bool_value']['field'] = 'field_home_feature_bool_value';
  $handler->display->display_options['filters']['field_home_feature_bool_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'featured_home');
  $export['home_featured_categories'] = $view;

  return $export;
}
