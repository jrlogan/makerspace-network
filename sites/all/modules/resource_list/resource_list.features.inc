<?php
/**
 * @file
 * resource_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resource_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function resource_list_flag_default_flags() {
  $flags = array();
  // Exported flag: "Endorse".
  $flags['endorse'] = array(
    'entity_type' => 'node',
    'title' => 'Endorse',
    'global' => 0,
    'types' => array(
      0 => 'resource',
    ),
    'flag_short' => 'Endorse',
    'flag_long' => 'Give your vote of confidence',
    'flag_message' => '',
    'unflag_short' => 'Withdraw Endorsement',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'question' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'resource_list',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "spam".
  $flags['spam'] = array(
    'entity_type' => 'node',
    'title' => 'spam',
    'global' => 1,
    'types' => array(
      0 => 'job_posting',
      1 => 'resource',
    ),
    'flag_short' => 'Flag Spam',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Undo Flag as Spam',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'question' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'You are marking as spam and it will be removed from list',
    'unflag_confirmation' => 'Remove spam flag',
    'api_version' => 3,
    'module' => 'resource_list',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function resource_list_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Resource Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
