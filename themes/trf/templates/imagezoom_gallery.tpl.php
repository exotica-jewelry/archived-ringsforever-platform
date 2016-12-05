<?php /*
 *
 * Overrides sites/all/modules/imagezoom/modules/imagezoom_gallery/theme/imagezoom_gallery.tpl.php
 *
 * @file
 * Template for an Image Zoom gallery.
 *
 * Available variables:
 * - $image: The display image.
 * - $thumbs: An array of thumbnail images.
 */
?>

<?php print $image; ?>

<?php /* Display thumbnails only if there is more than one. */ ?>
<?php if (count($thumbs) !== 1): ?>
  <div id="imagezoom-thumb-wrapper" class="imagezoom-thumbs-wrapper">
    <ul class="imagezoom-thumbs">
      <?php foreach ($thumbs as $thumb): ?>
        <li class="imagezoom-thumb"><?php print $thumb; ?></li>
      <?php endforeach; ?>
    </ul>
  </div>
<?php endif; ?>
