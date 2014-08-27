<?php

/**
 * Admin settings form.
 */
function ding_webtrends_2014_admin_settings_form($form_state) {
  $form = array();

  $form['webtrends_2014_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Hostname (fpcdom)'),
    '#description' => t('The hostname of the tracked site, without subdomain, inserts fpcdom value.'),
    '#default_value' => variable_get('webtrends_2014_domain', FALSE),
  );

  $form['webtrends_2014_onsitedoms'] = array(
    '#type' => 'textfield',
    '#title' => t('Hostname (onsitedoms)'),
    '#description' => t('The hostname of the tracked site, with www. subdomain if used, inserts onsitedoms value.'),
    '#default_value' => variable_get('webtrends_2014_onsitedoms', FALSE),
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

