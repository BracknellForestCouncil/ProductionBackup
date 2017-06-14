<?php
/**
 * @file
 * localgov_base_import.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_import
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

abstract class LocalGovMigration extends Migration {

  public function processImport(array $options = array()) {
    parent::processImport($options);
    // Do not force menu rebuilding. Otherwise pathauto will try to rebuild
    // in each node_insert invocation.
    variable_set('menu_rebuild_needed', FALSE);
  }

  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    // Detect line endings
    ini_set('auto_detect_line_endings', TRUE);


    // Do not force menu rebuilding. Otherwise pathauto will try to rebuild
    // in each node_insert invocation.
    variable_set('menu_rebuild_needed', FALSE);

    if (module_exists('pathauto')) {
      $this->addFieldMapping('pathauto')
        ->defaultValue(1)
        ->description(t('Perform aliasing (set to 0 to prevent alias generation during migration)'));
    }


    if (module_exists('redirect')) {
      $this->addUnmigratedDestinations(array('migrate_redirects'));
    }

    if (module_exists('metatag')) {
      $this->addUnmigratedDestinations(array('metatag_title', 'metatag_description', 'metatag_abstract', 'metatag_keywords', 'metatag_robots', 'metatag_news_keywords', 'metatag_standout', 'metatag_generator', 'metatag_copyright', 'metatag_image_src', 'metatag_canonical', 'metatag_shortlink', 'metatag_publisher', 'metatag_author', 'metatag_original-source', 'metatag_revisit-after'));
    }

  }
}
