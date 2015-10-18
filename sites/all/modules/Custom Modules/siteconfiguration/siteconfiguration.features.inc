<?php
/**
 * @file
 * siteconfiguration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function siteconfiguration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function siteconfiguration_node_info() {
  $items = array(
    'site_configuration' => array(
      'name' => t('Site Configuration'),
      'base' => 'node_content',
      'description' => t('Allows the user to change the site name, slogan, default theme and front page URL.'),
      'has_title' => '1',
      'title_label' => t('Site Configuration'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
