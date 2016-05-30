api = 2
core = 7.x

; Platform indicator module.
projects[platform][version] = 1.3

; Use Commerce Kickstart as Drupal core.
projects[commerce_kickstart][type] = core

; Patches against Drupal core.
projects[commerce_kickstart][patch][] = "https://www.drupal.org/files/issues/ignore_front_end_vendor-2329453-111.patch"
projects[commerce_kickstart][patch][] = "https://www.drupal.org/files/issues/drupal-remove_double_underscore_from_css_filter-1109854-43.patch"

; Patches against Commerce Kickstart modules.
projects[rules][patch][] = "http://cgit.drupalcode.org/rules/patch/?id=b79bbb97dbc0e9bd0fa20c17bfaf62dc8f9bf7b7"
projects[token][patch][] = "https://www.drupal.org/files/issues/token_filename-without-extension_2106979-12.patch"
projects[views][patch][] = "https://www.drupal.org/files/issues/views-row-class-underscores-1371118-31.patch"

; Drush make allows a default sub directory for all contributed projects.
defaults[projects][subdir] = contrib

; ================
; Contrib modules.
; ================

projects[auto_entitylabel][version] = "1.3"

projects[autocomplete_deluxe][version] = "2.1"

projects[backup_migrate][version] = "3.1"

projects[block_class][version] = "2.3"

projects[breakpoints][version] = "1.4"

projects[cer][version] = "3.0-alpha7"

projects[charts][version] = "2.0-rc1"

projects[ckeditor][version] = "1.17"

projects[coffee][version] = "2.2"

projects[colorbox][version] = "2.10"

projects[colorbox_node][version] = "3.5"

projects[commerce_feeds][version] = "1.4"

projects[commerce_reports][version] = "4.0-beta3"

projects[devel][version] = "1.5"

projects[diff][version] = "3.2"

projects[ds][version] = "2.14"

projects[ds_extra_layouts][version] = "1.1"

projects[elements][version] = "1.4"

projects[entity_embed][version] = "1.0-alpha4"

projects[environment_indicator][version] = "2.8"

projects[escape_admin][version] = "1.2"

projects[features_extra][version] = "1.0"

projects[feeds][version] = "2.0-beta2"

projects[feeds_tamper][version] = "1.1"

projects[ffc][version] = "1.0-beta2"
projects[ffc][patch][] = "https://www.drupal.org/files/issues/ffc-allow-multiple-conditions-2215567-2.patch"

projects[field_formatter_settings][version] = "1.1"

projects[field_multiple_limit][download][branch] = "7.x-1.x"
projects[field_multiple_limit][download][revision] = "6bbcd72"
projects[field_multiple_limit][patch][] = "https://www.drupal.org/files/field_multiple_limit-ignore_missing_cardinality-1958614-1.patch"

projects[field_validation][version] = "2.6"

projects[file_entity][version] = "2.0-beta2"

projects[file_entity_inline][version] = "1.0-beta1"

projects[filefield_paths][version] = "1.0"

projects[filefield_sources][version] = "1.10"

projects[globalredirect][version] = "1.5"

projects[hide_submit][version] = "2.4"

projects[hierarchical_select][version] = "3.0-beta4"

projects[icon_tabs][version] = "1.5"

projects[imagecache_actions][version] = "1.7"

projects[imageapi_optimize][version] = "1.2"
projects[imageapi_optimize][patch][] = "https://www.drupal.org/files/issues/imageapi_optimize-add-resmushit-service-2458453-25.patch"

projects[imagezoom][version] = "2.0-beta2"
projects[imagezoom][patch][] = "https://www.drupal.org/files/issues/imagezoom-image_thumbnails_are-2623896-2.patch"

projects[imce][version] = "1.10"

projects[imce_tools][version] = "1.2"

projects[imce_plupload][version] = "2.0"

projects[job_scheduler][version] = "2.0-alpha3"

projects[jquery_update][version] = "2.7"

projects[linkit][version] = "3.5"

projects[mailcontrol][version] = "1.0"

projects[migrate_d2d][version] = "2.1"

projects[picture][version] = "2.13"

projects[plupload][version] = "1.7"

projects[redirect][version] = "1.0-rc3"

projects[redis][version] = "3.12"

projects[search_api_solr][version] = "1.10"

projects[searchapimultiaggregate][version] = "1.2"

projects[stringoverrides][version] = "1.8"

projects[table_element][version] = "1.0-beta5"

projects[transliteration][version] = "3.2"

projects[tvi][version] = "1.0-beta6"

projects[typogrify][version] = "1.0-rc10"

projects[views_data_export][version] = "3.0-beta9"

projects[views_date_format_sql][version] = "3.3"

; =======
; Libraries.
; =======

libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.8/ckeditor_4.5.8_standard.zip"
libraries[ckeditor][destination] = "libraries"

libraries[elevatezoom][directory_name] = "elevatezoom"
libraries[elevatezoom][type] = "libraries"
libraries[elevatezoom][download][type] = "git"
libraries[elevatezoom][download][url] = "https://github.com/elevateweb/elevatezoom.git"
libraries[elevatezoom][destination] = "libraries"

libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "libraries"
libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
libraries[plupload][destination] = "libraries"

libraries[predis][directory_name] = "predis"
libraries[predis][type] = "libraries"
libraries[predis][download][type] = "file"
libraries[predis][download][url] = "https://github.com/nrk/predis/archive/v1.0.tar.gz"
libraries[predis][destination] = "libraries"
