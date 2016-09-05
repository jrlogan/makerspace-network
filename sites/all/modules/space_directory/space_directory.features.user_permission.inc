<?php
/**
 * @file
 * space_directory.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function space_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'apply for roles'.
  $permissions['apply for roles'] = array(
    'name' => 'apply for roles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'apply_for_role',
  );

  return $permissions;
}
