<?php
/**
 * @file
 * filename.migrate.inc
 */

class MenuMigration extends LocalGovMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Creates sample menus.');

    // Set migrate data location
    if (variable_get('localgov_import_location') == FALSE) {
      $location = drupal_get_path('module', 'localgov_base_import') . '/data';
    }else{
      $location = variable_get('localgov_import_location');
    }

    $columns = array(
      // "Source": ('Fieldname', 'Description')
      0 => array('id', 'ID'),
      1 => array('menu', 'Menu'),
      2 => array('parent', 'Parent'),
      3 => array('external', 'External'),
      4 => array('router', 'Router'),
      5 => array('path', 'Path'),
      6 => array('weight', 'Weight'),
      7 => array('title', 'Title'),
      8 => array('description','Description')
    );
    // The Source of the import
    $this->source = new MigrateSourceCSV($location . '/menu.csv', $columns, array('header_rows' => 1));

    $this->destination = new MigrateDestinationMenuLinks('');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'ID of destination link',
        ),
      ),
      MigrateDestinationMenuLinks::getKeySchema()
    );

    $this->addFieldMapping('mlid','id');
    $this->addFieldMapping('menu_name','menu')->defaultValue('navigation'); // Always Main menu
    $this->addFieldMapping('plid', 'parent')->sourceMigration($this->machineName);
    $this->addFieldMapping('link_path', 'path')->defaultValue('http://google.com');          // path of the link
    $this->addFieldMapping('router_path','router')->defaultValue('node/%');
    $this->addFieldMapping('link_title', 'title');        // Title of the menu item
    $this->addFieldMapping('options', 'description');
    $this->addFieldMapping('external','external')->defaultValue('0'); // Internal
    $this->addFieldMapping('expanded')->defaultValue('0');
    $this->addFieldMapping('weight','weight')->defaultValue('0');            // weight
    $this->addFieldMapping('customized')->defaultValue('1'); // not customized
    $this->addFieldMapping('has_children')->defaultValue('0');  // Will be overridden automatically
    $this->addFieldMapping('depth')->defaultValue('1'); // Will be overridden automatically

    $this->addUnmigratedDestinations(array('module', 'hidden','p1', 'p2', 'p3', 'p4', 'p5', 'p6', 'p7', 'p8', 'p9', 'updated'));

  }

   function prepareRow($row) {

      if($row->description){
        $options = array(
          'attributes' => array(
            'title' => $row->description
          )
        );
        $row->description = $options;
      }else{
        $options = array(
          'attributes' => array(
            'title' => $row->title
          )
        );
        $row->description = $options;
      }
   }



/**
   *
   * @param $migration
   *  The source migration
   * @return
   *  int $mlid on success
   *  FALSE on failure
   */
  protected function createStub($migration) {
    // if ref_parent is 0, that means it has no parent, so don't create a stub
    if (!$migration->sourceValues->parent) {
      return FALSE;
    }
    $menu_link = array (
      'menu_name' => $migration->sourceValues->menu_name,
      'link_path' => 'stub-path',
      'router_path' => 'stub-path',
      'link_title' => t('Stub title'),
    );
    $mlid = menu_link_save($menu_link);
    if ($mlid) {
      return array($mlid);
    }
    else {
      return FALSE;
    }
  }
}
