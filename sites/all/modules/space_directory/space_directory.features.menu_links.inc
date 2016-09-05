<?php
/**
 * @file
 * space_directory.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function space_directory_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_capabilities:comparison.
  $menu_links['main-menu_capabilities:comparison'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'comparison',
    'router_path' => 'comparison',
    'link_title' => 'Capabilities',
    'options' => array(
      'identifier' => 'main-menu_capabilities:comparison',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_spaces:<front>',
  );
  // Exported menu link: main-menu_directory:directory.
  $menu_links['main-menu_directory:directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'directory',
    'router_path' => 'directory',
    'link_title' => 'Directory',
    'options' => array(
      'identifier' => 'main-menu_directory:directory',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_spaces:<front>',
  );
  // Exported menu link: main-menu_map:map.
  $menu_links['main-menu_map:map'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'map',
    'router_path' => 'map',
    'link_title' => 'Map',
    'options' => array(
      'identifier' => 'main-menu_map:map',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_spaces:<front>',
  );
  // Exported menu link: main-menu_space-leaders:leaders.
  $menu_links['main-menu_space-leaders:leaders'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'leaders',
    'router_path' => 'leaders',
    'link_title' => 'Space Leaders',
    'options' => array(
      'identifier' => 'main-menu_space-leaders:leaders',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_spaces:<front>',
  );
  // Exported menu link: main-menu_spaces:<front>.
  $menu_links['main-menu_spaces:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Spaces',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_spaces:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Capabilities');
  t('Directory');
  t('Map');
  t('Space Leaders');
  t('Spaces');

  return $menu_links;
}
