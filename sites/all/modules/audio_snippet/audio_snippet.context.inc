<?php
/**
 * @file
 * audio_snippet.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function audio_snippet_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'audio_snippet';
  $context->description = 'Loaded when an audio-snippet is fully displayed';
  $context->tag = 'AudioSnippet';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~audio_snippet_crop' => '~audio_snippet_crop',
      ),
    ),
    'node' => array(
      'values' => array(
        'audio_snippet' => 'audio_snippet',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'shorten-shorten_short' => array(
          'module' => 'shorten',
          'delta' => 'shorten_short',
          'region' => 'content',
          'weight' => '-9',
        ),
        'service_links-service_links' => array(
          'module' => 'service_links',
          'delta' => 'service_links',
          'region' => 'content',
          'weight' => '-8',
        ),
        'boxes-add_another_hook' => array(
          'module' => 'boxes',
          'delta' => 'add_another_hook',
          'region' => 'content',
          'weight' => '-7',
        ),
        'audio_snippet-recent_by_title' => array(
          'module' => 'audio_snippet',
          'delta' => 'recent_by_title',
          'region' => 'content',
          'weight' => '-6',
        ),
        'audio_snippet-recent_by_artist' => array(
          'module' => 'audio_snippet',
          'delta' => 'recent_by_artist',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('AudioSnippet');
  t('Loaded when an audio-snippet is fully displayed');
  $export['audio_snippet'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'audio_snippet_crop';
  $context->description = 'Context for when the audio snippet is being cropped.';
  $context->tag = 'AudioSnippet';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AudioSnippet');
  t('Context for when the audio snippet is being cropped.');
  $export['audio_snippet_crop'] = $context;

  return $export;
}
