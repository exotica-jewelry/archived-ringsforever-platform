<?php
/**
 * @file
 * trf_site_migrate.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trf_site_migrate_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_export';
  $view->description = 'Provides an export of all products with nid, SKU and price (used for bulk price updates)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: SKU */
  $handler->display->display_options['fields']['field_sku_master']['id'] = 'field_sku_master';
  $handler->display->display_options['fields']['field_sku_master']['table'] = 'field_data_field_sku_master';
  $handler->display->display_options['fields']['field_sku_master']['field'] = 'field_sku_master';
  $handler->display->display_options['fields']['field_sku_master']['label'] = 'sku';
  $handler->display->display_options['fields']['field_sku_master']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sku_master']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sku_master']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sku_master']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sku_master']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sku_master']['field_api_classes'] = TRUE;
  /* Field: Content: Base price */
  $handler->display->display_options['fields']['field_price_base']['id'] = 'field_price_base';
  $handler->display->display_options['fields']['field_price_base']['table'] = 'field_data_field_price_base';
  $handler->display->display_options['fields']['field_price_base']['field'] = 'field_price_base';
  $handler->display->display_options['fields']['field_price_base']['label'] = 'price';
  $handler->display->display_options['fields']['field_price_base']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_price_base']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_price_base']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_base']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_price_base']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_price_base']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['field_price_base']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
      1 => array(
        'condition' => '',
      ),
      2 => array(
        'condition' => '',
      ),
      3 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/products/export';
  $handler->display->display_options['sitename_title'] = 0;
  $export['product_export'] = $view;

  return $export;
}
