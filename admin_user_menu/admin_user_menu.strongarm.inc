<?php
/**
 * @file
 * admin_user_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function admin_user_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_source_settings';
  $strongarm->value = array(
    1 => array(
      'source' => '',
    ),
    2 => array(
      'source' => '',
    ),
    3 => array(
      'source' => '',
    ),
    4 => array(
      'source' => 'menu-admin-user-menu',
    ),
    5 => array(
      'source' => '',
    ),
  );
  $export['admin_menu_source_settings'] = $strongarm;

  return $export;
}
