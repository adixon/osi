<?php
/**
 * @file
 * osi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osi_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function osi_node_info() {
  $items = array(
    'osi' => array(
      'name' => t('Self-Assessment Question'),
      'base' => 'node_content',
      'description' => t('A self-assessment question.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A simple page for displaying information that rarely changes, such as an "About us" section of a website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
