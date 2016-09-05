<?php
/**
 * @file
 * space_wiki.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function space_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_wiki:wiki.
  $menu_links['main-menu_wiki:wiki'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wiki',
    'router_path' => 'wiki',
    'link_title' => 'Wiki',
    'options' => array(
      'identifier' => 'main-menu_wiki:wiki',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Wiki');

  return $menu_links;
}
