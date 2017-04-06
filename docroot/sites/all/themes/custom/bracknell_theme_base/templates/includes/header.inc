<header class="header" role="banner">
  <div class="container">
    <div class="row masthead">
      <div class='logo-container'>
        <a href="<?php print $front_page; ?>" id="branding" class="logo">
          <img class="img-responsive" src="<?php print base_path() . path_to_theme(); ?>/images/logo/Bracknell-logo_B.png" alt="Bracknell Forest Council">
        </a>
      </div>
      <div class="col-xs-12 col-sm-10 col-sm-offset-2 col-md-10 col-md-offset-2 header-tools" data-js="header-tools">
        <div class="row">
          <div class='header-section header-section-search'>
            <?php print render($page['search']); ?>
          </div>
          <div class='header-section header-section-account'>
            <a href="https://bracknell-forest.achieveservice.com/module/home" title="Register for a self service account to save yourself time, or login if you already have an account.">
              <span class='header-account-section header-account-section-user-icon icon theme-icon-user'></span>
              <span class='header-account-section header-account-section-account'>My account</span>
              <span class='header-account-section header-account-section-tooltip q-mark icon theme-icon-question' data-toggle="tooltip-my-account" data-placement="bottom" title="Register for a self service account to save yourself time, or login if you already have an account."></span>
            </a>
          </div>
          <div class='header-section header-section-menu-tools' data-js='main-menu-trigger'>
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

