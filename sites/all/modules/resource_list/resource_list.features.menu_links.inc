<?php
/**
 * @file
 * resource_list.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function resource_list_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_resource-list:resources.
  $menu_links['main-menu_resource-list:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resource List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resource-list:resources',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:<front>',
  );
  // Exported menu link: main-menu_resources:<front>.
  $menu_links['main-menu_resources:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Resource List');
  t('Resources');

  return $menu_links;
}
