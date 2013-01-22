<?php

/**
 * @file
 * Admin routines for the audio crop module.
 */

/**
 * Configuration form for the audio cropper.
 */
function audio_crop_configuration($form, &$form_state) {
    $form['audio_crop_max_duration'] = array(
      '#type' => 'textfield',
      '#title' => t('Max duration'),
      '#description' => t('The maximum snippet duration permitted'),
      '#default_value' => variable_get('audio_crop_max_duration', 0), // Default of 0 implies that any length is permitted.
    );

    return system_settings_form($form);
}