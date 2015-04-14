<?php
/**
 * @file
 * permission_create_bug_7_36.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function permission_create_bug_7_36_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bug_7_36 content'.
  $permissions['create bug_7_36 content'] = array(
    'name' => 'create bug_7_36 content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
