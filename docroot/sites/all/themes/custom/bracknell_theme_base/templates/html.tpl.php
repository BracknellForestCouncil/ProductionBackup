<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $html_attributes:  String of attributes for the html element. It can be
 *   manipulated through the variable $html_attributes_array from preprocess
 *   functions.
 * - $html_attributes_array: An array of attribute values for the HTML element.
 *   It is flattened into a string within the variable $html_attributes.
 * - $body_attributes:  String of attributes for the BODY element. It can be
 *   manipulated through the variable $body_attributes_array from preprocess
 *   functions.
 * - $body_attributes_array: An array of attribute values for the BODY element.
 *   It is flattened into a string within the variable $body_attributes.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see localgovtheme_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup templates
 */
?><!DOCTYPE html>
<html<?php print $html_attributes;?><?php print $rdf_namespaces;?>>
<head>
  <link rel="profile" href="<?php print $grddl_profile; ?>" />
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <script type="text/javascript">
    document.write('<style type="text/css">.main-menu {display:none;}</style>');
  </script>
  <?php print $styles; ?>
  <?php print $scripts; ?>

  <!-- Favicons -->
  <link rel="icon" href="/favicon.png" type="image/png" />
  <link rel="shortcut icon" href="/favicon.ico" />
  <!--Opera Coast icon-->
  <link rel="icon" type="image/png" href="/favicon-228.png" sizes="228x228">
  <!--Opera Speed Dial icon-->
  <link rel="icon" type="image/png" href="/favicon-195.png" sizes="195x195">
  <!-- For iPad with high-resolution Retina display running iOS = 7: -->
  <link rel="apple-touch-icon-precomposed" sizes="152x152" href="/favicon-152.png">
  <!-- For iPad with high-resolution Retina display running iOS = 6: -->
  <link rel="apple-touch-icon-precomposed" sizes="144x144" href="/favicon-144.png">
  <!--IE 10 Metro tile icon (Metro equivalent of apple-touch-icon)-->
  <meta name="msapplication-TileColor" content="#FFFFFF">
  <meta name="msapplication-TileImage" content="/favicon-144.png">
  <!--Chrome Web Store icon-->
  <link rel="icon" type="image/png" href="/favicon-128.png" sizes="128x128">
  <!-- iPhone retina touch icon (Change for iOS 7: up from 114x114): -->
  <link rel="apple-touch-icon-precomposed" sizes="120x120" href="/favicon-120.png">
  <!-- GoogleTV icon -->
  <link rel="apple-touch-icon-precomposed" sizes="96x96" href="/favicon-96.png">
  <!-- For first- and second-generation iPad: -->
  <link rel="apple-touch-icon-precomposed" sizes="72x72" href="/favicon-72.png">
  <!-- Standard iOS home screen (iPod Touch, iPhone first generation to 3G) -->
  <link rel="apple-touch-icon-precomposed" href="/favicon-57.png">
  <!--Favicons targeted to any additional png sizes not covered above-->
  <link rel="icon" href="/favicon-32.png" sizes="32x32">
  <!-- END - Favicons -->

  <!-- Microserve Development server addition only! -->
  <meta name="robots" content="noindex,nofollow" />
</head>
<body<?php print $body_attributes; ?>>
  <div class="page-wrapper">
    <a class="sr-only sr-only-focusable" href="#main-content">Skip to main content</a>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </div>
</body>
</html>
