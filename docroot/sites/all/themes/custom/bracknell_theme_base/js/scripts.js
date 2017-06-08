"use strict";

(function ($) {
  Drupal.behaviors.bracknellMainMenu = {
    attach: function (context, settings) {
      // Cache some jQuery selectors.
      var els = {};
      els.mainMenu = $('[data-js="main-menu"]', context);
      els.logo = $('[data-js="logo"]', context);

      // Define the classes for when the button is expanded or collapsed, for
      // better readibility later.
      var expandedClass = 'main-menu-btn-expanded';
      var collapsedClass = 'main-menu-btn-collapsed';

      // Initially close the menu with JS and add the aria-hidden attribute.
      els.mainMenu
        .find('.collapse')
        .hide()
        .attr('aria-hidden', 'true');

      // Generate the menu button using HTML generated from concatenated strings
      // and assigned to a jQuery object. Yeah, that.
      els.mainMenuButton = $('<button>' +
        '<span class="button-text pull-left"></span>' +
        '<span aria-hidden="true" class="icon-bars-wrap pull-left">' +
          '<span class="icon-bar top"></span>' +
          '<span class="icon-bar centre"></span>' +
          '<span class="icon-bar bottom"></span>' +
        '</span>' +
        '</button>');

      // Add some attributes to the button, whch could be in that string up
      // there but this way we can add some overhead to the page load ;)
      els.mainMenuButton.attr({
        'class': 'main-menu-btn',
        'aria-expanded': 'false',
        'aria-controls': 'main-nav',
        'data-toggle': 'closed',
        'data-js': 'main-menu-button'
      });

      // Add some text to the menu button, again outside of the initial string
      // for no real reason.
      els.mainMenuButton.find('.button-text').text(Drupal.t('Menu'));

      // Attach the jQuery element to the DOM. Into the... the logo?
      els.logo.append(els.mainMenuButton);

      // Events for when the main menu button is clicked, which should open and
      // close the menu, with the aria attributes being toggled accordingly.
      els.mainMenuButton.on('click', function () {
        var status = els.mainMenuButton.hasClass(expandedClass);
        if (!status) {
          els.mainMenu.show().attr({ 'aria-hidden': 'false' });
          els.mainMenuButton.attr({
            'aria-expanded': 'true',
            'data-toggle': 'open'
          }).addClass(expandedClass).removeClass(collapsedClass);
        }
        else {
          els.mainMenu.hide().attr({ 'aria-hidden': 'true' });
          els.mainMenuButton.attr({
            'aria-expanded': 'false',
            'data-toggle': 'closed'
          }).addClass(collapsedClass).removeClass(expandedClass);
        }
      });
    }
  };

  Drupal.behaviors.bracknellSearch = {
    attach: function (context, settings) {

      if (Modernizr.mq) {
        var els = {};
        els.searchBlock = $('[data-js="search"]', context);
        els.mainMenuButton = $('[data-js="main-menu-button"]', context);
        els.searchButton = $('[data-js="search-button"]', context);

        var buttonIsAdded = false;
        var searchIsOpen = false;

        // Check if the search block exists before we do anything.
        if (els.searchBlock.length > 0) {
          $(window).resize(function (e) {
            if (Modernizr.mq('only screen and (max-width: 768px)')) {
              // Check if the button exists, if not create and append the button.
              if (!buttonIsAdded) {
                // Create search button.
                var searchButtonNew = $('<button>' +
                  '<span class="search-btn-copy">' + Drupal.t('Search') +'</span>' +
                  '</button>');

                searchButtonNew.attr({
                  'class': 'btn search-btn icon theme-icon-search',
                  'aria-expanded': 'false',
                  'aria-controls': 'search-wrapper',
                  'data-toggle': 'closed',
                  'data-js': 'search-button'
                });

                searchButtonNew.on('click', function (e) {
                  var status = searchButtonNew.hasClass('search-btn-open');

                  if (status) {
                    actionCloseSearchForm();
                  }
                  else {
                    actionOpenSearchForm();
                  }
                });
                els.searchButton = searchButtonNew.insertBefore(els.mainMenuButton);
                buttonIsAdded = true;
              }

              // Check for the status of the search form e.g. if it is open or closed.
              // This is to ensure that if the media query matches and there is a resize event
              // e.g. when the keyboard is opened on Android mobile devices that the search
              // form retains the correct status.
              if (!searchIsOpen) {
                actionCloseSearchForm();
              }
              else {
                actionOpenSearchForm();
              }
            }
            else {
              // Reset the DOM on desktop.
              els.searchBlock.show().removeAttr('aria-hidden');
              els.searchButton.off().remove();
              searchIsOpen = false;
              buttonIsAdded = false;
            }
          }).resize();
        }

        // Show the search form, set attributes and status.
        function actionOpenSearchForm() {
          els.searchBlock
            .attr('aria-hidden', 'false')
            .show();

          if (els.searchButton !== undefined && els.searchButton.length > 0) {
            els.searchButton
              .addClass('search-btn-open')
              .attr({
                'aria-expanded': 'true',
                'data-toggle': 'open'
              });
          }
          searchIsOpen = true;
        };

        // Hide the search form, set attributes and status.
        function actionCloseSearchForm() {
          els.searchBlock
            .attr('aria-hidden', 'true')
            .hide();

          if (els.searchButton !== undefined && els.searchButton.length > 0) {
            els.searchButton
              .removeClass('search-btn-open')
              .attr({
                'aria-expanded': 'false',
                'data-toggle': 'closed'
              });
          }
          searchIsOpen = false;
        };
      }
    }
  };

  Drupal.behaviors.bracknellTabs = {
    attach: function (context, settings) {
      if ($('.acc-tabs-panel', context).length > 1) {
        $('.acc-tabs', context).accTabs({
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
    setOffset: function (overlay, offset) {
      overlay.css({ 'transform': 'translate3d(0, ' + offset + 'px, 0)' });
    },
    attach: function (context, settings) {
      var _self = this;
      if ($('.showcase', context).length > 0) {
        $('.showcase-item', context).each(function () {
          var showcaseItem = $(this);
          var overlay = $('.showcase-overlay', showcaseItem);
          var title = $('.showcase-item-title', showcaseItem);
          var titleOffset = overlay.height() - title.innerHeight();

          showcaseItem.attr({ tabindex: '0' });

          $(window).on('resize showcase-item-show', function () {
            titleOffset = overlay.height() - title.innerHeight();
            _self.setOffset(overlay, titleOffset);
          }).resize();

          showcaseItem.on('focusin mouseenter', function (e) {
            _self.setOffset(overlay, 0);
          });
          showcaseItem.on('focusout mouseleave', function (e) {
            _self.setOffset(overlay, titleOffset);
          });
        });
      }
    }
  };

  Drupal.behaviors.bracknellLogoFallback = {
    attach: function (context, settings) {
      if (typeof(Modernizr) !== 'undefined' && !Modernizr.svg) {
        $('[data-js="logo"] img[src$=".svg"]', context).each(function () {
          $(this).attr('src', $(this).attr('data-fallback'));
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
