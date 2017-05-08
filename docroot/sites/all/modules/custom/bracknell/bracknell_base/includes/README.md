The helpers include inside the folder contains global functions that can be used
throughout the Bracknell site. 

It has been attached by using the files[] argument of the bracknell_base.info
file and also added as an include in the bracknell_base.module. This means that
if the bracknell_base module is enabled the functions should be available to all
modules.

Helper functions:

quickReturnField($entity, $field_name)

This is a high performance version of field_get_items and takes an entity and
a field name as it's arguments. It will return the field object if found or
FALSE if nor or if the params are empty.

Usage example:

```php
$directory_entry = quickReturnField($node, 'field_directory_entry');

if (!empty($directory_entry[0]['value']) {
    // Do something.
}
```