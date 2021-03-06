<?php
/**
 * @file
 * feature_profile.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feature_profile_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'profile_xml_feeds-xpathparser_16-url_absolutify';
  $feeds_tamper->importer = 'profile_xml_feeds';
  $feeds_tamper->source = 'xpathparser:16';
  $feeds_tamper->plugin_id = 'url_absolutify';
  $feeds_tamper->settings = array(
    'origin' => '',
    'global' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Absolutify URL';
  $export['profile_xml_feeds-xpathparser_16-url_absolutify'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'profile_xml_feeds-xpathparser_19-explode';
  $feeds_tamper->importer = 'profile_xml_feeds';
  $feeds_tamper->source = 'xpathparser:19';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['profile_xml_feeds-xpathparser_19-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'profile_xml_feeds-xpathparser_20-explode';
  $feeds_tamper->importer = 'profile_xml_feeds';
  $feeds_tamper->source = 'xpathparser:20';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['profile_xml_feeds-xpathparser_20-explode'] = $feeds_tamper;

  return $export;
}
