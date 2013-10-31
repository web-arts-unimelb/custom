<?php
/**
 * @file
 * admin_user_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function admin_user_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-admin-user-menu.
  $menus['menu-admin-user-menu'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'title' => 'admin_user_menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('admin_user_menu');


  return $menus;
}
