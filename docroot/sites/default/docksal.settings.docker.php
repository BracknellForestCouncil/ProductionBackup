<?php

/**
 * @file
 * Docker settings file.
 */

$databases = array(
  'default' => array(
    'default' => array(
      'driver' => 'mysql',
      'database' => 'bfc_db',
      'username' => 'bfc_user',
      'password' => 'bfc_pass',
      'host' => 'db',
      'port' => '3306',
      'prefix' => '',
      'charset' => 'utf8mb4',
      'collation' => 'utf8mb4_general_ci',
    ),
  ),
);
