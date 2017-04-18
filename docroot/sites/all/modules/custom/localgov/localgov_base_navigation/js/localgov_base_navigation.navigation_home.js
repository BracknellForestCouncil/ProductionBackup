(function($) {

  Drupal.behaviors.localgovBaseNavigationNavigationHomeBehavior = {
    attach: function (context, settings) {
      // Hide additional services.
      $('#homepage-nav').find('.collapse').hide().attr('aria-hidden', 'true');

      // Create services button.
      servicesButton = $('<button />');
      servicesButton.attr({
        'class': 'btn btn-primary button-show',
        'id': 'navigation-home-button-show-hide',
        'data-toggle': 'collapse',
        'data-target': '.nav-link-collapse, .nav-content-collapse',
        'aria-expanded': 'false',
        'aria-controls': 'homepage-nav',
        'data-js': 'services-btn'
      });
      servicesButton.html(Drupal.t('More services') + ' <span class="icon theme-icon-triangle-down"></span>');
      servicesButton.insertAfter('#homepage-nav');
      $('[data-js="services-btn"]').wrap('<div class="services-control" />');

      // Call Gridder
      $('.gridder').gridderExpander({
          scroll: true,
          scrollOffset: 0,
          scrollTo: "listitem",                  // panel or listitem
          animationSpeed: 400,
          animationEasing: "easeInOutExpo",
          showNav: false,                      // Show Navigation
          nextText: '<span class="icon theme-icon-next"></span><span class="sr-only" aria-hidden="true">Next</span>',                   // Next button text
          prevText: '<span class="icon theme-icon-previous"></span><span class="sr-only" aria-hidden="true">Previous</span>',               // Previous button text
          closeText: '<span class="icon theme-icon-cross"></span><span class="sr-only" aria-hidden="true">Close</span>',                 // Close button text
          onStart: function(){
              //Gridder Inititialized
          },
          onContent: function(){
              //Gridder Content Loaded
          },
          onClosed: function(){
              //Gridder Closed
          }
      });

      $('#navigation-home-button-show-hide').on('click', function(){

        if ($('#navigation-home-button-show-hide').hasClass('button-hide')) {
          // Close open gridder-content when show/hide button is clicked
          $('#homepage-nav').removeClass('hasSelectedItem');
          $('#homepage-nav').find('.selectedItem').removeClass('selectedItem');
          $('#homepage-nav').find('.gridder-show').slideUp(400, 'easeInOutExpo', function() {
            $('#homepage-nav').find('.gridder-show').remove();
          });
          $('.currentGridder').removeClass('currentGridder');

          $('#navigation-home-button-show-hide').removeClass('button-hide').addClass('button-show');
          $('#homepage-nav').find('.collapse').hide().attr('aria-hidden', 'true');
          $(this).html('More services ' + '<span class="icon theme-icon-triangle-down"></span>');

        } else {
          $('#navigation-home-button-show-hide').removeClass('button-show').addClass('button-hide');
          $('#homepage-nav').find('.collapse').show().attr('aria-hidden', 'false');
          $(this).html('View less ' + '<span class="icon theme-icon-triangle-up"></span>');
        }
      });
    }
  };
}(jQuery));
