/**
 * @file
 * Bracknell Search additional functions.
 */
(function ($) {
  /**
   * Submits the search if the search order is changed.
   *
   * This is only effective on the /search main page, not from the header.
   *
   * @type {Drupal~behaviour}
   *
   * @prop {Drupal~behaviorAttach} attach
   *   Targets the edit-sort-by element and triggers form submit onChange.
   */
  Drupal.behaviors.bfcSearchSortSubmit = {
    attach: function (context, settings) {
      $('#edit-sort-by').change(function () {
        $(this).parents('form').submit();
      });
    }
  };
})(jQuery);
