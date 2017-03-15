(function (Drupal, $) {
  Drupal.behaviors.localgovBaseAdminNavbar = {
    attach: function() {
      $('.navbar-menu-localgov').drupalNavbarMenu();
    }
  };
})(Drupal, jQuery);
