<?php

// $airsUniversalDM = drupal_get_form('AIRS Universal DM');

function airs_xacml_admin() {
  $form = array();

  $form['words_on_the_screen'] = array(
    '#type' => 'textfield',
    '#title' => t('There are words on the screen,'),
    '#default_value' => variable_get('words_on_the_screen', 
				     'which means this is not broken'),
    '#description' => t('I really hope, anyway'),
    '#size' => 26,
  );

 // print_r($airsUniversalDM);
  return system_settings_form($form);
}

/**
 * ~~~~~ REMOVE THIS CODEBLOCK ~~~~~
 */

/*
function test_form() {
  $form = array();

  $form['textfield'] = array(
    '#type' => 'textfield',
    '#title' => t('Test-field (ha)'),
    '#default_value' => variable_get('textfield', 'default value stuff'),
    '#description' => t('islandora learnins'),
    //'#size' => 26,
  );

  return system_settings_form($form);
}
*/
