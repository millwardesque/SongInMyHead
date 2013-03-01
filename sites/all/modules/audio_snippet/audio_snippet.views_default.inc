<?php
/**
 * @file
 * audio_snippet.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function audio_snippet_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_snippets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related snippets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'More from this song';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Audio snippet (field_audio_snippet:fid) */
  $handler->display->display_options['relationships']['field_audio_snippet_fid']['id'] = 'field_audio_snippet_fid';
  $handler->display->display_options['relationships']['field_audio_snippet_fid']['table'] = 'field_data_field_audio_snippet';
  $handler->display->display_options['relationships']['field_audio_snippet_fid']['field'] = 'field_audio_snippet_fid';
  $handler->display->display_options['relationships']['field_audio_snippet_fid']['label'] = 'Audio file';
  $handler->display->display_options['relationships']['field_audio_snippet_fid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Audio snippet */
  $handler->display->display_options['fields']['field_audio_snippet']['id'] = 'field_audio_snippet';
  $handler->display->display_options['fields']['field_audio_snippet']['table'] = 'field_data_field_audio_snippet';
  $handler->display->display_options['fields']['field_audio_snippet']['field'] = 'field_audio_snippet';
  $handler->display->display_options['fields']['field_audio_snippet']['label'] = '';
  $handler->display->display_options['fields']['field_audio_snippet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audio_snippet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_snippet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_snippet']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_audio_snippet']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: File: Artist (field_audio_artist) */
  $handler->display->display_options['arguments']['field_audio_artist_tid']['id'] = 'field_audio_artist_tid';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['table'] = 'field_data_field_audio_artist';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['field'] = 'field_audio_artist_tid';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['relationship'] = 'field_audio_snippet_fid';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: File: Album (field_audio_album) */
  $handler->display->display_options['arguments']['field_audio_album_tid']['id'] = 'field_audio_album_tid';
  $handler->display->display_options['arguments']['field_audio_album_tid']['table'] = 'field_data_field_audio_album';
  $handler->display->display_options['arguments']['field_audio_album_tid']['field'] = 'field_audio_album_tid';
  $handler->display->display_options['arguments']['field_audio_album_tid']['relationship'] = 'field_audio_snippet_fid';
  $handler->display->display_options['arguments']['field_audio_album_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audio_album_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audio_album_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audio_album_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio_snippet' => 'audio_snippet',
  );
  /* Filter criterion: Content: Is Cropped (field_audio_snippet_cropped) */
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['id'] = 'field_audio_snippet_cropped_value';
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['table'] = 'field_data_field_audio_snippet_cropped';
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['field'] = 'field_audio_snippet_cropped_value';
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['value'] = array(
    1 => '1',
  );

  /* Display: Related by artist */
  $handler = $view->new_display('block', 'Related by artist', 'related_by_artist');
  $handler->display->display_options['display_description'] = 'Snippets by the same artist';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Related by song */
  $handler = $view->new_display('block', 'Related by song', 'related_by_title');
  $handler->display->display_options['display_description'] = 'Snippets from the same song';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: File: Artist (field_audio_artist) */
  $handler->display->display_options['arguments']['field_audio_artist_tid']['id'] = 'field_audio_artist_tid';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['table'] = 'field_data_field_audio_artist';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['field'] = 'field_audio_artist_tid';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['relationship'] = 'field_audio_snippet_fid';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audio_artist_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: File: Title (field_audio_title) */
  $handler->display->display_options['arguments']['field_audio_title_tid']['id'] = 'field_audio_title_tid';
  $handler->display->display_options['arguments']['field_audio_title_tid']['table'] = 'field_data_field_audio_title';
  $handler->display->display_options['arguments']['field_audio_title_tid']['field'] = 'field_audio_title_tid';
  $handler->display->display_options['arguments']['field_audio_title_tid']['relationship'] = 'field_audio_snippet_fid';
  $handler->display->display_options['arguments']['field_audio_title_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audio_title_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audio_title_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audio_title_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Related by album */
  $handler = $view->new_display('block', 'Related by album', 'related_by_album');
  $handler->display->display_options['display_description'] = 'Snippets from the same album';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['related_snippets'] = $view;

  $view = new view();
  $view->name = 'uploaded_snippets';
  $view->description = 'Audio snippets that have been uploaded by users.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Uploaded Snippets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Hooks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'audio_no_preview';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio_snippet' => 'audio_snippet',
  );
  /* Filter criterion: Content: Is Cropped (field_audio_snippet_cropped) */
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['id'] = 'field_audio_snippet_cropped_value';
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['table'] = 'field_data_field_audio_snippet_cropped';
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['field'] = 'field_audio_snippet_cropped_value';
  $handler->display->display_options['filters']['field_audio_snippet_cropped_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Latest Snippets';
  $export['uploaded_snippets'] = $view;

  return $export;
}
