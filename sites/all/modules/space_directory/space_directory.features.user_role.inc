<?php
/**
 * @file
 * space_directory.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function space_directory_user_default_roles() {
  $roles = array();

  // Exported role: Space Leader.
  $roles['Space Leader'] = array(
    'name' => 'Space Leader',
    'weight' => 3,
  );

  return $roles;
}
