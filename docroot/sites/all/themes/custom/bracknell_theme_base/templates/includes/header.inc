<?php if (!empty($page['alerts'])): ?>
  <div id="global-alerts">
    <?php print render($page['alerts']); ?>
  </div>
<?php endif; ?>

<header class="header" role="banner">
  <div class="container">
    <div class=" header-inner row">
      <div class="col-xs-12 col-sm-2 logo" data-js="logo">
        <div class="logo-container">
          <a href="<?php print $front_page; ?>" id="branding" class="logo-link">
            <img class="img-responsive" src="<?php print base_path() . path_to_theme(); ?>/images/logo/Bracknell-logo_B.svg" alt="Bracknell Forest Council" data-fallback="<?php print $logo; ?>">
          </a>
        </div><!-- end .logo-container -->
      </div><!-- end .col -->
      <div class="header-section col-xs-12 col-sm-10">
        <div class="header-tools">
          <div class="search col-sm-8 col-md-5 col-md-offset-2 col-sm-offset-1" role="search">
            <?php if (!empty($page['search'])) : ?>
              <?php print render($page['search']); ?>
            <?php endif; ?>
          </div><!-- end .search -->

          <div class="header-account col-md-3">
            <a href="https://myaccount.bracknell-forest.gov.uk/">
              <span class="header-account-section header-account-section-user-icon icon theme-icon-user"></span>
              <span class="header-account-section header-account-section-account">My account</span>
              <span class="header-account-section header-account-section-tooltip q-mark icon theme-icon-question" data-placement="bottom" data-toggle="tooltip-my-account" title="Register for a self service account to save yourself time, or login if you already have an account."></span>
            </a>
          </div><!-- end .header-account -->
        </div><!-- end .header-tools -->

        <?php if (!drupal_is_front_page()) { ?>
          <nav class="breadcrumbs">
            <?php if (!empty($breadcrumb)) : print $breadcrumb; endif; ?>
          </nav>
        <?php } ?>
      </div><!-- end .header-section -->
    </div><!-- end .row -->
  </div><!-- end ./container -->

  <div class="container-fluid main-menu" data-js="main-menu">
    <div class="container">
      <div class="navbar-collapse" id="bracknell-topnav">
        <div class="row">
          <?php if (!empty($page['navigation'])) : ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>
</header>
<?php if (isset($readspeaker_button) && !empty($readspeaker_button)) : ?>
  <div class="container">
    <div class="row">
      <div class="col-sm-12">
        <?php print $readspeaker_button; ?>
      </div>
    </div>
  </div>
<?php endif; ?>
