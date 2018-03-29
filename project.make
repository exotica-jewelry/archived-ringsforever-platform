api = 2
core = 7.x

; Platform indicator module.
projects[platform][version] = 1.4

; Use Commerce Kickstart as Drupal core.
projects[commerce_kickstart][type] = core

; Patches against Drupal core.
projects[commerce_kickstart][patch][] = "patches/drupal_htaccess-www.patch"
projects[commerce_kickstart][patch][] = "patches/drupal_htaccess-advagg.patch"
projects[commerce_kickstart][patch][] = "patches/drupal_htaccess-feedburner.patch"
projects[commerce_kickstart][patch][] = "https://www.drupal.org/files/issues/ignore_front_end_vendor-2329453-111.patch"
projects[commerce_kickstart][patch][] = "https://www.drupal.org/files/issues/drupal-2289493-3-image_get_info-filesize-D7.patch"

; Patches against Commerce Kickstart core.
; projects[commerce_kickstart][patch][] = "https://www.drupal.org/files/issues/2831133-Undefined_index_path_in_commerce_kickstart_menus_menu_breadcrumb_alter.patch"

; Patches against Commerce Kickstart modules.
projects[commerce][patch][] = "https://www.drupal.org/files/issues/commerce_cart_summary_translation_more_kittehs_1477758_10.patch"
projects[rules][patch][] = "https://www.drupal.org/files/issues/2406863_rules-7-x-2.10-configurable_rules_stampede_protection-126.patch"
projects[token][patch][] = "https://www.drupal.org/files/issues/token_filename-without-extension_2106979-12.patch"
projects[views][patch][] = "https://www.drupal.org/files/issues/2329259_views_remove_php_access.patch"

; Drush make allows a default sub-directory for all contributed projects.
defaults[projects][subdir] = contrib

; ================
; Contrib modules.
; ================

projects[a11y_titles][version] = "1.0-beta1"

projects[advagg][version] = "2.30"

projects[auto_entitylabel][version] = "1.4"

projects[autocomplete_deluxe][version] = "2.3"

projects[backup_migrate][version] = "3.5"

projects[block_class][version] = "2.3"

projects[blockify][version] = "1.2"

projects[breakpoints][version] = "1.4"

projects[cer][version] = "3.0-beta1"

projects[charts][version] = "2.0-rc1"

projects[checklistapi][version] = "1.2"

projects[ckeditor][version] = "1.18"

projects[ckeditor_image2][version] = "1.1"

projects[coffee][version] = "2.3"

projects[colorbox_node][version] = "3.5"

projects[commerce_feeds][version] = "1.4"

projects[commerce_google_analytics][version] = "2.0"

projects[commerce_reports][version] = "4.0-beta3"

projects[commerce_responsive_ui][version] = "1.x-dev"
projects[commerce_responsive_ui][patch][] = "https://www.drupal.org/files/issues/commerce_responsive_ui-fixes_cart_redirect_checkout-2641754_7.patch"
projects[commerce_responsive_ui][patch][] = "https://www.drupal.org/files/issues/commerce_responsive_ui-remove_commas_from_classes-2687007-2.patch"

projects[devel][version] = "1.5"

projects[dialog][version] = "2.0-beta1"

projects[diff][version] = "3.3"

projects[disable_messages][version] = "1.1"

projects[disqus][version] = "1.12"

projects[ds][version] = "2.14"

projects[ds_extra_layouts][version] = "1.2"

projects[elements][version] = "1.4"

projects[entity_embed][version] = "2.0-alpha3"

projects[entitycache][version] = "1.5"

projects[entityqueue][version] = "1.3"

projects[environment_indicator][version] = "2.9"

projects[escape_admin][version] = "1.2"

projects[fast_404][version] = "1.5"

projects[features_extra][version] = "1.0"

projects[feeds][version] = "2.0-beta4"

projects[feeds_tamper][version] = "1.2"

projects[ffc][version] = "1.0-beta2"
projects[ffc][patch][] = "https://www.drupal.org/files/issues/ffc-allow-multiple-conditions-2215567-2.patch"

projects[field_formatter_settings][version] = "1.1"

projects[field_multiple_limit][version] = "1.0-alpha5"

projects[field_validation][version] = "2.6"

projects[file_entity][version] = "2.15"

projects[file_entity_inline][version] = "1.0-beta1"

projects[filefield_paths][version] = "1.0"

projects[filefield_sources][version] = "1.11"

projects[fitvids][version] = "1.17"

projects[ga_push][version] = "1.1"

projects[globalredirect][version] = "1.5"

projects[google_analytics][version] = "2.4"

projects[google_analytics_reports][version] = "3.1"

projects[hide_php_fatal_error][version] = "1.0"

projects[hide_submit][version] = "2.4"

projects[hierarchical_select][version] = "3.0-beta8"

projects[html5_tools][version] = "1.3"

projects[httprl][version] = "1.14"

projects[icon_tabs][version] = "1.5"

projects[image_resize_filter][version] = "1.16"

projects[imageapi_optimize][version] = "1.3"

projects[imagecache_actions][version] = "1.8"

projects[imagecache_token][version] = "1.0-rc2"

projects[imageinfo_cache][version] = "3.5"

projects[imagezoom][version] = "2.1"

projects[imce][version] = "1.11"

projects[imce_mkdir][version] = "1.0"

projects[imce_plupload][version] = "2.0"

projects[imce_rename][version] = "1.3"

projects[imce_tools][version] = "1.2"

projects[job_scheduler][version] = "2.0-alpha3"

projects[jquery_update][version] = "2.7"

projects[lazyloader][version] = "1.4"

projects[lazyloader_filter][version] = "1.4"

projects[linkchecker][version] = "1.3"

projects[linkit][version] = "3.5"

projects[mailcontrol][version] = "1.0"

projects[menu_trail_by_path][version] = "3.3"

projects[metatag][version] = "1.22"

projects[migrate_d2d][version] = "2.1"

projects[paranoia][version] = "1.7"

projects[path_redirect_import][version] = "1.0-rc4"

projects[pathologic][version] = "3.1"

projects[plupload][version] = "1.7"

projects[prlp][version] = "1.3"

projects[redirect][version] = "1.0-rc3"

projects[redis][version] = "3.17"

projects[schemaorg][version] = "1.0-rc1"

projects[seckit][version] = "1.9"

projects[search404][version] = "1.6"

projects[search_api_solr][version] = "1.12"

projects[searchapimultiaggregate][version] = "1.2"

projects[seo_checker][version] = "1.8"

projects[seo_checklist][version] = "4.1"

projects[stage_file_proxy] = "1.7"

projects[stringoverrides][version] = "1.8"

projects[table_element][version] = "1.0-beta5"

projects[telephone][version] = "1.0-alpha1"

projects[transliteration][version] = "3.2"

projects[tvi][version] = "1.0"

projects[typogrify][version] = "1.0-rc10"

projects[video_filter][version] = "3.4"

projects[views_data_export][version] = "3.2"

projects[views_date_format_sql][version] = "3.3"

projects[xmlsitemap][version] = "2.3"

; ==========
; Libraries.
; ==========

libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.11/ckeditor_4.5.11_standard.zip"
libraries[ckeditor][destination] = "libraries"

libraries[ckeditor_lineutils][directory_name] = "ckeditor/plugins/lineutils"
libraries[ckeditor_lineutils][type] = "libraries"
libraries[ckeditor_lineutils][download][type] = "file"
libraries[ckeditor_lineutils][download][url] = "http://download.ckeditor.com/lineutils/releases/lineutils_4.5.11.zip"
libraries[ckeditor_lineutils][destination] = "libraries"

libraries[ckeditor_widget][directory_name] = "ckeditor/plugins/widget"
libraries[ckeditor_widget][type] = "libraries"
libraries[ckeditor_widget][download][type] = "file"
libraries[ckeditor_widget][download][url] = "http://download.ckeditor.com/widget/releases/widget_4.5.11.zip"
libraries[ckeditor_widget][destination] = "libraries"

libraries[ckeditor_dialogui][directory_name] = "ckeditor/plugins/dialogui"
libraries[ckeditor_dialogui][type] = "libraries"
libraries[ckeditor_dialogui][download][type] = "file"
libraries[ckeditor_dialogui][download][url] = "http://download.ckeditor.com/dialogui/releases/dialogui_4.5.11.zip"
libraries[ckeditor_dialogui][destination] = "libraries"

libraries[ckeditor_image2][directory_name] = "ckeditor/plugins/image2"
libraries[ckeditor_image2][type] = "libraries"
libraries[ckeditor_image2][download][type] = "file"
libraries[ckeditor_image2][download][url] = "http://download.ckeditor.com/image2/releases/image2_4.5.11.zip"
libraries[ckeditor_image2][destination] = "libraries"

libraries[ckeditor_autogrow][directory_name] = "ckeditor/plugins/autogrow"
libraries[ckeditor_autogrow][type] = "libraries"
libraries[ckeditor_autogrow][download][type] = "file"
libraries[ckeditor_autogrow][download][url] = "http://download.ckeditor.com/autogrow/releases/autogrow_4.5.11.zip"
libraries[ckeditor_autogrow][destination] = "libraries"

libraries[elevatezoom-plus][directory_name] = "elevatezoom-plus"
libraries[elevatezoom-plus][type] = "libraries"
libraries[elevatezoom-plus][download][type] = "git"
libraries[elevatezoom-plus][download][url] = "https://github.com/igorlino/elevatezoom-plus.git"
libraries[elevatezoom-plus][destination] = "libraries"

libraries[fitvids][directory_name] = "fitvids"
libraries[fitvids][type] = "libraries"
libraries[fitvids][download][type] = "file"
libraries[fitvids][download][url] = "https://raw.github.com/davatron5000/FitVids.js/master/jquery.fitvids.js"
libraries[fitvids][destination] = "libraries"

libraries[fontfaceobserver][directory_name] = "fontfaceobserver"
libraries[fontfaceobserver][type] = "libraries"
libraries[fontfaceobserver][download][type] = "git"
libraries[fontfaceobserver][download][url] = "https://github.com/bramstein/fontfaceobserver.git"
libraries[fontfaceobserver][destination] = "libraries"

libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "libraries"
libraries[plupload][download][type] = "file"
; libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
; Fork of project without examples folder.
; @see https://www.drupal.org/node/1903850
libraries[plupload][download][url] = "https://github.com/dw72/plupload/archive/no-examples.zip"
libraries[plupload][destination] = "libraries"

libraries[predis][directory_name] = "predis"
libraries[predis][type] = "libraries"
libraries[predis][download][type] = "file"
libraries[predis][download][url] = "https://github.com/nrk/predis/archive/v1.1.1.tar.gz"
libraries[predis][destination] = "libraries"

libraries[predis][directory_name] = "YUI-CSS-compressor-PHP-port"
libraries[predis][type] = "libraries"
libraries[predis][download][type] = "file"
libraries[predis][download][url] = "https://github.com/tubalmartin/YUI-CSS-compressor-PHP-port/archive/master.zip"
libraries[predis][destination] = "libraries"
