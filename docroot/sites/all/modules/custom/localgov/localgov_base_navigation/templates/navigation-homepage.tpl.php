<?php
/**
 * Please note, the spacing and alignment of the <li>s for the services menu
 * are intentionally on one line in order for 'display: inline-block' to work
 * correctly and display the services menu as required. Please do not change this unless * you intend to refactor this section completely. This issue is due to the original
 * developer's approach.
 */
?>

<h1 class="services-title">Services</h1>

<div id="homepage-nav-wrapper" class="services-content grey-x-light full-width">
  <ul id="homepage-nav" class="gridder services-listing">
    <?php
    foreach ($menu_tree as $index => $item):
      $li_classes = array('gridder-list', 'homepage-nav-item');
      if ($index >= $opts['show_limit']) {
        $li_classes[] = 'nav-link-collapse';
        $li_classes[] = 'collapse';
      }
    ?><li class="<?php print implode($li_classes, ' '); ?>" data-griddercontent="#homepage-nav-<?php print $item['name_safe']; ?>"><?php
        $icon = '<span class="icon nav-icon-' . $item['name_safe'] . '"></span>';
        print l($item['name'] . $icon, $item['link_path'], array('html' => TRUE));
      ?></li><?php endforeach; ?>
  </ul>
</div>

<?php
// Process links for each section (gridder-content)
foreach ($menu_tree as $index => $item):
  $li_classes = array('gridder-list', 'homepage-nav-item', 'full-width');
  if ($index >= $opts['show_limit']) {
    $li_classes[] = 'nav-content-collapse';
    $li_classes[] = 'collapse';
  }
?>
<div id="homepage-nav-<?php print $item['name_safe']; ?>" class="full-width gridder-content nav-content">
  <ul>
    <?php foreach ($item['children'] as $child_item): ?><li class="nav-link"><?php print l($child_item['name'], $child_item['link_path']); ?></li><?php endforeach; ?><li class="nav-link nav-link-primary">
      <?php print l('All of <strong>' . $item['name'] . '</strong>', '/' . $item['name_safe'], array('html' => TRUE)); ?></li>
  </ul>
</div>
<?php endforeach; ?>

<div class="services-control">
  <button
    class="btn btn-primary button-show"
    id="navigation-home-button-show-hide"
    data-toggle="collapse"
    data-target=".nav-link-collapse, .nav-content-collapse"
    aria-expanded="false"
    aria-hidden="true"
    aria-controls="homepage-nav"
    data-js="services-btn"
    style="display: none;"
  >
    <?php print t('More services'); ?>
    <span class="icon theme-icon-triangle-down"></span>
  </button>
</div>
