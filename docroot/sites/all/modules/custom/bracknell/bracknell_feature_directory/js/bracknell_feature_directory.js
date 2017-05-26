'use strict';

(function ($) {
  Drupal.behaviors.bracknell_feature_directory_parks_show_more_button = {
    attach: function (context, settings) {
      if ($('[data-js="showcase-reveal"]', context).length !== 0) {
        var self = $('[data-js="showcase-reveal"]'),
            totalItems = self.find('.showcase .views-row').length;

        // If there are more than 9 items, add a button to show/hide any additional items.
        if (totalItems > 9) {
          // Create the button element and add attributes.
          var displayButton = $(document.createElement('button')),
              locationType = self.attr('data-title'),
              displayButtonTextHidden = Drupal.t('More @type', {'@type': locationType}),
              displayButtonTextShown = Drupal.t('Fewer @type', {'@type': locationType});

          var buttonMarkUp = '<span class="button-text">' + displayButtonTextHidden + ' </span> ' +
            '<span class="icon theme-icon-triangle-down"></span>';

          displayButton.attr({
            'aria-controls': 'parks-view',
            'aria-expanded': 'false',
            'data-js': 'showcase-button',
            'class': 'btn btn-primary showcase-button'
          }).html(buttonMarkUp);

          $('[data-js="showcase-reveal"] .showcase-footer').append(displayButton);

          // Add a class to the first hidden item so we can move keyboard focus to it later.
          self.find('.showcase .views-row').filter(':eq(9), :gt(9)').first().addClass('showcase-first-item-hidden').attr('tabindex', '-1').css('outline', 'none');

          // Hide additional items - leave 9 items displayed by default.
          self.find('.showcase .views-row').filter(':eq(9), :gt(9)').hide().attr('aria-hidden', true);

          displayButton.on('click', function () {
            if ($(this).attr('aria-expanded') === 'false') {
              self.find('.showcase .views-row').filter(':eq(9), :gt(9)').show().attr('aria-hidden', false);
              $(this).attr('aria-expanded', true).find('.button-text').text(displayButtonTextShown);
              $(this).find('.icon').addClass('theme-icon-triangle-up').removeClass('theme-icon-triangle-down');
              // Move keyboard focus to the first revealed item.
              self.find('.showcase-first-item-hidden').focus();
            }
            else {
              self.find('.showcase .views-row').filter(':eq(9), :gt(9)').hide().attr('aria-hidden', true);
              $(this).attr('aria-expanded', false).find('.button-text').text(displayButtonTextHidden);
              $(this).find('.icon').addClass('theme-icon-triangle-down').removeClass('theme-icon-triangle-up');
            }
          });
        }
      }
    }
  }
})(jQuery);
