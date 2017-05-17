<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h2 class="related-pages-title"><?php print $title; ?></h2>
<?php endif; ?>
<ul class='task-list'>
<?php foreach ($rows as $id => $row): ?>
  <li class='task-list-item'><?php print $row; ?></li>
<?php endforeach; ?>
</ul>

