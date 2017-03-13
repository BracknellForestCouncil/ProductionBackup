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
 * Returns block content for the "navigation_home" block.
 */
function localgov_base_navigation_block_content_navigation_home() {
  $tree = menu_tree_all_data('main-menu');

  $content = '<h1 class="margin-top-zero">Services</h1>';
  // Process Top Level links (gridder-list)
  $content .= '<div id="homepage-nav-wrapper" class="block-30 grey-x-light full-width"><div class="row no-pad">';
  $content.= '<ul id="homepage-nav" class="gridder" role="navigation">';

   $count = 0;
   foreach ($tree as $item) {
     //dsm($item);
     $count++;
     $link_path = $item['link']['href'];
     $name = $item['link']['link_title'];
     $name_safe =  str_replace(',', '', str_replace(' ', '-', strtolower($name)));

     $item_content = '<li class="gridder-list homepage-nav-item';
     if ($count > 12) {
       $item_content .= ' nav-link-collapse collapse';
     }
     $item_content .= '" data-griddercontent="#homepage-nav-' . $name_safe . '">';

     $item_content .= '<a href="'. $link_path .'">';
     $item_content .= $name;
     $item_content .= '<span class="icon nav-icon-' . $name_safe . '"></span>';
     $item_content .= '</a>';

     $item_content .= '</li>';

     $content .= $item_content;
   }

   $content .= '</ul>';

   $content .= '</div></div>';


   // Process links for each section (gridder-content)
   $count = 0;
   foreach ($tree as $item) {
     // dpm($item);
     $count++;
     $name = $item['link']['link_title'];
     $name_safe =  str_replace(',', '', str_replace(' ', '-', strtolower($name)));
     $url = '/' . $name_safe;

     $item_content = '<div id="homepage-nav-' . $name_safe . '" class="full-width gridder-content nav-content';
     if ($count > 12) {
       $item_content .= ' nav-content-collapse collapse';
     }
     $item_content .= '">';
     $item_content .= '<ul>';


     $children = $item['below'];

     foreach ($children as $child_item) {

       switch ($child_item['link']['external']) {
         case '0':
           $child_url = '/' . $child_item['link']['link_path'];
           break;

         case '1':
           $child_url = $child_item['link']['link_path'];
           break;
       }

       $child_name = $child_item['link']['link_title'];;
       $child_name_safe =  str_replace(',', '', str_replace(' ', '-', strtolower($child_name)));

       $item_content .= '<li class="nav-link"><a href="' . $child_url . '">' . $child_name . '</a></li>';
     }

     $item_content .= '<li class="nav-link nav-link-primary"><a href="' . $url . '">All of <strong>' . $name . '</strong></a></li>';

     $item_content .= '</ul>';
     $item_content .= '</div>';

     $content .= $item_content;
   }

   return $content;
 }
