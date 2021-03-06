<?php
/**
 * @file
 * wysiwyg_arts.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wysiwyg_arts_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <h1> <h2> <h3> <h4> <h5> <h6> <img> <div> <table> <tbody> <tr> <td>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'wysiwyg_fields' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
