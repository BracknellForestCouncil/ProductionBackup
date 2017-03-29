"use strict";

(function ($) {
  Drupal.behaviors.bracknellThemeBaseBehavior = {
    attach: function attach(context, settings) {
      $('[data-js="main-menu"]').find('.collapse').hide().attr('aria-hidden', 'true');

      // Create main menu button.
      var mainMenuButton = $('<button>' +
        '<span class="button-copy pull-left"></span>' +
        '<span aria-hidden="true" class="icon-bars-wrap pull-left">' +
          '<span class="icon-bar top"></span>' +
          '<span class="icon-bar centre"></span>' +
          '<span class="icon-bar bottom"></span>' +
        '</span>' +
        '</button>');
      mainMenuButton.attr({
        'class': 'main-menu-btn',
        'aria-expanded': 'false',
        'aria-controls': 'main-nav',
        'data-toggle': 'closed',
        'data-js': 'main-menu-button'
      });
      mainMenuButton.find('.button-copy').text(Drupal.t('Menu'));
      $('[data-js="main-menu-trigger"]').append(mainMenuButton);

      $('[data-js="main-menu-button"]').on('click', function () {
        var button = $(this),
            status = button.attr('aria-expanded'),
            mainMenu = $('[data-js="main-menu"]');

        if (status === 'false') {
          mainMenu.show().attr({
            'aria-hidden': 'false'
          });
          button.attr({
            'aria-expanded': 'true',
            'data-toggle': 'open'
          }).addClass('expanded').removeClass('collapsed');
        }
        else {
          mainMenu.hide().attr({
            'aria-hidden': 'true'
          });
          button.attr({
            'aria-expanded': 'false',
            'data-toggle': 'closed'
          }).addClass('collapsed').removeClass('expanded');
        }
      });

      // Fix related links location on guide pages
      // media query checking for minimum 992px  event handler
      if (matchMedia) {
        var mq_992px = window.matchMedia("(min-width:992px)");
        mq_992px.addListener(WidthChange);
        WidthChange(mq_992px);
      }
      // media query change
      function WidthChange(mq_992px) {
        if (mq_992px.matches) {
          $('.node-type-guide-section .region-sidebar-second').css('margin-top', $("[id^='guide-navigation-']").height() + 70 + 'px');
        } else {
          $('.node-type-guide-section .region-sidebar-second').css('margin-top', 0 + 'px');
        }
      }
    }
  };

  Drupal.behaviors.bracknellTabs = {
    attach: function (context, settings) {
      if ($('.acc-tabs-panel').length > 1) {
        $('.acc-tabs').accTabs({
          containerClass: 'js-acc-tabs',
          controlActiveClass: 'js-acc-tabs-control-item-active',
          tabPanelClass: 'js-acc-tabs-panel',
          panelActiveClass: 'js-tabs-panel-active',
          controlsTextClass: 'element-invisible',
          tabControlsClass: 'js-acc-tabs-control'
        });
      }
    }
  };

})(jQuery);

// Tooltip for My account
(function ($) {
  $(function () {
    $('[data-toggle="tooltip-my-account"]').tooltip();
  });
})(jQuery);
//# sourceMappingURL=scripts.js.map
