api = 2
core = 7.x

; Platform indicator module.
projects[platform][version] = 1.3

; Use Commerce Kickstart as Drupal core.
projects[commerce_kickstart][type] = core

; Patches against Drupal core.
projects[drupal][patches][] = "https://www.drupal.org/files/issues/ignore_frontend_folders-2329453-101-7.x.patch"
projects[drupal][patches][] = "https://www.drupal.org/files/issues/drupal-remove_double_underscore_from_css_filter-1109854-43.patch"

; Patches against Commerce Kickstart modules.
projects[cloud_zoom][patches][] = "https://www.drupal.org/files/issues/cloud_zoom-1.0.3-touch-enable-1568270-3.patch"
projects[rules][patches][] = "http://cgit.drupalcode.org/rules/patch/?id=b79bbb97dbc0e9bd0fa20c17bfaf62dc8f9bf7b7"
projects[token][patches][] = "https://www.drupal.org/files/issues/token_filename-without-extension_2106979-12.patch"
projects[views][patches][] = "https://www.drupal.org/files/issues/views-row-class-underscores-1371118-27.patch"

; Drush make allows a default sub directory for all contributed projects.
defaults[projects][subdir] = contrib
