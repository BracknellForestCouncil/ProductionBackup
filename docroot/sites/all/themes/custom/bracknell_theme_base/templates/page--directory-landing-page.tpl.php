<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see localgovtheme_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see localgovtheme_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>

<?php include_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'bracknell_theme_base') . '/templates/includes/header.inc'; ?>

<main class="main-container" id="readspeaker_content" tabindex="-1">
  <div class="container">
    <div class="row">
      <div class="col-sm-12">
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>

        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
      </div><!-- end .col -->
    </div><!-- end .row -->
  </div><!-- end .container -->

  <div class="content-header">
    <div class="promotional-hero <?php print $classes; ?>">
      <?php if (!empty($title)) : ?>
      <div class="promotional-hero-title container">
        <h1 class="promotional-hero-title-inner page-title col-md-8">
          <?php print $title; ?>
        </h1>
      </div><!-- end .promotional-hero-title -->
      <?php endif; ?>
      <?php if ($hero) : ?>
        <?php print $hero; ?>
      <?php endif; ?>
    </div><!-- end .promotional-hero -->
    <?php if (!empty($page['content_header'])): ?>
      <?php print render($page['content_header']); ?>
    <?php endif; ?>
  </div>
  <div class="container">
    <div class="row">
      <div class="col-sm-12">
        <?php print render($page['content']); ?>
        <?php if (!empty($page['page_footer'])): ?>
          <?php print render($page['page_footer']); ?>
        <?php endif; ?>
      </div><!-- end .col -->
    </div><!-- end .row-->
  </div><!-- end .container -->
</main>

<?php include_once DRUPAL_ROOT . '/' . drupal_get_path('theme', 'bracknell_theme_base') . '/templates/includes/footer.inc'; ?>
