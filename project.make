api = 2
core = 7.x

; Platform indicator module.
projects[platform][version] = 1.3

; Use Commerce Kickstart as Drupal core.
projects[commerce_kickstart][type] = core

; Patches against Drupal core.
projects[commerce_kickstart][patches][] = "https://www.drupal.org/files/issues/ignore_frontend_folders-2329453-101-7.x.patch"
projects[commerce_kickstart][patches][] = "https://www.drupal.org/files/issues/drupal-remove_double_underscore_from_css_filter-1109854-43.patch"

; Patches against Commerce Kickstart modules.
projects[cloud_zoom][patches][] = "https://www.drupal.org/files/issues/cloud_zoom-1.0.3-touch-enable-1568270-3.patch"
projects[rules][patches][] = "http://cgit.drupalcode.org/rules/patch/?id=b79bbb97dbc0e9bd0fa20c17bfaf62dc8f9bf7b7"
projects[token][patches][] = "https://www.drupal.org/files/issues/token_filename-without-extension_2106979-12.patch"
projects[views][patches][] = "https://www.drupal.org/files/issues/views-row-class-underscores-1371118-27.patch"

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

projects[editablefields][download][branch] = "7.x-1.x"
projects[editablefields][download][revision] = "9c618d4"

projects[elements][version] = "1.4"

projects[entity_embed][version] = "1.0-alpha4"

projects[environment_indicator][version] = "2.8"

projects[escape_admin][version] = "1.2"

projects[features_extra][version] = "1.0"

projects[feeds][version] = "2.0-beta2"

projects[feeds_tamper][version] = "1.1"

projects[ffc][version] = "1.0-beta2"
projects[ffc][patches][] = "https://www.drupal.org/files/issues/ffc-allow-multiple-conditions-2215567-2.patch"

projects[field_formatter_settings][version] = "1.1"

projects[field_multiple_limit][download][branch] = "7.x-1.x"
projects[field_multiple_limit][download][revision] = "6bbcd72"

projects[field_validation][version] = "2.6"

projects[file_entity][version] = "2.0-beta2"

projects[file_entity_inline][version] = "1.0-beta1"

projects[filefield_paths][version] = "1.0"

projects[filefield_sources][version] = "1.10"

projects[globalredirect][version] = "1.5"

projects[hierarchical_select][version] = "3.0-beta4"

projects[icon_tabs][version] = "1.5"

projects[imagecache_actions][version] = "1.7"

projects[imageapi_optimize][version] = "1.2"
projects[imageapi_optimize][patches][] = "https://www.drupal.org/files/issues/imageapi_optimize-add-resmushit-service-2458453-25.patch"

projects[imagezoom][version] = "2.0-beta2"
projects[imagezoom][patches][] = "https://www.drupal.org/files/issues/imagezoom-image_thumbnails_are-2623896-2.patch"

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

projects[searchapimultiaggregate][version] = "1.2"

projects[stringoverrides][version] = "1.8"

projects[table_element][version] = "1.0-beta5"

projects[transliteration][version] = "3.2"

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

libraries[elevatezoom][directory_name] = "elevatezoom"
libraries[elevatezoom][type] = "libraries"
libraries[elevatezoom][download][type] = "git"
libraries[elevatezoom][download][url] = "https://github.com/elevateweb/elevatezoom.git"

libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "libraries"
libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"
