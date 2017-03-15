<?php
/**
 * @file
 * localgov_content_location.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_location
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

class TaxonomyLocationTypeMigration extends TaxonomyMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import categories.');
    $columns = $this->getColumns();
    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_content_location') . '/migrate';
      $datafile = '/localgov_content_location.taxonomy.csv';
    }else{
      $location = variable_get('localgov_import_location') . '/taxonomy';
      $datafile = '/location.csv';
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

 class NodeLocationMigration extends NodeMigration {
   public function __construct($arguments) {
     parent::__construct($arguments);
     // Set migrate data location
     if (variable_get('localgov_import_location') == FALSE) {
       $location = drupal_get_path('module', 'localgov_content_location') . '/migrate';
       $datafile = '/localgov_content_location.node.csv';
     }else{
       $location = variable_get('localgov_import_location') . '/node';
       $datafile = '/location.csv';
     }
     $columns = $this->getColumns();
     $node_options = MigrateDestinationNode::options('en', 'html_basic');
     $this->destination = new MigrateDestinationNode('location', $node_options);
     $this->source = new MigrateSourceCSV($location . $datafile,  $columns, array('header_rows' => 1));
   }
   public function getColumns() {
     $columns = parent::getColumns();
     return $columns;
   }
 }
//
// class NodeLocationMigration extends NodeMigration {
//   public function __construct($arguments) {
//     parent::__construct($arguments);
//
//     // Set migrate data location
//     if (variable_get('localgov_import_location') == FALSE) {
//       $location = drupal_get_path('module', 'localgov_content_directory') . '/migrate';
//       $datafile = '/localgov_content_location.node.csv';
//     }else{
//       $location = variable_get('localgov_import_location') . '/node';
//       $datafile = '/location.csv';
//     }
//
//     // Source and destination relation for rollbacks
//     $this->map = new MigrateSQLMap(
//       $this->machineName,
//       array(
//         'location_id' => array(
//           'type' => 'int',
//           'unsigned' => TRUE,
//           'not null' => TRUE
//         )
//       ),
//       MigrateDestinationNode::getKeySchema()
//     );
//
//     $columns = $this->getColumns();
//     $node_options = MigrateDestinationNode::options('en', 'basic');
//     $this->destination = new MigrateDestinationNode('location', $node_options);
//     $this->source = new MigrateSourceCSV($location . $datafile,  $columns, array('header_rows' => 1));
//
//     $this->addFieldMapping('field_location_type', 'location_type');
//     $this->addFieldMapping('field_location_address:organisation_name', 'address_organisation');
//     $this->addFieldMapping('field_location_address', 'address_country');
//     $this->addFieldMapping('field_location_address:thoroughfare', 'address_thoroughfare');
//     $this->addFieldMapping('field_location_address:premise', 'address_premise');
//     $this->addFieldMapping('field_location_address:locality', 'address_locality');
//     $this->addFieldMapping('field_location_address:administrative_area', 'address_administrative_area');
//     $this->addFieldMapping('field_location_address:postal_code', 'address_postal_code');
//     $this->addFieldMapping('field_location_email', 'email');
//     $this->addFieldMapping('field_location_telephone', 'phone');
//     $this->addFieldMapping('field_location_url', 'url');
//
//   }
//
//   public function getColumns() {
//     $columns = array();
//
//     $columns = parent::getColumns();
//     $columns[] = array('location_type', 'Location Type');
//     $columns[] = array('email', 'Email');
//     $columns[] = array('phone', 'Phone');
//     $columns[] = array('url', 'URL');
//     $columns[] = array('address_organisation', 'Organisation');
//     $columns[] = array('address_thoroughfare', 'Address 1');
//     $columns[] = array('address_premise', 'Address 2');
//     $columns[] = array('address_locality', 'Town');
//     $columns[] = array('address_administrative_area', 'County');
//     $columns[] = array('address_postal_code', 'Post Code');
//     $columns[] = array('address_country', 'Country');
//
//     $columns[0] = array('location_id', 'ID');
//
//     return $columns;
//   }
// }
