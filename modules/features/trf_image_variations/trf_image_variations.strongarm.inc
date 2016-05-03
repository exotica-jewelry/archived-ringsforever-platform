<?php
/**
 * @file
 * trf_image_variations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function trf_image_variations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    '' => array(

      # Since we can't stop the filename errors from happening
      # when a ring is updated, we change the error message to
      # something benign, but include the filename in case a real
      # error like this ever does occurr.
      'The specified file %file could not be copied, because no file by that name exists. Please check that you supplied the correct filename.' => 'File %file updated.',

      'The title is used as a tool tip when the user hovers the mouse over the image.' => 'This text is used as an image caption on ring pages, as well as a tooltip when a visitor hovers their mouse over any image.',
    ),
  );
  $export['locale_custom_strings_en'] = $strongarm;

  return $export;
}
