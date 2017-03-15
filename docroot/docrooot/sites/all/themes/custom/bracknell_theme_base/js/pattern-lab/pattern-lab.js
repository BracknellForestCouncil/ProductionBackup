(function ($) {

	// Call Gridder
	$('.gridder').gridderExpander({
		scroll: true,
		scrollOffset: 120,
		scrollTo: "panel",                  // panel or listitem
		animationSpeed: 400,
		animationEasing: "easeInOutExpo",
		showNav: true,                      // Show Navigation
		nextText: "Next",					// Next button text
		prevText: "Previous",               // Previous button text
		closeText: "Close",                 // Close button text
		onStart: function(){
			//Gridder Inititialized
		},
		onContent: function(){
			//Gridder Content Loaded
		},
		onClosed: function(){
			//Gridder Closed
		}
	});

	// Homepage 'View more/Less' button and text
	$('button#btn_more-services').click(function() {
		if (!$(this).parents('.container').find('#services-submenu').hasClass('in')) {
			$(this).html("View less " + '<span class="icon-bfc-icon-font-11"></span>').addClass('reversed');
		} else {
			$(this).html("More services " + '<span class="icon-bfc-icon-font-11"></span>').removeClass('reversed');
		}
	});

	// * Brand logo resize on Menu open/close *
	// Click the Menu button, add .menu-open class to Brand logo wrapper
	$('#open-menu').click(function () {
		$(".navbar-form").removeClass("in");
		$(this).parents('.navbar-default').find('a.navbar-brand-wrap').addClass('menu-open');
	});

	$('#mobile-search-trigger').click(function () {
		$('.topnav-wrapper .navbar-collapse').removeClass('in');
		$('#open-menu').addClass('collapsed');

	});

	// When the menu finishes collapsing, remove .menu-open class
	$('#bracknell-topnav').on('hidden.bs.collapse', function () {
		$('a.navbar-brand-wrap').removeClass('menu-open');
	});

	// Modal on page load
	$(window).load(function(){
		$('#myModal').modal('show');
	});

}(jQuery));
