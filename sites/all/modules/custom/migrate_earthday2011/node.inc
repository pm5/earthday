<?php

class EarthdayStoryMigration extends DrupalNode6Migration
{
  public function __construct($arguments)
  {
    parent::__construct($arguments);

    $this->addFieldMapping('is_new')
      ->defaultValue(TRUE);
    $this->addFieldMapping('nid', 'nid');
    $this->addFieldMapping('field_image', 'field_image')
      ->sourceMigration('earthday_files');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_category')
      ->defaultValue('新聞');
  }
}

class EarthdayTopicsMigration extends DrupalNode6Migration
{
  public function __construct($arguments)
  {
    parent::__construct($arguments);

    $this->addFieldMapping('is_new')
      ->defaultValue(TRUE);
    $this->addFieldMapping('nid', 'nid');
    $this->addFieldMapping('field_image', 'field_image')
      ->sourceMigration('earthday_files');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_column_type', 'name');
  }

  public function query()
  {
    $query = parent::query();
    $query->innerJoin('term_node', 't', 't.nid = n.nid');
    $query->innerJoin('term_data', 'td', 't.tid = td.tid');
    $query->fields('td', array('name'));
    return $query;
  }
}

class EarthdayEventsMigration extends DrupalNode6Migration
{
  public function __construct($arguments)
  {
    parent::__construct($arguments);

    $this->addFieldMapping('is_new')
      ->defaultValue(TRUE);
    $this->addFieldMapping('nid', 'nid');
    $this->addFieldMapping('field_holder', 'field__2');
    $this->addFieldMapping('field_contact', 'field_e_mail');
    $this->addFieldMapping('field_register_link', 'field__3');
    $this->addFieldMapping('field_location', 'field__0');
  }
}

