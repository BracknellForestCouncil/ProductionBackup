'use strict';

(function ($) {
  Drupal.behaviors.localgov_base_paragraphs_accordion = {
    attach: function (context, settings) {
      if ($('.accordion-pane').length > 1) {
        $('.accordion').accAccordion({
          panelClass: 'js-accordion-panel',
          panelId: 'js-accordion-panel-',
          panelControlClass: 'js-accordion-control',
          panelControlActiveClass: 'js-accordion-control-active',
          panelControlId: 'js-accordion-control-',
          panelTitleClass: 'js-accordion-panel-title'
        });
      }
    }
  };
})(jQuery);
