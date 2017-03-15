/**
 * @file
 * Javascript behaviors for the guide module.
 */

(function ($) {

Drupal.behaviors.guideFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.guide-structure-form', context).drupalSetSummary(function (context) {
      var $select = $('.form-item-guide-gid select');
      var val = $select.val();

      if (val === '0') {
        return Drupal.t('Not in guide');
      }
      else if (val === 'new') {
        return Drupal.t('New guide');
      }
      else {
        return Drupal.checkPlain($select.find(':selected').text());
      }
    });
  }
};

})(jQuery);
