<?php

/**
 * @file
 * Drupal settings overrides.
 *
 * @see https://docs.platform.sh/frameworks/drupal7/customizing-settings-php.html
 */

# Ensure admin form access is off
$update_free_access = FALSE;
$drupal_hash_salt = 'iZm7JwN2G7mOU4vKRqsGdy5AULWoNTuyOi08mmJErF6';

# Set anonymous name
$conf['anonymous'] = 'Visitor';

# Set file paths
$conf['file_public_path'] = 'sites/default/files';
# $conf['file_private_path'] = '/app/private';
# $conf['file_temporary_path'] = '/app/tmp';

# Set caching
$conf['cache'] = TRUE;
$conf['block_cache'] = TRUE;
$conf['preprocess_css'] = TRUE;
$conf['preprocess_js'] = TRUE;
$conf['page_compression'] = TRUE;

# Fast404 pass-throughs for AdvAgg
$conf['404_fast_paths_exclude'] = '/\/(?:styles|advagg_(cs|j)s)\//';
$conf['fast_404_string_whitelisting'][] = '/advagg_';

# Disabling AdvAgg expires notices
$conf['advagg_skip_far_future_check'] = TRUE;

# Set error display
# 0 = log only; 1 = hard errors; 2 = all warnings
# $conf['error_level'] = 0;
# ini_set('display_errors', FALSE);
# ini_set('display_startup_errors', FALSE);

error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('display_startup_errors', TRUE);
ini_set('display_errors', '2');
$conf['error_level'] = 2;

# Allow Drupal to preserve double underscores (BEM syntax)
$conf['allow_css_double_underscores'] = TRUE;

# Include local settings -- required
$local_settings = dirname(__FILE__) . '/settings.local.php';
if (file_exists($local_settings)) {
  require_once($local_settings);
}
