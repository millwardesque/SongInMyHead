<?php
/**
 * @file
 * audio_snippet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function audio_snippet_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function audio_snippet_node_info() {
  $items = array(
    'audio_snippet' => array(
      'name' => t('Audio snippet'),
      'base' => 'node_content',
      'description' => t('A user-uploaded snippet of audio'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
