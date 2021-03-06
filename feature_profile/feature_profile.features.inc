<?php
/**
 * @file
 * feature_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_profile_node_info() {
  $items = array(
    'feature_profile' => array(
      'name' => t('Feature Profile'),
      'base' => 'node_content',
      'description' => t('A feature profile allows a person to be highlighted on the wesbite.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
