<?php

/**
 * @file
 * Global helper functions for the Bracknell site
 */

/**
 * Global function to return field with known language. This will save time
 * and performs better than field_get_items() as it does not route through
 * the field_language() functions.
 * 
 * @param object $entity
 *  The enitity in which the field should reside, typically a node.
 * @param string $field_name
 *  The fieldname to look for and return.
 * @return mixed
 *  Returns FALSE if variables are empty or the field isn't set otherwise will
 *  return a field object including the language part.
 *
 * @see field_get_items()
 */
function quickReturnField($entity, $field_name) {
  if (empty($entity) || empty($field_name)) {
    return FALSE;
  }

  if (!empty($entity->language) && $langcode = $entity->language) {
    if (isset($entity->{$field_name}[$langcode])) {
      return $entity->{$field_name}[$langcode];
    }
    else {
      return FALSE;
    }
  }
}
