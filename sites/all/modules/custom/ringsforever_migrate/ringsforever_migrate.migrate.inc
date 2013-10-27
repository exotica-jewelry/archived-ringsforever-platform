<?php

/**
 * @file
 *  Migrations for ringsforever_migrate.
 */

class CommerceKickstartRings extends CommerceKickstartMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import rings from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ringsforever_migrate') . '/import/rings.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'rings');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');

    // images
    // @todo: move to product node
    $this->addFieldMapping('field_images', 'product_images');
    $this->addFieldMapping('field_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'ringsforever_migrate') . '/import/images');

    // Width
    $this->addFieldMapping('field_ring_width', 'width');
    $this->addFieldMapping('field_ring_width:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    // "Title","SKU","Width","Price"
    // Original CK: "Title","SKU","Color","Size","Price","Images"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[3] = array('width', 'Width');
    $columns[4] = array('price', 'Price');
    return $columns;
  }

  // @todo: move to product node
  function fields() {
    return array(
      'product_images' => 'An array of images, populated during prepareRow().',
    );
  }

  function prepareRow($row) {
    $row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class CommerceKickstartNode extends DynamicMigration {

  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import product nodes.');
    $this->dependencies = array('CommerceKickstartRings');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ringsforever_migrate') . '/import/product_display_' . $arguments['type'] . '.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode($arguments['type']);

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    // Title  Description Collection  Elements  Featuring SKU Product Additional elements Images

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:summary', 'excerpt');
    $this->addFieldMapping('field_featuring', 'featuring');
    $this->addFieldMapping('field_featuring:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_elements', 'elements');
    $this->addFieldMapping('field_elements:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_collection', 'collection')
          ->separator(', ');
    $this->addFieldMapping('field_collection:create_term')
      ->defaultValue(TRUE);
    // @todo: Figure out how to add the same taxonomy to a different field (hiding for now)
    // $this->addFieldMapping('field_elements_addl', 'elements_addl');
    // $this->addFieldMapping('field_elements_addl:create_term')
      ->defaultValue(TRUE);
    // @todo: Move image fields here
    $this->addFieldMapping('field_product', 'skus');
  }

  public function prepareRow($row) {
    $products = array();
    foreach(explode(', ', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('description', 'Description');
    $columns[2] = array('collection', 'Collection');
    $columns[3] = array('elements', 'Elements');
    $columns[5] = array('featuring', 'Featuring');
    $columns[6] = array('sku', 'SKU');
    $columns[7] = array('product', 'Product');
    // @todo: Figure out how to add the same taxonomy to a different field (hiding for now)
    // $columns[8] = array('elements_addl', 'Addelements');
    // @todo: Include image fields here
    return $columns;
  }

  /**
   * Construct the machine name from the source file name.
   */
  protected function generateMachineName($class_name = NULL) {
    return drupal_strtolower('CommerceKickstartNode' . $this->arguments['type']);
  }

  public function processImport(array $options = array()) {
    parent::processImport($options);
    // Do not force menu rebuilding. Otherwise pathauto will try to rebuild
    // in each node_insert invocation.
    variable_set('menu_rebuild_needed', FALSE);
  }
}

class CommerceKickstartCollection extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import collections terms.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ringsforever_migrate') . '/import/collections.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationTerm('collection');

    $this->addFieldMapping('name', 'name');
    // Images
    $this->addFieldMapping('field_image', 'images');
    $this->addFieldMapping('field_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'ringsforever_migrate') . '/import/images');
  }

  function csvcolumns() {
    // "Name", "Images"
    $columns[0] = array('name', 'Name');
    $columns[1] = array('images', 'Images');
    return $columns;
  }
}

class CommerceKickstartFeaturing extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import featuring terms.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ringsforever_migrate') . '/import/featuring.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationTerm('featuring');

    $this->addFieldMapping('name', 'name');
  }

  function csvcolumns() {
    // "Name"
    $columns[0] = array('name', 'Name');
    return $columns;
  }
}

class CommerceKickstartElements extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import elements terms.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ringsforever_migrate') . '/import/elements.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationTerm('elements');

    $this->addFieldMapping('name', 'name');
  }

  function csvcolumns() {
    // "Name"
    $columns[0] = array('name', 'Name');
    return $columns;
  }
}
