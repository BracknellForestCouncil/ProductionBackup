<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<ul class='task-list'>
  <?php foreach ($rows as $id => $row): ?>
    <li class='task-list-item <?php if ($classes_array[$id]) { print $classes_array[$id];  } ?>'>
      <?php print $row; ?>
    </li>
  <?php endforeach; ?>
</ul>
