<?php
/**
 * @file
 * audio_snippet.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function audio_snippet_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'audio_no_preview';
  $ds_view_mode->label = 'Audio - no preview';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['audio_no_preview'] = $ds_view_mode;

  return $export;
}
