<?php
/**
 * @file
 * filename.migrate.inc
 */

abstract class LocalGovNodeMigration extends LocalGovMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'import'
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_import') . '/data/node';
    }else{
      $location = variable_get('localgov_import_location') . '/node';
    }

    // Field mappings
    $this->addFieldMapping('is_new','is_new')->defaultValue(TRUE);
    $this->addFieldMapping('revision')->defaultValue(TRUE);
    $this->addFieldMapping('log')->defaultValue('Automatic content migration.');

    $this->addFieldMapping('uuid', 'uuid');
    $this->addFieldMapping('path', 'path');
    $this->addFieldMapping('language','language')->defaultValue('en');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'updated');
    // if(module_exists('comment')){
      $this->addFieldMapping('comment', 'comment');
    // };
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('sticky', 'sticky');
    $this->addFieldMapping('promote', 'promote');
    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('uid', 'uid')
          ->sourceMigration('User')
          ->defaultValue('1');
    $this->addFieldMapping('revision_uid', 'user')
          ->sourceMigration('User')
          ->defaultValue('1');

    // $this->addFieldMapping('body', 'body');
    // $this->addFieldMapping('body:summary', 'summary');
    // $this->addFieldMapping('body:summary:format')->defaultValue('basic');
    // $this->addFieldMapping('body:format')->defaultValue('basic');
    // $this->addFieldMapping('body:language','language')->defaultValue('en');
    //
    // $this->addFieldMapping('field_subtitle', 'subtitle');

    $this->addFieldMapping('field_category', 'category')
          ->separator(',');
    $this->addFieldMapping('field_category:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_category:ignore_case')->defaultValue(FALSE);

    $this->addFieldMapping('field_tags', 'tags')
          ->separator(', ');
    $this->addFieldMapping('field_tags:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_tags:ignore_case')->defaultValue(FALSE);

    if(module_exists('localgov_base_moderation')) {
      $this->dependencies = array('TaxonomyModeration');
      $this->addFieldMapping('workbench_moderation_state_new', 'moderation_state')
        ->defaultValue('published');
      $this->addFieldMapping('field_moderation', 'moderation_group')
            ->separator(',');
      $this->addFieldMapping('field_moderation:create_term')->defaultValue(TRUE);
      $this->addFieldMapping('field_moderation:ignore_case')->defaultValue(FALSE);

    }

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('tnid', 'translate', 'category:source_type', 'tags:source_type'));
  }

  // Define columns
  public function getColumns(){
    $columns = array();
    $columns[]= array('id', 'ID');
    $columns[]= array('uuid', 'UUID');
    $columns[]= array('guide_uuid', 'Guide UUID');
    $columns[]= array('guide_weight', 'Guide Weight');

    $columns[]= array('status', 'Published');
    $columns[]= array('promote', 'Promoted');
    $columns[]= array('sticky', 'Sticky');

    $columns[]= array('created', 'Created');
    $columns[]= array('updated', 'Updated');
    $columns[]= array('uid', 'User ID');
    $columns[]= array('language', 'Language');
    $columns[]= array('path', 'Path');

    // if(module_exists('localgov_base_moderation')) {
      $columns[] = array('moderation_state', 'Moderation State');
      $columns[] = array('moderation_group', 'Editorial Group');
    // }

    $columns[]= array('title', 'Title');
    // $columns[]= array('subtitle', 'Subtitle');
    $columns[]= array('category', 'Category');
    $columns[]= array('tags', 'Tags');
    // $columns[]= array('summary', 'Summary');
    // $columns[]= array('body', 'Body');
    return $columns;
  }

  public function prepareRow($row) {
    // // Determine if UUID exists
    // $node = entity_get_id_by_uuid('node', array($row->uuid), FALSE);
    // if(!empty($row->uuid)) {
    //   if(empty($node)){
    //     $row->is_new = TRUE;
    //   }else{
    //     $row->nid = $node[$row->uuid];
    //     $row->is_new = FALSE;
    //   }
    // }

    // if(!empty($row->comment)){
    //   if($row->comment == 'Hidden'){
    //     $row->comment = '0';
    //   }
    //   if($row->comment == 'Closed'){
    //     $row->comment = '1';
    //   }
    //   if($row->comment == 'Open'){
    //     $row->comment = '2';
    //   }
    // }
  }


  public function complete($node, stdClass $row) {

    // // If Guide UUID provided, perform guide functions
    // if(module_exists('guide')){
    //   if(!empty($row->guide_uuid)){
    //     $node->guide['nid'] = $node->nid;
    //     if(!empty($row->guide_weight)){
    //       $node->guide['weight'] = $row->guide_weight;
    //     } else {
    //       $node->guide['weight'] = 0;
    //     }
    //
    //     // Get Guide ID from UUID
    //     $guide = entity_get_id_by_uuid('node', array($row->guide_uuid), FALSE);
    //     $row->guide_id = $guide[$row->guide_uuid];
    //     $node->guide['gid'] = $row->guide_id;
    //
    //     // Determine Parent and set plid
    //     if($row->guide_id == $node->nid){
    //       // Set plid to 0
    //       $node->guide['plid'] = 0;
    //     }else{
    //       if(!empty($row->guide_parent_uuid)){
    //         // Get Parent ID from UUID
    //         $parent = entity_get_id_by_uuid('node', array($row->guide_parent_uuid), FALSE);
    //         $row->guide_parent_id = $parent[$row->guide_parent_uuid];
    //         // Set plid to Parent
    //         $node->guide['plid'] = db_query("SELECT mlid FROM {guide} WHERE nid = :nid", array(':nid' => $row->guide_parent_id,))->fetchField();
    //       }else{
    //         // Set plid to Guide
    //         $node->guide['plid'] = db_query("SELECT mlid FROM {guide} WHERE nid = :nid", array(':nid' => $row->guide_id,))->fetchField();
    //       }
    //     }
    //
    //     // Update hierarchy and save node
    //     _guide_update_outline($node);
    //     node_save($node);
    //   }
    // }
  }

  /**
   * Returns a mapping for a migrated guide.
   *
   * @param int $source_guide_nid
   *   Nid of guide in source database to lookup.
   */
  protected function lookupMigratedGuide($source_guide_nid) {
    // $dest_guide_nid = parent::handleSourceMigration($this->machineName, $source_guide_nid);
    // return $dest_guide_nid;
  }

}


class NodeMigration extends LocalGovNodeMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import nodes.');
    $columns = $this->getColumns();
    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_import') . '/data';
    }else{
      $location = variable_get('localgov_import_location');
    }

    $node_options = MigrateDestinationNode::options('en', 'html_basic');
    $this->destination = new MigrateDestinationNode('', $node_options);
    $this->source = new MigrateSourceCSV($location . '/node.csv',  $columns, array('header_rows' => 1));
  }

  public function getColumns() {
    $columns = parent::getColumns();
    return $columns;
  }
}
