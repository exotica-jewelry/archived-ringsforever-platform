<?php
/**
 * @file
 * trf_ring_similar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trf_ring_similar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'similar_rings';
  $view->description = 'Displays similar rings based on taxonomy terms.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Similar rings by term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Similar rings by term';
  $handler->display->display_options['css_class'] = 'sr';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all »';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'sr__item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'reference_view';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rings' => 'rings',
  );
  /* Filter criterion: Content: Product display */
  $handler->display->display_options['filters']['is_product_display']['id'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['table'] = 'node';
  $handler->display->display_options['filters']['is_product_display']['field'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['value'] = '1';

  /* Display: Block: Master */
  $handler = $view->new_display('block', 'Block: Master', 'sr');
  $handler->display->display_options['link_url'] = 'taxonomy/term/!1';
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: Block: Elements */
  $handler = $view->new_display('block', 'Block: Elements', 'sr_elements');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sr sr--elements';
  $handler->display->display_options['display_description'] = 'Related rings by elements (keywords).';
  $handler->display->display_options['link_url'] = 'taxonomy/term/!1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Primary element (field_ring_elements_primary) */
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['id'] = 'field_ring_elements_primary_tid';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['table'] = 'field_data_field_ring_elements_primary';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['field'] = 'field_ring_elements_primary_tid';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['default_argument_options']['vocabularies'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ring_elements_primary_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Block: Collections */
  $handler = $view->new_display('block', 'Block: Collections', 'sr_collections');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sr sr--collections';
  $handler->display->display_options['display_description'] = 'Related rings by collections.';
  $handler->display->display_options['link_url'] = 'taxonomy/term/!1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Collection (field_collection) */
  $handler->display->display_options['relationships']['field_collection_tid']['id'] = 'field_collection_tid';
  $handler->display->display_options['relationships']['field_collection_tid']['table'] = 'field_data_field_collection';
  $handler->display->display_options['relationships']['field_collection_tid']['field'] = 'field_collection_tid';
  $handler->display->display_options['relationships']['field_collection_tid']['label'] = 'Collection';
  $handler->display->display_options['relationships']['field_collection_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Title to display */
  $handler->display->display_options['fields']['field_cat_title']['id'] = 'field_cat_title';
  $handler->display->display_options['fields']['field_cat_title']['table'] = 'field_data_field_cat_title';
  $handler->display->display_options['fields']['field_cat_title']['field'] = 'field_cat_title';
  $handler->display->display_options['fields']['field_cat_title']['relationship'] = 'field_collection_tid';
  $handler->display->display_options['fields']['field_cat_title']['label'] = '';
  $handler->display->display_options['fields']['field_cat_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cat_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cat_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cat_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cat_title']['type'] = 'text_plain';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'reference_view';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '[field_cat_title]';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'collection' => 'collection',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rings' => 'rings',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Product display */
  $handler->display->display_options['filters']['is_product_display']['id'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['table'] = 'node';
  $handler->display->display_options['filters']['is_product_display']['field'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['value'] = '1';
  $handler->display->display_options['filters']['is_product_display']['group'] = 1;
  /* Filter criterion: Taxonomy term: Title to display (field_cat_title) */
  $handler->display->display_options['filters']['field_cat_title_value']['id'] = 'field_cat_title_value';
  $handler->display->display_options['filters']['field_cat_title_value']['table'] = 'field_data_field_cat_title';
  $handler->display->display_options['filters']['field_cat_title_value']['field'] = 'field_cat_title_value';
  $handler->display->display_options['filters']['field_cat_title_value']['relationship'] = 'field_collection_tid';
  $handler->display->display_options['filters']['field_cat_title_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_cat_title_value']['group'] = 1;
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: Block: Colors */
  $handler = $view->new_display('block', 'Block: Colors', 'sr_colors');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sr sr--colors';
  $handler->display->display_options['display_description'] = 'Related rings by colors.';
  $handler->display->display_options['link_url'] = 'taxonomy/term/!1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1 titanium wedding rings';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'color' => 'color',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_caching'] = '-1';
  $export['similar_rings'] = $view;

  return $export;
}
