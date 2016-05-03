core: 7.x
api: 2
projects:
  drupal:
    version: '7.43'
  commerce_kickstart:
    type: module
    custom_download: true
    version: '2.36'
  views_bulk_operations:
    version: '3.3'
  addressfield:
    version: '1.2'
  admin_views:
    version: '1.5'
  advanced_help:
    version: '1.3'
  auto_entitylabel:
    subdir: contrib
    version: '1.3'
  autocomplete_deluxe:
    subdir: contrib
    version: '2.1'
  backup_migrate:
    subdir: contrib
    version: '3.1'
  service_links:
    version: 2.x-dev
  block_class:
    subdir: contrib
    version: '2.3'
  breakpoints:
    subdir: contrib
    version: '1.4'
  ctools:
    version: '1.9'
  cer:
    subdir: contrib
    version: 3.0-alpha7
  charts:
    subdir: contrib
    version: 2.0-rc1
  chosen:
    version: 2.x-dev
  ckeditor:
    subdir: contrib
    version: '1.17'
  cloud_zoom:
    version: 1.x-dev
  coffee:
    subdir: contrib
    version: '2.2'
  colorbox:
    version: '2.10'
    patches:
      - 'https://www.drupal.org/files/issues/plugin_version_detection-2360375-9.patch'
  colorbox_node:
    subdir: contrib
    version: '3.5'
  commerce:
    version: '1.13'
  commerce_add_to_cart_confirmation:
    version: 1.0-rc2
  commerce_addressbook:
    version: 2.0-rc9
  commerce_amex:
    version: '1.1'
  commerce_autosku:
    version: 1.x-dev
  commerce_backoffice:
    version: '1.5'
  commerce_checkout_progress:
    version: '1.4'
  commerce_discount:
    version: 1.0-alpha7
  commerce_extra_price_formatters:
    version: 1.x-dev
  commerce_fancy_attributes:
    version: '1.0'
  commerce_features:
    version: '1.1'
  commerce_feeds:
    subdir: contrib
    version: '1.4'
  commerce_flat_rate:
    version: 1.0-beta2
  commerce_hosted_pci:
    version: 1.0-rc2
  commerce_message:
    version: 1.0-rc4
  commerce_migrate:
    version: '1.2'
    patches:
      - 'https://www.drupal.org/files/issues/reference_fields_should-2701333-3.patch'
  commerce_paypal:
    version: '2.3'
    patches:
      - 'https://www.drupal.org/files/issues/commerce_paypal-addressfield-default-values-2458721-1.patch'
  commerce_payleap:
    version: '1.1'
  commerce_reports:
    subdir: contrib
    version: 4.0-beta3
  commerce_search_api:
    version: '1.4'
  commerce_shipping:
    version: '2.2'
  connector:
    version: 1.0-beta2
  countries:
    version: '2.3'
  crumbs:
    version: '1.10'
  facetapi:
    version: '1.5'
    patches:
      - 'https://drupal.org/files/1616518-term_remove_link-24.patch'
      - 'https://www.drupal.org/files/issues/notice_undefined-2378693-3.patch'
  date:
    version: '2.9'
  devel:
    subdir: contrib
    version: '1.5'
  diff:
    subdir: contrib
    version: '3.2'
  distro_update:
    version: 1.0-beta4
  ds:
    subdir: contrib
    version: '2.14'
  ds_extra_layouts:
    subdir: contrib
    version: '1.1'
  editablefields:
    subdir: contrib
    version: 1.x-dev
  elements:
    subdir: contrib
    version: '1.4'
  entity:
    version: '1.7'
  entity_embed:
    subdir: contrib
    version: 1.0-alpha4
  entityreference:
    version: '1.1'
    patches:
      - 'http://drupal.org/files/1580348-universal-formatters-17.patch'
  environment_indicator:
    subdir: contrib
    version: '2.8'
  escape_admin:
    subdir: contrib
    version: '1.2'
  eva:
    version: '1.2'
  features_extra:
    subdir: contrib
    version: '1.0'
  features:
    version: '2.10'
    patches:
      - 'http://drupal.org/files/issues/features-fix-modules-enabled-2143765-1.patch'
      - 'https://www.drupal.org/files/issues/ignore_hidden_modules-2479803-1.patch'
  features_override:
    version: 2.0-rc3
  feeds:
    subdir: contrib
    version: 2.0-beta2
  feeds_tamper:
    subdir: contrib
    version: '1.1'
  fences:
    version: '1.2'
  ffc:
    subdir: contrib
    version: 1.0-beta2
  field_extractor:
    version: '1.3'
  field_formatter_settings:
    subdir: contrib
    version: '1.1'
  field_multiple_limit:
    subdir: contrib
    version: 1.x-dev
  field_validation:
    subdir: contrib
    version: '2.6'
  file_entity:
    subdir: contrib
    version: 2.0-beta2
  file_entity_inline:
    subdir: contrib
    version: 1.0-beta1
  filefield_paths:
    subdir: contrib
    version: '1.0'
  filefield_sources:
    subdir: contrib
    version: '1.10'
  picture:
    subdir: contrib
    version: '2.13'
  globalredirect:
    subdir: contrib
    version: '1.5'
  hierarchical_select:
    subdir: contrib
    version: 3.0-beta4
  http_client:
    version: '2.4'
  icon_tabs:
    subdir: contrib
    version: '1.5'
  image_delta_formatter:
    version: 1.0-rc1
  imagecache_actions:
    subdir: contrib
    version: '1.7'
  imageapi_optimize:
    subdir: contrib
    version: '1.2'
  imagezoom:
    subdir: contrib
    version: 2.0-beta2
  imce:
    subdir: contrib
    version: '1.10'
  imce_tools:
    subdir: contrib
    version: '1.2'
  imce_plupload:
    subdir: contrib
    version: '2.0'
  inline_conditions:
    version: 1.0-alpha7
  inline_entity_form:
    version: '1.6'
  job_scheduler:
    subdir: contrib
    version: 2.0-alpha3
  jquery_update:
    subdir: contrib
    version: '2.7'
  libraries:
    version: '2.2'
  link:
    version: '1.4'
  linkit:
    subdir: contrib
    version: '3.5'
  mailcontrol:
    subdir: contrib
    version: '1.0'
  mailsystem:
    version: '2.34'
    patches:
      - 'https://www.drupal.org/files/mailsystem.1534706.6.patch'
  menu_attributes:
    version: '1.0'
  message:
    version: '1.11'
    patches:
      - 'https://www.drupal.org/files/issues/message-mysql57_compatibility-2629474-4.patch'
  message_notify:
    version: '2.5'
  migrate:
    version: '2.8'
  migrate_d2d:
    subdir: contrib
    version: '2.1'
  migrate_extras:
    version: '2.5'
    patches:
      - 'http://drupal.org/files/migrate_extras-fix-destid2-array-1951904-4.patch'
  mimemail:
    version: 1.0-beta4
  module_filter:
    version: '2.0'
  oauthconnector:
    version: 1.0-beta2
  oauth:
    version: '3.2'
    patches:
      - 'http://drupal.org/files/980340-d7.patch'
      - 'http://drupal.org/files/980340-d7.patch'
  pathauto:
    version: '1.3'
  plupload:
    subdir: contrib
    version: '1.7'
  redirect:
    subdir: contrib
    version: 1.0-rc3
  rules:
    version: '2.9'
  search_api:
    version: '1.18'
  search_api_db:
    version: '1.5'
  search_api_ranges:
    version: '1.5'
    patches:
      - 'https://drupal.org/files/issues/search_api_ranges-rewrite-data-alteration-callback-2001846-4.patch'
  search_api_sorts:
    version: '1.6'
  searchapimultiaggregate:
    subdir: contrib
    version: '1.2'
  special_menu_items:
    version: '2.0'
  stringoverrides:
    subdir: contrib
    version: '1.8'
  strongarm:
    version: '2.0'
  table_element:
    subdir: contrib
    version: 1.0-beta5
  taxonomy_menu:
    version: '1.5'
  title:
    version: 1.0-alpha8
  token:
    version: '1.6'
    patches:
      - 'http://drupal.org/files/token-token_asort_tokens-1712336_0.patch'
  transliteration:
    subdir: contrib
    version: '3.2'
  trf_color_variations:
    type: module
    custom_download: true
    subdir: features
    version: '0.2'
  trf_ief:
    type: module
    custom_download: true
    subdir: custom
    version: '1.3'
  trf_image_variations:
    type: module
    custom_download: true
    subdir: features
    version: '0.2'
  trf_price_variations:
    type: module
    custom_download: true
    subdir: features
    version: '0.11'
  trf_ring_taxonomies:
    type: module
    custom_download: true
    subdir: features
    version: '0.15'
  trf_ring_type:
    type: module
    custom_download: true
    subdir: features
    version: '0.49'
  trf_ring_variations:
    type: module
    custom_download: true
    subdir: features
    version: '0.30'
  trf_site_images:
    type: module
    custom_download: true
    subdir: features
    version: '0.16'
  trf_site_paths:
    type: module
    custom_download: true
    subdir: features
    version: '0.10'
  trf_site_settings:
    type: module
    custom_download: true
    subdir: features
    version: '0.9'
  trf_site_text:
    type: module
    custom_download: true
    subdir: features
    version: '0.11'
  trf_store_shipping:
    type: module
    custom_download: true
    subdir: features
    version: '1.0'
  trf_store_taxes:
    type: module
    custom_download: true
    subdir: features
    version: '0.3'
  trf_title_variations:
    type: module
    custom_download: true
    subdir: features
    version: '0.1'
  trf_user_settings:
    type: module
    custom_download: true
    subdir: features
    version: '0.3'
  typogrify:
    subdir: contrib
    version: 1.0-rc10
  views:
    version: '3.13'
  views_data_export:
    subdir: contrib
    version: 3.0-beta9
  views_date_format_sql:
    subdir: contrib
    version: '3.3'
  views_megarow:
    version: '1.5'
  omega:
    version: '3.1'
  omega_kickstart:
    version: '3.4'
  shiny:
    version: '1.7'
  trf_ring_similar:
    type: module
    custom_download: true
  trf_site_home:
    type: module
    custom_download: true
  trf_site_search:
    type: module
    custom_download: true
  trf:
    type: theme
    custom_download: true
  trf_admin:
    type: theme
    custom_download: true
libraries:
  paymill:
    directory_name: paymill
    custom_download: true
    type: library
  jquery_ui_spinner:
    directory_name: jquery_ui_spinner
    custom_download: true
    type: library
  chosen:
    directory_name: chosen
    custom_download: true
    type: library
  colorbox:
    directory_name: colorbox
    custom_download: true
    type: library
  jquery.bxslider:
    directory_name: jquery.bxslider
    custom_download: true
    type: library
  yotpo-php:
    directory_name: yotpo-php
    custom_download: true
    type: library
  selectnav.js:
    directory_name: selectnav.js
    custom_download: true
    type: library
  ie7-js:
    directory_name: ie7-js
    custom_download: true
    type: library
  cloud-zoom:
    directory_name: cloud-zoom
    custom_download: true
    type: library
  jquery_expander:
    directory_name: jquery_expander
    custom_download: true
    type: library
  ckeditor:
    directory_name: ckeditor
    custom_download: true
    type: library
  elevatezoom:
    directory_name: elevatezoom
    custom_download: true
    type: library
  plupload:
    directory_name: plupload
    custom_download: true
    type: library
