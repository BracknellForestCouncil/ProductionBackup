<?php
/**
 * @file
 * Template for LocalGov Home Page.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div id="panels-layout-home" class="services">
	<div id="panels-layout-home-navigation">
		<?php print $content['navigation']; ?>
	</div>
	<div id="panels-layout-home-feature-one" class="row">
    <?php print $content['feature_one']; ?>
	</div>
	<div class="row">
		<div class="col-md-3 col-sm-6">
			<div class="pod-inner green-top">
	      <?php print $content['block_one']; ?>
			</div>
		</div>
		<div class="col-md-3 col-sm-6">
			<div class="pod-inner green-top">
	      <?php print $content['block_two']; ?>
			</div>
		</div>
		<div id="panels-layout-home-feature-two" class="col-md-6 col-sm-12 pod-inner pod-emphasise">
	    <?php print $content['feature_two']; ?>
		</div>
	</div>
</div>
