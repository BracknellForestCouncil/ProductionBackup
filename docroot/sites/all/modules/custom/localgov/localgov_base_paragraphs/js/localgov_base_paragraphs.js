'use strict';

(function ($) {
  Drupal.behaviors.localgov_base_paragraphs_tabs = {
    attach: function (context, settings) {
      if ($('.acc-tabs-panel').length > 1) {
        $('.acc-tabs').accTabs({
          containerClass: 'js-acc-tabs',
          controlActiveClass: 'js-acc-tabs-control-item-active',
          tabPanelClass: 'js-acc-tabs-panel',
          panelActiveClass: 'js-tabs-panel-active',
          controlsTextClass: 'element-invisible',
          tabControlsClass: 'js-acc-tabs-control'
        });
      }
    }
  };

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