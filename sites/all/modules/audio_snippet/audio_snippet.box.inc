<?php
/**
 * @file
 * audio_snippet.box.inc
 */

/**
 * Implements hook_default_box().
 */
function audio_snippet_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'add_another_hook';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'CTA to add a hook';
  $box->options = array(
    'body' => array(
      'value' => '<a href="/">Click here to add a hook</a>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'add-another-hook',
  );
  $export['add_another_hook'] = $box;

  return $export;
}
