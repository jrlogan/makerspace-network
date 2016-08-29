<?php
/**
 * @file
 * makerspace_jobs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function makerspace_jobs_taxonomy_default_vocabularies() {
  return array(
    'job_status' => array(
      'name' => 'Job Status',
      'machine_name' => 'job_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'job_type' => array(
      'name' => 'Job Type',
      'machine_name' => 'job_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
