<?php
/**
 * @file
 * node_lorem.features.inc
 */

/**
 * Implements hook_node_info().
 */
function node_lorem_node_info() {
  $items = array(
    'lorem' => array(
      'name' => t('Lorem'),
      'base' => 'node_content',
      'description' => 'A test content type',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
