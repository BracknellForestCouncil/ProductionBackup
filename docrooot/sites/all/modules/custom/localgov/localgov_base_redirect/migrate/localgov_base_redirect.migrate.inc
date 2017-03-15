<?php
/**
 * @file
 * localgov_base_redirect.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_base_redirect
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 /**
  * Redirect migration
  */
 class RedirectMigration extends LocalGovMigration {
   public function __construct($arguments) {
     parent::__construct($arguments);

     // Set migrate data location
     if (variable_get('localgov_import_location') == FALSE) {
       $location = drupal_get_path('module', 'localgov_base_redirect') . '/migrate';
       $datafile = 'localgov_base_redirect.csv';
     }else{
       $location = variable_get('localgov_import_location');
       $datafile = 'redirect.csv';
     }

     $columns = array(
       // "Source": ('Fieldname', 'Description')
       0 => array('rid', 'ID'),
       1 => array('uuid', 'UUID'),
       2 => array('old_path', 'From'),
       3 => array('new_path', 'To'),
       4 => array('status_code', 'Status Code'),
       5 => array('language', 'Language'),
     );

     // The Description of the import. This desription is shown on the Migrate GUI
     $this->description = t('Import redirects from a CSV file.');

     // The Source of the import
     $this->source = new MigrateSourceCSV($location . '/' . $datafile, $columns, array('header_rows' => 1));

     // The destination
     $this->destination = new MigrateDestinationRedirect();

     // Source and destination relation for rollbacks
     $this->map = new MigrateSQLMap(
     $this->machineName,
       array(
         'rid' => array(
           'type' => 'int',
           'unsigned' => TRUE,
           'not null' => TRUE,
           'alias' => 'import'
         )
       ),
       MigrateDestinationRedirect::getKeySchema()
     );

     // Field mapping
     $this->addFieldMapping('rid', 'rid');
     $this->addFieldMapping('source', 'old_path');
     $this->addFieldMapping('redirect', 'new_path');
     $this->addFieldMapping('status_code', 'status_code');
     $this->addFieldMapping('language', 'language');


   }
   // public function prepareRow($row) {
   //   $redirect_roles = explode(",", $row->roles);
   //   $roles = array('2' => '2');
   //   foreach ($redirect_roles as $role_name) {
   //     $rid = db_query('SELECT rid FROM {role} WHERE name = :name', array(':name' => $role_name))->fetchField();
   //     $roles[$rid] = $rid;
   //   }
   //   $row->roles = $roles;
   //   return TRUE;
   // }
 }
