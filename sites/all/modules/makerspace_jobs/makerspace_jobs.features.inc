<?php
/**
 * @file
 * makerspace_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function makerspace_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function makerspace_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function makerspace_jobs_node_info() {
  $items = array(
    'job_posting' => array(
      'name' => t('Job Posting'),
      'base' => 'node_content',
      'description' => t('Know a job that might be good for someone at MakeHaven. Post a listing in this private forum only visible to members.'),
      'has_title' => '1',
      'title_label' => t('What'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
