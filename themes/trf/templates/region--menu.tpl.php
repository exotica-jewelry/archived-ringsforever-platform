<?php /* /Overrides profiles/commerce_kickstart/themes/commerce_kickstart_theme/templates/region--menu.tpl.php */ ?>
<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($main_menu || $secondary_menu): ?>
    <nav class="navigation">
      <div class="navigation--secondary inline">
        <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'menu--secondary', 'class' => array('links', 'inline', 'menu', 'menu--secondary')), 'heading' => array('text' => t('Popular »'),'level' => 'h2','class' => array('menu__title')))); ?>
      </div>
      <div class="navigation--primary inline">
        <?php print theme('links__system_main_menu', array('prefix' => '<div>', 'links' => $main_menu, 'attributes' => array('id' => 'menu--primary', 'class' => array('links', 'inline', 'menu', 'menu--primary')), 'heading' => array('text' => t('Collections »'),'level' => 'h2','class' => array('element-invisible', 'menu__title')))); ?>
      </div>
    </nav>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>
