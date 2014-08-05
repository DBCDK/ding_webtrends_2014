<?php

/**
 * Admin settings form.
 */
function ding_webtrends_2014_admin_settings_form($form_state) {
  $form = array();

  $form['webtrends_2014_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Hostname'),
    '#description' => t('The hostname of the tracked site.'),
    '#default_value' => variable_get('webtrends_2014_domain', FALSE),
  );

  $form['webtrends_2014_dcs_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Site ID'),
    '#description' => t('The site identification key.'),
    '#default_value' => variable_get('webtrends_2014_dcs_id', FALSE),
  );

  // Delete the generated file js/webtrends_2014_include1.js.
  $form['#submit'][] = 'drupal_clear_js_cache';

  return system_settings_form($form);
}

