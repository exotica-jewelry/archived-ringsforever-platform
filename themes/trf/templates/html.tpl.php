<?php /*
 *
 * Overrides profiles/commerce_kickstart/themes/contrib/omega/omega/templates/html.tpl.php
 *
 * Copies most of the template from sites/all/modules/html5_tools/html.tpl.php
 *
 * Adds favicon markup directly.
 *
 *
 *
 * @file
 * html5_tools module implementation to display the basic html structure of a single
 * Drupal page.
 *
 * HTML5 Tools Variables:
 * - $rdf_header: The HTML5 + RDFA header if the rdf module is enabled, if not it is
 *   an empty string to allow for simple print statement in the template file.
 * - $rdf_profile: The rdf profile string if the rdf module is enabled, if not it is
 *   an empty string to allow for simple print statement in the template file.
 * - $html_attributes: String of attributes for the html element. It can be
 *   manipulated through the variable $html_attributes_array from preprocess
 *   functions.
 * - $html_attributes_array: Array of html attribute values. It is flattened
 *   into a string within the variable $html_attributes.
 *
 * Core Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see html5_tools_process_html()
 */
?><!doctype html<?php print $rdf_header; ?>>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?><?php print $html_attributes; ?>>
<head<?php print $rdf_profile?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <link rel="apple-touch-icon" sizes="180x180" href="/sites/all/themes/trf/favicons/apple-touch-icon.png">
  <link rel="icon" type="image/png" href="/sites/all/themes/trf/favicons/favicon-32x32.png" sizes="32x32">
  <link rel="icon" type="image/png" href="/sites/all/themes/trf/favicons/favicon-16x16.png" sizes="16x16">
  <link rel="manifest" href="/sites/all/themes/trf/favicons/manifest.json">
  <link rel="mask-icon" href="/sites/all/themes/trf/favicons/safari-pinned-tab.svg" color="#54b2fc">
  <meta name="theme-color" content="#54b2fc">
  <meta name="format-detection" content="telephone=no">
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
