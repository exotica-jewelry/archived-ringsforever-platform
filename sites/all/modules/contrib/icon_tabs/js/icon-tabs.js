/**
 * @file
 * Attaches behaviors for the Icon Tabs.
 */

(function ($) {

/**
 * Attaches behaviour for icon tabs icon select.
 */
Drupal.behaviors.iconTabs = {
  attach: function (context) {
    speed = 200;

    $('#edit-icons .form-item input').each(function() {
      if ($(this).attr('value') != '') {
        iconCode = $(this).attr('value');
        icon = $(this).closest('.icon-select-wrapper').find('#' + iconCode).html();

        $(this).closest('.icon-select-wrapper').find('input.selected-icon').val(icon).attr('title', iconCode)
      }
    });

    $('#edit-icons input').focus(function() {
      $(this).closest('.icon-select-wrapper').find('table').fadeIn(speed);
    });
    $('#edit-icons input').blur(function() {
      $(this).closest('.icon-select-wrapper').find('table').fadeOut(speed);
    });
    $('#edit-icons .icon-clear').click(function(e) {
      e.preventDefault();
      $(this).closest('.icon-select-wrapper').find('input').val('');
      $(this).closest('.icon-select-wrapper').find('input.selected-icon').val('').attr('title', '');
    });

    $('#edit-icons table td').click(function() {
      iconCode = $(this).attr('id');
      icon = $(this).html();
      $(this).closest('.icon-select-wrapper').find('.form-item input').val(iconCode);
      $(this).closest('.icon-select-wrapper').find('input.selected-icon').val(icon).attr('title', iconCode);
      $(this).closest('.icon-select-wrapper').find('table').fadeOut(speed);
    });

  }
}

})(jQuery);
