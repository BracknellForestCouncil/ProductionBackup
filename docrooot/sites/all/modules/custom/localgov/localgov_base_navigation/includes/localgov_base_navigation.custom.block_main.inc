<?php
/**
 * @file
 * localgov_base_navigation.inc
 * TODO: Add file description
 *
 * @package   localgov_base_navigation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /*
 * Returns block content for the "navigation_main" block.
 */
function localgov_base_navigation_block_content_navigation_main() {

 $vocab = taxonomy_vocabulary_machine_name_load('category');
 $vid = $vocab->vid;
 $terms = taxonomy_get_tree($vid, 0, 1);

 $content = '<nav id="main-nav"><ul>';
 $content .= '<li role="presentation" class="visible-sm-inline-block visible-xs-inline-block nav-tools__account nav-item nav-item-my-account"><a href="https://bracknell-forest.achieveservice.com/module/home"><span class="icon theme-icon-user"></span> <span>My Account</span></a></li><li class=" nav-item nav-item-home" role="presentation"><a href="/">Home</a></li>';
 foreach ($terms as $term) {
   $name = $term->name;
   $name_safe =  str_replace(',', '', str_replace(' ', '-', strtolower($name)));
   $url = '/' . $name_safe;
   $content .= '<li class=" nav-item nav-item-' . $name_safe . '" role="presentation"><a href="' . $url . '">' . $name . '</a></li>';
 }
 $content .= '<li class=" nav-item nav-item-contact-us" role="presentation"><a href="/contact-us">Contact us</a></li>';

 $content .= '</ul></nav>';

 return $content;
}
