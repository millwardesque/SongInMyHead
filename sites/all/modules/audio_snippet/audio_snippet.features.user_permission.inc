<?php
/**
 * @file
 * audio_snippet.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function audio_snippet_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer audio cropping.
  $permissions['administer audio cropping'] = array(
    'name' => 'administer audio cropping',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'audio_crop',
  );

  // Exported permission: create audio_snippet content.
  $permissions['create audio_snippet content'] = array(
    'name' => 'create audio_snippet content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any audio_snippet content.
  $permissions['delete any audio_snippet content'] = array(
    'name' => 'delete any audio_snippet content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own audio_snippet content.
  $permissions['delete own audio_snippet content'] = array(
    'name' => 'delete own audio_snippet content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any audio_snippet content.
  $permissions['edit any audio_snippet content'] = array(
    'name' => 'edit any audio_snippet content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own audio_snippet content.
  $permissions['edit own audio_snippet content'] = array(
    'name' => 'edit own audio_snippet content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
