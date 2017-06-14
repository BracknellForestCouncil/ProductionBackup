<?php
/**
 * @file
 * filename.migrate.inc
 */

 /**
  * Special migration destination handler that imports taxonomy terms by UUID,
  * preserving hierarchy.
  *
  * If the terms in the source data are not guaranteed to be ordered such that
  * parent terms always precede their children, then this handler requires
  * special multi-pass handling in the migration to ensure that all terms
  * are imported.
  *
  * @see    #hasDeferredImports()
  * @see    #runDeferredImports()
  *
  * @author Guy Paddock (guy.paddock@redbottledesign.com)
  */
 class MigrateDestinationUuidTerm extends MigrateDestinationTerm {
   protected $deferredImports;

   /**
    * Constructor for MigrateDestinationUuidTerm.
    *
    * @see           MigrateDestinationTerm::__construct()
    *
    * @param string  $bundle
    *                The machine name of the taxonomy vocabulary.
    *
    * @param array   $options
    *                An optional array of options to control the import process.
    */
   public function __construct($bundle, array $options = array()) {
     parent::__construct($bundle, $options);

     $this->deferredImports = array();
   }

   /**
    * Returns the fields that are exposed by this migration destination.
    *
    * The only additional field is "Parent (by UUID)".
    */
   public function fields($migration = NULL) {
     $fields = parent::fields();

     $fields['parent_uuid'] = t('Parent (by UUID).');

     return $fields;
   }

   /**
    * Import the provided term, using information from the provided row.
    *
    * @see MigrateDestinationTerm::import()
    */
   public function import(stdClass $term, stdClass $row) {
     // Look up parent name if provided
     if (isset($term->parent_uuid)) {
       $parent_uuid = trim($term->parent_uuid);

       if (!empty($parent_uuid)) {
         $parent_tid = entity_get_id_by_uuid('taxonomy_term', array($parent_uuid));

         if (!empty($parent_tid)) {
           $term->parent = $parent_tid[$parent_uuid];
         }

         else {
           $deferredImport = new stdClass();

           $deferredImport->term = $term;
           $deferredImport->row  = $row;

           $this->deferredImports[] = $deferredImport;
         }
       }
     }

     $tid = parent::import($term, $row);

     return $tid;
   }

   /**
    * Check whether or not this destination has terms for which the import was
    * "deferred" because their parent term could not be found.
    *
    * @return  boolean TRUE if there are terms for which import was deferred;
    *                  FALSE, otherwise.
    */
   public function hasDeferredImports() {
     return (count($this->deferredImports) > 0);
   }

   /**
    * Return the UUIDs of any terms for which import was deferred.
    *
    * @return array  An array of UUID keys for all deferred term imports.
    */
   public function getDeferredImportKeys() {
     $keys = array();

     foreach ($this->deferredImports as $import) {
       $keys[] = $import->term->uuid;
     }

     return $keys;
   }

   /**
    * Attempt to import any terms for which import was previously deferred.
    *
    * This will run import() again for each term and row, which will again
    * attempt to match up each term with its parent term.
    *
    * Any term for which a parent term is still not found will be returned to
    * the set of deferred imports. If the import is a multi-level hierarchy,
    * this method can be invoked multiple times until every level of the
    * hierarchy has been successfully imported.
    */
   public function runDeferredImports() {
     $currentDeferredImports = $this->deferredImports;

     // Clear the list of deferred imports, to be rebuilt during the import.
     $this->deferredImports  = array();

     foreach ($currentDeferredImports as $import) {
       // This will automatically re-queue any imports that still need to be deferred.
       $this->import($import->term, $import->row);
     }
   }
 }


abstract class LocalGovTaxonomyMigration extends LocalGovMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import taxonomy terms.');

    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_import') . '/data';
    }else{
      $location = variable_get('localgov_import_location');
    }

    $columns = $this->getColumns();

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'import_id'
        ),
      ),
      MigrateDestinationUuidTerm::getKeySchema()
    );

    // Create a MigrateSource object.


    $term_options = MigrateDestinationUuidTerm::options('en', 'html_basic');

    $this->addFieldMapping('name', 'title');
    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('parent_uuid', 'parent');
    // $this->addFieldMapping('parent_name', 'parent_name');
    $this->addFieldMapping('vocabulary_machine_name', 'vocab');
  }

  public function getColumns() {
    $columns = array(
      0 => array('id', 'ID'),
      1 => array('uuid', 'UUID'),
      2 => array('vocab', 'Vocabulary'),
      3 => array('parent', 'Parent UUID'),
      4 => array('parent_name', 'Parent'),
      5 => array('weight', 'Weight'),
      6 => array('title', 'Title'),
      7 => array('description', 'Description')
    );
    return $columns;
  }
}


class TaxonomyMigration extends LocalGovTaxonomyMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import categories.');
    $columns = $this->getColumns();
    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_import') . '/data';
    }else{
      $location = variable_get('localgov_import_location');
    }
    $term_options = MigrateDestinationUuidTerm::options('en', 'basic');
    $this->destination = new MigrateDestinationUuidTerm('', $term_options);
    $this->source = new MigrateSourceCSV($location . '/taxonomy.csv',  $columns, array('header_rows' => 1));
  }

  public function getColumns() {
    $columns = parent::getColumns();
    return $columns;
  }


  function postImport() {
    /* @var $destination MigrateDestinationUuidTerm */
    $destination = $this->destination;

    $remainingPassLimit = 100;

    /* Keep going until we have no more orphan terms, or we're stuck in a
     * seemingly infinite loop (only happens with bad data).
     */
    while ($destination->hasDeferredImports() && ($remainingPassLimit > 0)) {
      $destination->runDeferredImports();

      --$remainingPassLimit;
    }

    // Display an error if we still have orphans left over.
    if ($destination->hasDeferredImports()) {
      drupal_set_message(
        t("One or more terms could not be imported because their parent terms could not be found: (%terms)",
          array('%terms' => implode(", ", $destination->getDeferredImportKeys()))),
        'warning');
    }
  }

}
