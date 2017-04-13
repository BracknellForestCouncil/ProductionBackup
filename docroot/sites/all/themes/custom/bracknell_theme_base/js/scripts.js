"use strict";

(function ($) {
  Drupal.behaviors.bracknellThemeBaseBehavior = {
    attach: function attach(context, settings) {
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

  Drupal.behaviors.bracknellMainMenu = {
    attach: function attach(context, settings) {
      $('[data-js="main-menu"]').find('.collapse').hide().attr('aria-hidden', 'true');

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

        $('[data-js="logo"]').append(mainMenuButton);

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
          }).addClass('main-menu-btn-expanded').removeClass('main-menu-btn-collapsed');
        }
        else {
          mainMenu.hide().attr({
            'aria-hidden': 'true'
          });
          button.attr({
            'aria-expanded': 'false',
            'data-toggle': 'closed'
          }).addClass('main-menu-btn-collapsed').removeClass('main-menu-btn-expanded');
        }
      });
    }
  };

  Drupal.behaviors.bracknellSearch = {
    attach: function attach(context, settings) {
      var searchBlock = $('[data-js="search"]'),
          searchButton;

      // Check if the search block exists before we do anything.
      if (searchBlock.length !== 0) {
        $(window).resize(function() {
          var mediaQuery = Modernizr.mq('only screen and (max-width: 768px)');
          if (mediaQuery) {
            console.log('mobile');
            // Check if the button exists, if not create and append the button.
            if ($('[data-js="search-button"]').length === 0) {
              createButton();
              searchButton.insertBefore('[data-js="main-menu-button"]');
            }

            if ($('.search form *').focus()) {
              console.log('here');
              // Hide search form.
              actionClose();
            }
            else {
              actionOpen();
            }
          }
          else {
            console.log('desktop');
            // Reset the dom on desktop.
            searchBlock.show().removeAttr('aria-hidden');
            $('[data-js="search-button"]').off().remove();
          }
        }).resize();
      }

      function createButton() {
        // Create search button.
        searchButton = $('<button>' +
          '<span class="search-btn-copy">' + Drupal.t('Search') +'</span>' +
          '</button>');

        searchButton.attr({
          'class': 'btn search-btn icon glyphicon glyphicon-search',
          'aria-expanded': 'false',
          'aria-controls': 'search-wrapper',
          'data-toggle': 'closed',
          'data-js': 'search-button'
        });

        searchButton.on('click', function () {
          var button = $(this),
              status = button.attr('aria-expanded');

          console.log(status);
          if (status === 'true') {
            actionClose();
          }
          else {
            actionOpen();
          }
        });
      };

      function actionOpen() {
        searchBlock
          .attr('aria-hidden', 'false')
          .show()

        searchButton
          .attr({
            'aria-expanded': 'true',
            'data-toggle': 'open'
          });
      };

      function actionClose() {
        searchBlock
          .attr('aria-hidden', 'true')
          .hide()

        searchButton
          .attr({
            'aria-expanded': 'false',
            'data-toggle': 'closed'
          });
      };
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

  Drupal.behaviors.bracknellCategoryShowcase = {
    attach: function (context, settings) {
      if ($('.showcase').length !== 0) {
        $('.showcase-item').each(function() {
          var slide = $(this),
              boxHeight = $(slide).height(),
              titleHeight = $('.showcase-item-title', this).outerHeight(false),
              startHeight = boxHeight - titleHeight;

          $('.showcase-overlay', slide).css({
            height: boxHeight,
            top: startHeight
          });

          slide.hover(function() {
            startAni();
          }, function() {
            stopAni();
          });

          function startAni() {
            $('.showcase-overlay', slide).stop().animate({
              top: 0
            }, {
              queue: false,
              duration: 100
            });
          }

          function stopAni() {
            $('.showcase-overlay', slide).stop().animate({
              top: startHeight
            }, {
              queue: false,
              duration: 100
            });
          }
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
