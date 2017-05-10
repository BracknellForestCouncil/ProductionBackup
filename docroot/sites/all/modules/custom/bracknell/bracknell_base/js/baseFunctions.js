/**
 * @file
 * Bracknell base additional functions.
 */
(function ($) {
  /**
   * Copies the node title to node display title on field exit
   *
   * @type {Drupal~behaviour}
   *
   * @prop {Drupal~behaviorAttach} attach
   *   Targets the edit-title element and copies value to #edit-field-node-
   *   display-title on focusout.
   */
  Drupal.behaviors.copyToDisplayTitle = {
    attach: function (context, settings) {
      $('#edit-title').focusout(function () {
        if (!$('#edit-field-node-display-title-und-0-value').val() || 0 === $('#edit-field-node-display-title-und-0-value').val().length) {
            $('#edit-field-node-display-title-und-0-value').val($(this).val());
        }
      });
    }
  };
})(jQuery);
