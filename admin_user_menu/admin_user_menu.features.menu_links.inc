<?php
/**
 * @file
 * admin_user_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function admin_user_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-user-menu:admin/content
  $menu_links['menu-admin-user-menu:admin/content'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-admin-user-menu:admin/content/dashboard
  $menu_links['menu-admin-user-menu:admin/content/dashboard'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content/dashboard',
    'router_path' => 'admin/content/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: menu-admin-user-menu:admin/content/dashboard/media
  $menu_links['menu-admin-user-menu:admin/content/dashboard/media'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content/dashboard/media',
    'router_path' => 'admin/content/dashboard/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/dashboard',
  );
  // Exported menu link: menu-admin-user-menu:admin/content/dashboard/my
  $menu_links['menu-admin-user-menu:admin/content/dashboard/my'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content/dashboard/my',
    'router_path' => 'admin/content/dashboard/my',
    'link_title' => 'My dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content/dashboard',
  );
  // Exported menu link: menu-admin-user-menu:admin/content/webform
  $menu_links['menu-admin-user-menu:admin/content/webform'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content/webform',
    'router_path' => 'admin/content/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure
  $menu_links['menu-admin-user-menu:admin/structure'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure/menu
  $menu_links['menu-admin-user-menu:admin/structure/menu'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure/menu/manage/main-menu
  $menu_links['menu-admin-user-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure/nodequeue
  $menu_links['menu-admin-user-menu:admin/structure/nodequeue'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure/nodequeue',
    'router_path' => 'admin/structure/nodequeue',
    'link_title' => 'Nodequeue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-admin-user-menu:import
  $menu_links['menu-admin-user-menu:import'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: menu-admin-user-menu:node/add
  $menu_links['menu-admin-user-menu:node/add'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: menu-admin-user-menu:node/add/award
  $menu_links['menu-admin-user-menu:node/add/award'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/award',
    'router_path' => 'node/add/award',
    'link_title' => 'Award',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/event
  $menu_links['menu-admin-user-menu:node/add/event'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/news
  $menu_links['menu-admin-user-menu:node/add/news'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/page
  $menu_links['menu-admin-user-menu:node/add/page'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/slider
  $menu_links['menu-admin-user-menu:node/add/slider'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/slider',
    'router_path' => 'node/add/slider',
    'link_title' => 'Banner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/video
  $menu_links['menu-admin-user-menu:node/add/video'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/webform
  $menu_links['menu-admin-user-menu:node/add/webform'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Award');
  t('Banner');
  t('Content');
  t('Dashboard');
  t('Event');
  t('Import');
  t('Main menu');
  t('Media');
  t('Menu');
  t('My dashboard');
  t('News');
  t('Nodequeue');
  t('Page');
  t('Structure');
  t('Video');
  t('Webform');


  return $menu_links;
}
