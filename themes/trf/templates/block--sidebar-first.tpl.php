<?php /* Overrides profiles/commerce_kickstart/themes/contrib/omega/omega/templates/block.tpl.php */ ?>
<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php
      $block_handle = '<h3 class="block-title">' . $block->subject . '</h3>';

      print theme(
        'ctools_collapsible',
        array(
          'handle' => $block_handle,
          'content' => $content,
          'collapsed' => TRUE
        )
      );
    ?>
  </div>
</<?php print $tag; ?>>
