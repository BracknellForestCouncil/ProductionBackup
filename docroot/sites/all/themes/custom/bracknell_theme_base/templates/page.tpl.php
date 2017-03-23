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
<header class="header" role="banner">
  <div class="container">
    <div class="row masthead">
      <a href="<?php print $front_page; ?>" id="branding" class="logo">
        <img class="img-responsive" src="<?php print base_path() . path_to_theme(); ?>/images/logo/Bracknell-logo_B.png" alt="Bracknell Forest Council">
      </a>
      <div class="col-sm-12 col-md-10 col-md-offset-2 header-tools" data-js="header-tools">
        <div class="row">
          <div class="col-sm-8 col-md-5 col-sm-offset-2 nav-tools__search">
            <?php print render($page['search']); ?>
          </div>
          <div class="col-xs-4 col-sm-4 col-md-3 text-center hidden-xs hidden-sm nav-tools__account">
            <a href="https://bracknell-forest.achieveservice.com/module/home" title="Register for a self service account to save yourself time, or login if you already have an account.">
              <span class="icon theme-icon-user"></span>
              <span>My account</span>
              <span class="q-mark icon theme-icon-question" data-toggle="tooltip-my-account" data-placement="bottom" title="Register for a self service account to save yourself time, or login if you already have an account."></span>
            </a>
          </div>
          <div class="col-xs-12 col-sm-2 text-right header-menu-tools" data-js="main-menu-trigger">
          </div>
        </div><!-- end ./row -->
      </div><!-- end ./header-tools -->

        <?php if (!drupal_is_front_page()) { ?>
        <div class="row no-pad">
          <nav id="breadcrumb" class="col-xs-12 col-xs-offset-0 col-md-10 col-md-offset-2">
            <?php if (!empty($breadcrumb)) : print $breadcrumb; endif; ?>
          </nav>
        </div>
        <?php } ?>
    </div><!-- end ./masthead -->
  </div><!-- end ./container -->

  <div class="container-fluid main-menu" data-js="main-menu">
    <div class="container">
      <div class="navbar-collapse" id="bracknell-topnav">
        <div class="row">
          <?php print render($page['navigation']); ?>
        </div>
      </div>
    </div>
  </div>
</header>

<div class="main-container <?php print $container_class; ?>">

  <?php if (!empty($page['header'])): ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>

  <div class="row" id="page-content">

    <div id="page-header" class="col-sm-12<?php if (!$is_front): print(' col-md-8'); endif ?>">
      <?php if (!drupal_is_front_page()) { ?>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php } ?>
      <?php print render($page['page_header']); ?>
    </div>

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-md-3 col-sm-12" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <a id="main-content"></a>

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
      <?php print render($page['content']); ?>
      <?php if (!empty($page['page_footer'])): ?>
        <footer class="footer">
          <?php print render($page['page_footer']); ?>
        </footer>
      <?php endif; ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-md-3 col-md-offset-1 col-sm-12" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>

</div>

<div class="outer-wrap global-footer hide-print">
  <footer class="<?php print $container_class; ?>">
    <?php print render($page['footer']); ?>
    <div class="row">
      <div class="col-xs-12 col-sm-8">
        <?php
          $menu = menu_navigation_links('footer-menu');
          print theme('links__footer_menu', array(
            'links' => $menu,
            'attributes' => array(
              'class' => array('global-footer-links')
            )
          ));
          ?>
      </div>
      <div class="col-xs-12 col-sm-4 socials socials-global-footer">
        <ul>
          <li>
            <a href="https://www.instagram.com/bracknellforest" target="_blank">
              <span class="sr-only sr-only-focusable">Instagram</span>
              <span class="icon theme-icon-instagram"></span>
            </a>
          </li>
          <li>
            <a href="https://twitter.com/BracknellForest" target="_blank">
              <span class="sr-only sr-only-focusable">Twitter</span>
              <span class="icon theme-icon-twitter"></span>
            </a>
          </li>
          <li>
            <a href="https://www.facebook.com/bracknellforestcouncil" target="_blank">
              <span class="sr-only sr-only-focusable">Facebook</span>
              <span class="icon theme-icon-facebook"></span>
            </a>
          </li>
          <li>
            <a href="https://www.youtube.com/user/BracknellForestC?gl=GB&hl=en-GB" target="_blank">
              <span class="sr-only sr-only-focusable">Youtube</span>
              <span class="icon theme-icon-youtube"></span>
            </a>
          </li>
        </ul>
      </div>
    </div>
    <div class="row">
      <div class="col-sm-12">
        <p class="copyright"><small>© Bracknell Forest Council</small></p>
      </div>
    </div>
  </footer>
</div>
