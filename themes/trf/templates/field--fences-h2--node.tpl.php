<?php /* /Overrides profiles/commerce_kickstart/themes/contrib/omega/omega_kickstart/templates/field--fences-h2--node.tpl.php */ ?>
<?php
/**
 * @file field--fences-h2.tpl.php
 * Wrap title fields with the <h1> and <header> elements, and other fields with
 * the <h2> and <header> elements.
 *
 * @see http://developers.whatwg.org/sections.html#the-h1,-h2,-h3,-h4,-h5,-and-h6-elements
 */
?>
<?php if ($element['#label_display'] == 'inline'): ?>
  <span class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>:
  </span>
<?php elseif ($element['#label_display'] == 'above'): ?>
  <h3 class="field-label"<?php print $title_attributes; ?>>
    <?php print $label; ?>
  </h3>
<?php endif; ?>

<?php foreach ($items as $delta => $item): ?>
  <header>
    <?php if ($variables['element']['#field_name'] == 'title_field' && $variables['element']['#view_mode'] == 'full') { ?>
      <h1 class="<?php print $classes; ?>"<?php print $attributes; ?>>
        <?php print render($item); ?>
      </h1>
    <?php } else { ?>
      <h2 class="<?php print $classes; ?>"<?php print $attributes; ?>>
        <?php print render($item); ?>
      </h2>
    <?php } ?>
  </header>
<?php endforeach; ?>
