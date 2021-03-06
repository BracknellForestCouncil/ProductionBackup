<?php
/**
 * @file
 * localgov_content_basic.migrate.inc
 * TODO: Add file description
 *
 * @package   localgov_content_basic
 * @author    Craig Gardener <craig.gardener@bracknell-forest.gov.uk>
 * @copyright Copyright (c) 2016, Craig Gardener
 * @license   http://opensource.org/licenses/gpl-license.php
 *            GNU General Public License, version 2 or later
 */

 class NodeBasicMigration extends NodeMigration {
   public function __construct($arguments) {
     parent::__construct($arguments);
     // Set migrate data location
     if (variable_get('localgov_import_location') == FALSE) {
       $location = drupal_get_path('module', 'localgov_content_basic') . '/migrate/localgov_content_';
     }else{
       $location = variable_get('localgov_import_location') . '/node/';
     }
     $columns = $this->getColumns();
     $node_options = MigrateDestinationNode::options('en', 'html_basic');
     $this->destination = new MigrateDestinationNode('basic', $node_options);
     $this->source = new MigrateSourceCSV($location . 'basic.csv',  $columns, array('header_rows' => 1));
   }
   public function getColumns() {
     $columns = parent::getColumns();
     return $columns;
   }
 }
