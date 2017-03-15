<?php
/**
 * @file
 * localgov_base_taxonomy.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_taxonomy
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */


 class TaxonomyCategoryMigration extends TaxonomyMigration {
   public function __construct($arguments) {
     parent::__construct($arguments);
     $this->description = t('Import categories.');
     $columns = $this->getColumns();
     // Set migrate data location
     if (variable_get('localgov_import_location') == FALSE) {
       $location = drupal_get_path('module', 'localgov_base_taxonomy') . '/migrate';
       $datafile = '/localgov_base_taxonomy.category.csv';
     }else{
       $location = variable_get('localgov_import_location') . '/taxonomy';
       $datafile = '/category.csv';
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


 class TaxonomyTagsMigration extends TaxonomyMigration {
   public function __construct($arguments) {
     parent::__construct($arguments);
     $this->description = t('Import categories.');
     $columns = $this->getColumns();
     // Set migrate data location
     if (variable_get('localgov_import_location') == FALSE) {
       $location = drupal_get_path('module', 'localgov_base_taxonomy') . '/migrate';
       $datafile = '/localgov_base_taxonomy.tags.csv';
     }else{
       $location = variable_get('localgov_import_location') . '/taxonomy';
       $datafile = '/tags.csv';
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

//
// class TaxonomyCategoryMigration extends TaxonomyMigration {
//   public function __construct($arguments) {
//     parent::__construct($arguments);
//     $this->description = t('Import categories.');
//     $columns = $this->getColumns();
//     // Set migrate data location
//     if (variable_get('localgov_import_location') == FALSE) {
//       $location = drupal_get_path('module', 'localgov_base_taxonomy') . '/data';
//     }else{
//       $location = variable_get('localgov_import_location') . '/taxonomy';
//     }
//     $term_options = MigrateDestinationUuidTerm::options('en', 'basic');
//     $this->destination = new MigrateDestinationUuidTerm('', $term_options);
//     $this->source = new MigrateSourceCSV($location . '/category.csv',  $columns, array('header_rows' => 1));
//   }
//
//   public function getColumns() {
//     $columns = parent::getColumns();
//     return $columns;
//   }
//
//
// }
//
//
//
// class TaxonomyTagsMigration extends TaxonomyMigration {
//   public function __construct($arguments) {
//     parent::__construct($arguments);
//     $this->description = t('Import categories.');
//     $columns = $this->getColumns();
//     // Set migrate data location
//     if (variable_get('localgov_import_location') == FALSE) {
//       $location = drupal_get_path('module', 'localgov_base_taxonomy') . '/data';
//     }else{
//       $location = variable_get('localgov_import_location') . '/taxonomy';
//     }
//     $term_options = MigrateDestinationUuidTerm::options('en', 'basic');
//     $this->destination = new MigrateDestinationUuidTerm('', $term_options);
//     $this->source = new MigrateSourceCSV($location . '/tags.csv',  $columns, array('header_rows' => 1));
//   }
//
//   public function getColumns() {
//     $columns = parent::getColumns();
//     return $columns;
//   }
//
//
// }
