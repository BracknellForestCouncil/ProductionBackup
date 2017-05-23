'use strict';

(function ($) {
  Drupal.behaviors.bracknell_feature_directory_parks_show_more_button = {
    attach: function (context, settings) {
      if ($('[data-js="showcase-reveal"]', context).length !== 0) {
        var self = $('[data-js="showcase-reveal"]'),
            totalItems = self.find('.showcase .views-row').length;

        if (totalItems > 9) {
          var displayButton = $(document.createElement('button')),
              displayButtonTitle = self.attr('data-title');

          displayButton.attr({
            'aria-controls': 'parks-view',
            'aria-expanded': 'false',
            'data-js': 'showcase-button',
            'class': 'btn btn-primary showcase-button'
          });

          var buttonMarkUp =
            '<span class="button-text">More </span> ' +
            '<span class="button-title">' + displayButtonTitle + '</span> ' +
            '<span class="icon theme-icon-triangle-down"></span>';

          var element = $(buttonMarkUp);
          displayButton.html(element);

          $('[data-js="showcase-reveal"] .showcase').append(displayButton);

          self.find('.showcase .views-row').filter(':eq(9), :gt(9)').hide().attr({
            'aria-hidden': 'true',
            'aria-expanded': 'false'
          });

          displayButton.on('click', function () {
            if ($(this).attr('aria-expanded') === 'false') {
              self.find('.showcase .views-row').filter(':eq(9), :gt(9)').show().attr({
                'aria-hidden': 'false',
                'aria-expanded': 'true'
              });
              $(this).attr('aria-expanded', 'true').find('.button-text').text('Fewer')
              $(this).find('.icon').addClass('theme-icon-triangle-up').removeClass('theme-icon-triangle-down');
              //self.find('.' + self.options.wrapperClass + '__item--first-hidden').focus();
            }
            else {
              self.find('.showcase .views-row').filter(':eq(9), :gt(9)').hide().attr({
                'aria-hidden': 'true',
                'aria-expanded': 'false'
              });
              $(this).attr('aria-expanded', 'false').find('.button-text').text('More')
              $(this).find('.icon').addClass('theme-icon-triangle-down').removeClass('theme-icon-triangle-up');
            }
          });
        }
      }
    }
  }
})(jQuery);
