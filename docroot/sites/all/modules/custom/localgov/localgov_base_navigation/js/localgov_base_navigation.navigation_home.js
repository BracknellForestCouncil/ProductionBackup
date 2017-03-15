(function($) {

  Drupal.behaviors.localgovBaseNavigationNavigationHomeBehavior = {
    attach: function (context, settings) {
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
              $('#navigation-home-button-show-hide').html("More services " + '<span class="icon theme-icon-triangle-down"></span>');
          },
          onContent: function(){
              //Gridder Content Loaded
          },
          onClosed: function(){
              //Gridder Closed
          }
      });

      $('#navigation-home-button-show-hide').on('click', function(){

        if ($('#navigation-home-button-show-hide').hasClass("button-hide")) {
          // Close open gridder-content when show/hide button is clicked
          $(".gridder").removeClass("hasSelectedItem");
          $(".gridder").find(".selectedItem").removeClass("selectedItem");
          $(".gridder").find(".gridder-show").slideUp(400, "easeInOutExpo", function() {
              $(".gridder").find(".gridder-show").remove();
          });
          $(".currentGridder").removeClass("currentGridder");

          $('#navigation-home-button-show-hide').removeClass("button-hide");
          $('#navigation-home-button-show-hide').addClass("button-show");
          $(this).html("More services " + '<span class="icon theme-icon-triangle-down"></span>');

        } else {
          $('#navigation-home-button-show-hide').removeClass("button-show");
          $('#navigation-home-button-show-hide').addClass("button-hide");
          $(this).html("View less " + '<span class="icon theme-icon-triangle-up"></span>');
        }
      });
    }
  };
}(jQuery));
