(function ($) {
  Drupal.behaviors.bracknellTestimonialCarousel = {
    attach: function (context, settings) {
      $('.carousel-slides', context).flexslider({
        animation: 'slide',
        animationLoop: false,
        controlNav: false,
        selector: '.carousel-slide > .carousel-slide-inner',
        slideshow: false
      });
    }
  };
}(jQuery));
