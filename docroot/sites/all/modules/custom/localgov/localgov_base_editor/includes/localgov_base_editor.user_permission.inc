<?php
/**
 * @file
 * localgov_base_editor.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_editor
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */
 
/**
 * Implements hook_permission().
 */
function localgov_base_editor_permission() {
  $items = array();

  $items['access localgov_base_editor'] = array(
    'title' => t('Access LocalGov Base: Editor'),
    'description' => t('Access functionality provided by LocalGov Base: Editor.'),
    'restrict access' => FALSE,
  );

  $items['administer localgov_base_editor'] = array(
    'title' => t('Administer LocalGov Base: Editor'),
    'description' => t('Perform administration tasks for LocalGov Base: Editor.'),
    'restrict access' => FALSE,
  );

  return $items;
}
