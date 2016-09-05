<?php
/**
 * @file
 * space_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function space_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function space_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function space_directory_flag_default_flags() {
  $flags = array();
  // Exported flag: "member_space".
  $flags['member_space'] = array(
    'entity_type' => 'node',
    'title' => 'member_space',
    'global' => 0,
    'types' => array(
      0 => 'space',
    ),
    'flag_short' => 'I am affiliated with this space',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unassociate me with this space',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'question' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'space_directory',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function space_directory_image_default_styles() {
  $styles = array();

  // Exported image style: cover.
  $styles['cover'] = array(
    'label' => 'Cover',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: space_logo.
  $styles['space_logo'] = array(
    'label' => 'Space Logo',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 300,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function space_directory_node_info() {
  $items = array(
    'space' => array(
      'name' => t('Space'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Space Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function space_directory_default_profile2_type() {
  $items = array();
  $items['member'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "member",
    "label" : "Member",
    "weight" : "0",
    "data" : { "registration" : 1, "use_one_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['organizer'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "organizer",
    "label" : "Organizer",
    "weight" : "0",
    "data" : { "registration" : 0, "use_one_page" : 1, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
