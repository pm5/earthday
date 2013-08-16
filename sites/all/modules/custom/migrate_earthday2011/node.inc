<?php

class EarthdayNewsMigration extends DrupalNode6Migration
{
    public function __construct($arguments)
    {
        parent::__construct($arguments);

        $this->addFieldMapping('field_image', 'field_image')
            ->sourceMigration('earthday_files');
        $this->addFieldMapping('field_image:file_class')
            ->defaultValue('MigrateFileFid');
        $this->addFieldMapping('field_category', null)
            ->defaultValue('新聞');
    }
}

