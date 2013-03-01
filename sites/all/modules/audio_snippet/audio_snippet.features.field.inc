<?php
/**
 * @file
 * audio_snippet.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function audio_snippet_field_default_fields() {
  $fields = array();

  // Exported field: 'comment-comment_node_audio_snippet-comment_body'.
  $fields['comment-comment_node_audio_snippet-comment_body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'comment',
      ),
      'field_name' => 'comment_body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'comment_node_audio_snippet',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'comment',
      'field_name' => 'comment_body',
      'label' => 'Comment',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-audio_snippet-body'.
  $fields['node-audio_snippet-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'audio_snippet',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'What makes you love this clip so much?',
      'display' => array(
        'audio_no_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-audio_snippet-field_audio_snippet'.
  $fields['node-audio_snippet-field_audio_snippet'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audio_snippet',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'audio_snippet',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'audio_no_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'html5_media',
          'settings' => array(
            'autoplay' => 0,
            'debug' => 0,
            'height' => '100px',
            'loop' => 0,
            'preload' => 1,
            'sources' => 1,
            'template' => 'jqueryui',
            'volume' => '80',
            'width' => '100%',
          ),
          'type' => 'html5_player',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'html5_media',
          'settings' => array(
            'autoplay' => 0,
            'debug' => 0,
            'height' => '400px',
            'loop' => 0,
            'preload' => 0,
            'sources' => 1,
            'template' => 'jqueryui',
            'volume' => '80',
            'width' => '100%',
          ),
          'type' => 'html5_player',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_audio_snippet',
      'label' => 'Audio snippet',
      'required' => 1,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'audio_snippets',
        'file_extensions' => 'mp3',
        'max_filesize' => '32 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-audio_snippet-field_audio_snippet_cropped'.
  $fields['node-audio_snippet-field_audio_snippet_cropped'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audio_snippet_cropped',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '0',
          1 => '1',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'audio_snippet',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'audio_no_preview' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_audio_snippet_cropped',
      'label' => 'Is Cropped',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio snippet');
  t('Comment');
  t('Description');
  t('Is Cropped');
  t('What makes you love this clip so much?');

  return $fields;
}
