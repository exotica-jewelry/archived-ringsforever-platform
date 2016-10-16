<?php /*
 *
 * Overrides sites/all/modules/imagezoom/modules/imagezoom_gallery/theme/imagezoom_thumb.tpl.php
 *
 * @file
 * Template for an Image Zoom thumbnail image.
 *
 * Available variables:
 * - $image: The path to the display image.
 * - $zoom: The path to the zoom image.
 * - $thumb: The path to the thumbnail image.
 * - $width: The width of the thumbnail.
 * - $height: The height of the thumbnail.
 */
?>

<a class="imagezoom-thumb__link" href="#" data-image="<?php print $image; ?>" data-zoom-image="<?php print $zoom; ?>">
  <img src="<?php print $thumb; ?>" <?php if ($width): ?>width="<?php print $width; ?>" <?php endif; ?> <?php if ($height): ?>height="<?php print $height; ?>" <?php endif; ?> />
</a>
