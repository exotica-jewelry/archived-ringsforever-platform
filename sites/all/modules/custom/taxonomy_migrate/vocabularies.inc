<?php
/**
* @file
* Dynamic Taxonomy Term Migration
* This is a dynamic migration, reused for every vocabulary.
*/

class TaxonomyMigrateTermMigration extends DynamicMigration {

  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Migrate Tag Terms for vocabulary %vocabulary from original vid %original_vid', array('%vocabulary' => $arguments['dst_vocabulary'], $arguments['src_vid']));
    // Things will be set up against the vid.
    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Moreover, we need to
    // pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Term ID',
          'alias' => 'td',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );
  
    $connection = commerce_migrate_ubercart_get_source_connection();
    $query = $connection->select('term_data', 'td')
      ->fields('td', array('tid', 'vid', 'name', 'description', 'weight'))
      ->condition('td.vid', $arguments['src_vid'], '=');
    $query->join('term_hierarchy', 'th', 'td.tid = th.tid');
    $query->addField('th', 'parent');
    $query->orderBy('th.parent', 'ASC');
  
//    dpm('query=' . $query);
//    dpm('vocab=' . $arguments['src_vid']);
  
    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));
  
    // Set up our destination - term in this case.
    $this->destination = new MigrateDestinationTerm($arguments['dst_vocabulary']);
  
    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('name_field', 'name');
    $this->addFieldMapping('name_field:language', 'language')->defaultValue('nl');

    // Set term description fields
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('description_field', 'description');
    $this->addFieldMapping('description_field:format')->defaultValue('plain_text');
    $this->addFieldMapping('description_field:language', 'language')->defaultValue('nl');
    // Set various flags
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('parent', 'parent')->sourceMigration($this->getMachineName());
/*
    // Set product-category vocab specific fields
    if ('TaxonomyMigrateTermWenskaarten' == $this->getMachineName()) {
      $this->addFieldMapping('field_show_in_cloud', 'cloud_display')->defaultValue(0);
      $this->addFieldMapping('field_cloud_font_size', 'cloud_font_size')->defaultValue('12');
    }
    // Set metatag fields
    $this->addFieldMapping('metatag_description', 'metatag_description');
    $this->addFieldMapping('metatag_keywords', 'metatag_keywords');
    $this->addFieldMapping('metatag_title', 'metatag_title');
*/
    // Unmapped source fields
    $this->addUnmigratedSources(array('vid'));
  
    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('path', 'parent_name'));
  }

  public function prepareRow($row) {
    // If there is not parent term id for the term, unset the parent value.
    // Taxonomy does not like for a value to be provided if it does not exist.
    if ($row->parent == 0) {
      unset($row->parent);
    }
/*
    if ('TaxonomyMigrateTermWenskaarten' == $this->getMachineName()) {
      $connection = commerce_migrate_ubercart_get_source_connection();
      // Get the related title
      $query_string = "SELECT * FROM {custom_table} WHERE tid = :tid";
      $category_options = $connection->query($query_string, array(':tid' => $row->tid))->fetchObject();
      if (!empty($category_options->tid)) {
        $row->related_title = $category_options->related_title;
      }
    
      // Get the category cloud options
      $query_string = "SELECT * FROM {custom_table} WHERE tid = :tid";
      $cloud_options = $connection->query($query_string, array(':tid' => $row->tid))->fetchObject();
      if (!empty($cloud_options->tid)) {
        $row->cloud_display = $cloud_options->display;
        $row->cloud_font_size = $cloud_options->font_size;
      }
    }
  
    // Get meta description and keyword values
    $query = $connection->select('nodewords', 'ndw');
    $query->addField('ndw', 'name', 'name');
    $query->addField('ndw', 'content', 'content');
    $query->condition('ndw.id', $row->tid);
    $query->condition('ndw.type', 6); // 6 = term
    $query->condition('ndw.name', array('description', 'keywords'), 'IN');
    $query->distinct();
    // Execute query
    $result = $query->execute();
    // Fetch all the results
    while ($record = $result->fetchAssoc()) {
        $content = unserialize($record['content']);
        if ('description' == $record['name'] && isset($content['value'])) $row->metatag_description = $content['value'];
        if ('keywords' == $record['name'] && isset($content['value'])) $row->metatag_keywords = $content['value'];
    }

    // Get the meta title
    $query_string = "SELECT page_title FROM {page_title} WHERE id = :id AND type = :type";
    $page_title = $connection->query($query_string, array(':id' => $row->tid, ':type' => 'term'))->fetchObject();
  
    if (!empty($page_title->page_title)) {
      $row->metatag_title = $page_title->page_title;
    }
*/  
//    dpm(__METHOD__);
//    dpm($row);
    // We could also have used this function to decide to skip a row, in cases
    // where that couldn't easily be done through the original query. Simply
    // return FALSE in such cases.
    return TRUE;
  }
  /**
    * Construct the machine name (identifying the migration in "drush ms" and other places).
    */
  protected function generateMachineName($class_name = NULL) {
    return 'TaxonomyMigrateTerm' . ucfirst($this->arguments['dst_vocabulary']);
  }
 
  /**
    * Return a list of all taxonomy migrations.
    */
  public static function getTaxonomyTermMigrations() {
    $migrations = array();
    $results = db_query("SELECT machine_name FROM {taxonomy_vocabulary}");
    foreach ($results as $record) {
      $migrations[] = 'TaxonomyMigrateTerm' . ucfirst($record->machine_name);
    }
    return $migrations;
  }
}
