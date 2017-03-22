(function ($) {
  Drupal.behaviors.brackNellTestimonialCarousel = {
    attach: function (context, settings) {
      $('.paragraphs-item-carousel', context).flexslider({
        animation: 'slide',
        animationLoop: false,
        controlNav: false,
        selector: '.field-name-field-paragraph-carousel-content > div.field-items > div.field-item',
        slideshow: false
      });
    }
  };
}(jQuery));
