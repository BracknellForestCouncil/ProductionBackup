(function($) {

  Drupal.behaviors.localgovBaseNavigationNavigationHomeBehavior = {
    attach: function (context, settings) {
      // Hide additional services.
      var homepageNav = $('#homepage-nav', context);
      var collapsedServices = homepageNav.find('.homepage-nav-item-hide');
      var showHideButton = $('#navigation-home-button-show-hide');
      if (collapsedServices.length) {
        // Hide all the collapsed services.
        collapsedServices.hide().attr('aria-hidden', 'true');
        // When the show/hide button is clicked, toggle the collapsed services.
        showHideButton.show().attr('aria-hidden', 'false').on('click', function () {
          // If the services are currently hidden, show them.
          if (showHideButton.hasClass('button-hide')) {
            homepageNav.removeClass('hasSelectedItem');
            homepageNav.find('.selectedItem').removeClass('selectedItem');
            homepageNav.find('.gridder-show').slideUp(400, 'easeInOutExpo', function () {
              homepageNav.find('.gridder-show').remove();
            });
            $('.currentGridder').removeClass('currentGridder');

            showHideButton.removeClass('button-hide').addClass('button-show');
            homepageNav.find('.homepage-nav-item-hide').hide().attr('aria-hidden', 'true');
            $(this).html('More services ' + '<span class="icon theme-icon-triangle-down"></span>');
          }
          // If the services are visible, hide them.
          else {
            showHideButton.removeClass('button-show').addClass('button-hide');
            homepageNav.find('.homepage-nav-item-hide').show().attr('aria-hidden', 'false');
            $(this).html('View less ' + '<span class="icon theme-icon-triangle-up"></span>');
          }
        });
      }

      // Call Gridder
      $('.gridder').gridderExpander({
        scroll: true,
        scrollOffset: 0,
        scrollTo: "listitem",
        animationSpeed: 400,
        animationEasing: "easeInOutExpo",
        showNav: false,
        nextText: '<span class="icon theme-icon-next"></span><span class="sr-only" aria-hidden="true">Next</span>',
        prevText: '<span class="icon theme-icon-previous"></span><span class="sr-only" aria-hidden="true">Previous</span>',
        closeText: '<span class="icon theme-icon-cross"></span><span class="sr-only" aria-hidden="true">Close</span>',
        onStart: function () {},
        onContent: function () {},
        onClosed: function () {}
      });

    }
  };
}(jQuery));
