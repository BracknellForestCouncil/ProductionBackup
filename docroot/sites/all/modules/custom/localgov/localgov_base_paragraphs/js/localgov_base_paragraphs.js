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

  Drupal.behaviors.bracknellTabs = {
    attach: function (context, settings) {
      ssm.addState({
        id: 'mobile',
        query: '(max-width: 767px)',
        onEnter: function () {
          if ($('.acc-tabs-panel', context).length > 1) {
            setTimeout(function () {
              $('.acc-accordion', context).accAccordion({
                defaultPanel: 0,
                panelClass: 'js-accordion-panel',
                panelId: 'js-accordion-panel--',
                panelControlClass: 'js-accordion-control',
                panelControlActiveClass: 'js-accordion-control--active',
                panelControlHiddenClass: 'js-accordion-control--hidden',
                panelControlId: 'js-accordion-control--'
              });
            });
          }
        },
        onLeave: function () {
          if ($('.acc-accordion', context).length !== 0 && $('.acc-accordion', context).data('plugin_accAccordion') !== undefined) {
            $('.acc-accordion', context).data('plugin_accAccordion').destroy();
            $('.acc-accordion', context).removeData('plugin_accAccordion');
          }
        }
      });
      ssm.addState({
        id: 'desktop',
        query: '(min-width: 768px)',
        onEnter: function () {
          if ($('.acc-tabs-panel', context).length > 1) {
            setTimeout(function () {
              $('.acc-tabs', context).accTabs({
                containerClass: 'js-acc-tabs',
                controlActiveClass: 'js-acc-tabs-control-item-active',
                tabPanelClass: 'js-acc-tabs-panel',
                panelActiveClass: 'js-tabs-panel-active',
                controlsTextClass: 'element-invisible',
                tabControlsClass: 'js-acc-tabs-control'
              });
            });
          }
        },
        onLeave: function () {
          if ($('.acc-tabs', context).length !== 0 && $('.acc-tabs', context).data('plugin_accTabs') !== undefined) {
            $('.acc-tabs', context).data('plugin_accTabs').destroy();
            $('.acc-tabs', context).removeData('plugin_accTabs');
          }
        }
      });
    }
  };
})(jQuery);
