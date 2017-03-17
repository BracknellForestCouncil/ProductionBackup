/**
 * @file
 * Bracknell Search additional functions.
 */
(function($){
    
  /**
   * Submits the search if the search order is changed.
   *
   * @type {Drupal~behaviour}
   *
   * @prop {Drupal~behaviorAttach} attach
   *   Targets the edit-sort-by element and triggers form submit onChange.
   */
  Drupal.behaviors.bfcSearch = {
    attach: function (context, settings) {
      $('#edit-sort-by').change(function () {
        $(this).parents('form').submit();
      });
    }
  };
  
})(jQuery);
