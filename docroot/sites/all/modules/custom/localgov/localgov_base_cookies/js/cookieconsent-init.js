'use strict';

(function ($) {
  Drupal.behaviors.localgov_base_cookies_cookie_consent = {
    attach: function (context, settings) {
      window.cookieconsent.initialise({
        "palette": {
          "popup": {
            "background": "#336633",
            "text": "#ffffff"
          },
          "button": {
            "background": "#ffffff",
            "text": "#070510"
          }
        },
        "content": {
          "message": Drupal.t('We use cookies to improve your visit to this site. By viewing our content you are accepting the use of cookies.'),
          "dismiss": Drupal.t('Continue'),
          "link": Drupal.t('Find out more about how we use cookies'),
          "href": "/smallprint/cookies"
        }
      });
    }
  };
})(jQuery);
