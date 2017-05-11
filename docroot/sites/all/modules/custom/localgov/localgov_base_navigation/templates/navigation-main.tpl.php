<nav id="main-nav" role="navigation">
  <ul>
    <li class="visible-sm-inline-block visible-xs-inline-block nav-tools__account nav-item nav-item-my-account">
      <a href="https://bracknell-forest.achieveservice.com/module/home">
        <span class="icon theme-icon-user"></span>
        <span><?php print t('My Account'); ?></span>
      </a>
    </li>
    <li class=" nav-item nav-item-home">
      <a href="/"><?php print t('Home'); ?></a>
    </li>
    <?php foreach ($menu_tree as $index => $item): ?>
      <?php if (!$item['disabled']): ?>
        <li class="nav-item nav-item-<?php print $item['name_safe']; ?>">
          <?php
            $url = strpos($item['link_path'], 'node') !== FALSE ? drupal_get_path_alias($item['link_path']) : $item['link_path'];
            print l($item['name'], $url);
          ?>
        </li>
      <?php endif; ?>
    <?php endforeach; ?>
  </ul>
</nav>
