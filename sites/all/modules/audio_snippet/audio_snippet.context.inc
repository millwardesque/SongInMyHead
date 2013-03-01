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
          'weight' => '-10',
        ),
        'audio_snippet-recent_by_title' => array(
          'module' => 'audio_snippet',
          'delta' => 'recent_by_title',
          'region' => 'content',
          'weight' => '-9',
        ),
        'audio_snippet-recent_by_artist' => array(
          'module' => 'audio_snippet',
          'delta' => 'recent_by_artist',
          'region' => 'content',
          'weight' => '-8',
        ),
        'audio_snippet-recent_by_album' => array(
          'module' => 'audio_snippet',
          'delta' => 'recent_by_album',
          'region' => 'content',
          'weight' => '-7',
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

  return $export;
}
