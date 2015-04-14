<?php
/**
 * @file
 * node_bug_7_36.features.inc
 */

/**
 * Implements hook_node_info().
 */
function node_bug_7_36_node_info() {
  $items = array(
    'bug_7_36' => array(
      'name' => t('Bug 7.36'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
