"use strict";

(function ($) {
	Drupal.behaviors.bracknellThemeBaseBehavior = {
		attach: function attach(context, settings) {
			// * Brand logo resize on Menu open/close *
			// Click the Menu button, add .menu-open class to Brand logo wrapper
//			$('#open-menu').click(function () {
//				$(".navbar-form").removeClass("in");
//				$('#branding').addClass('menu-open');
//			});
//			$('#mobile-search-trigger').click(function () {
//				$('.topnav-wrapper .navbar-collapse').removeClass('in');
//				$('#open-menu').addClass('collapsed');
//			});
//			// When the menu finishes collapsing, remove .menu-open class
//			$('#bracknell-topnav').on('hidden.bs.collapse', function () {
//				$('#branding').removeClass('menu-open');
//			});

			// Fix related links location on guide pages
			// media query checking for minimum 992px  event handler
			if (matchMedia) {
				var mq_992px = window.matchMedia("(min-width:992px)");
				mq_992px.addListener(WidthChange);
				WidthChange(mq_992px);
			}
			// media query change
			function WidthChange(mq_992px) {
				if (mq_992px.matches) {
					$('.node-type-guide-section .region-sidebar-second').css('margin-top', $("[id^='guide-navigation-']").height() + 70 + 'px');
				} else {
					$('.node-type-guide-section .region-sidebar-second').css('margin-top', 0 + 'px');
				}
			}
		}
	};
})(jQuery);

// Tooltip for My account
(function ($) {
	$(function () {
		$('[data-toggle="tooltip-my-account"]').tooltip();
	});
})(jQuery);
//# sourceMappingURL=scripts.js.map
