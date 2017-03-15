<?php
/**
 * @file
 * localgov_base_moderation.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_moderation
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

class TaxonomyModerationMigration extends TaxonomyMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import categories.');
    $columns = $this->getColumns();
    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_moderation') . '/migrate';
      $datafile = '/localgov_base_moderation.csv';
    }else{
      $location = variable_get('localgov_import_location') . '/taxonomy';
      $datafile = '/moderation.csv';
    }
    $term_options = MigrateDestinationUuidTerm::options('en', 'html_basic');
    $this->destination = new MigrateDestinationUuidTerm('', $term_options);
    $this->source = new MigrateSourceCSV($location . $datafile,  $columns, array('header_rows' => 1));
  }

  public function getColumns() {
    $columns = parent::getColumns();
    return $columns;
  }

}

class LocalgovBaseModerationMigrateDestinationHandler extends MigrateDestinationHandler {
  public function __construct() {}
  public function handlesType($destination) {
    return ($destination == 'Node');
  }
  public function fields($entity_type, $bundle_type) {
    $fields = array();
    // if (workbench_moderation_node_type_moderated($bundle_type)) {
      $fields['workbench_moderation_state_new'] = t('Moderation state');
    // }
    return $fields;
  }
}
