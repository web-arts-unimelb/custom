<?php
/**
 * @file
 * feature_profile.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feature_profile_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'profile_xml_feeds';
  $feeds_importer->config = array(
    'name' => 'Feature Profile XML Importer',
    'description' => 'Imports Feature Profiles from XML feeds into the site.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'Uuid',
          'xpathparser:1' => 'ProfileType',
          'xpathparser:2' => 'Name',
          'xpathparser:3' => 'Title',
          'xpathparser:4' => 'ProfileImage',
          'xpathparser:5' => 'Video',
          'xpathparser:6' => 'JobTitle',
          'xpathparser:7' => 'Undergraduate',
          'xpathparser:8' => 'Major',
          'xpathparser:9' => 'Graduate-Coursework',
          'xpathparser:10' => 'Program',
          'xpathparser:11' => 'Graduate-Research',
          'xpathparser:13' => 'PreviousStudies',
          'xpathparser:14' => 'FurtherStudies',
          'xpathparser:15' => 'GraduatingYear',
          'xpathparser:16' => 'About',
          'xpathparser:19' => 'Image',
          'xpathparser:20' => 'ResearchArea',
          'xpathparser:21' => 'Promoted',
          'xpathparser:22' => 'Sticky',
          'xpathparser:23' => 'Ambassador',
          'xpathparser:24' => 'Internship',
          'xpathparser:25' => 'Partner',
          'xpathparser:26' => 'PartnerURL',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:24' => 0,
          'xpathparser:25' => 0,
          'xpathparser:26' => 0,
        ),
        'context' => '//node',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
            'xpathparser:24' => 0,
            'xpathparser:25' => 0,
            'xpathparser:26' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'feature_profile',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_profile_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'title',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_profile_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_profile_image',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_profile_video',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_profile_jobtitle',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_profile_undergrad',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_profile_major',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_profile_grad_course',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_profile_program',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_profile_grad_res',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_profile_previous_studies',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_profile_further_studies',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_profile_graduating_year:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:16',
            'target' => 'body',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_profile_images',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_profile_research_area',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:21',
            'target' => 'promote',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:22',
            'target' => 'sticky',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_profile_ambassador',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:24',
            'target' => 'field_profile_internship',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_profile_partner:title',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'xpathparser:26',
            'target' => 'field_profile_partner:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'html_editor',
        'authorize' => TRUE,
        'skip_hash_check' => FALSE,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['profile_xml_feeds'] = $feeds_importer;

  return $export;
}
