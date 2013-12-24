<?php
/**
 * @file
 * issues.features.inc
 */

/**
 * Implements hook_node_info().
 */
function issues_node_info() {
  $items = array(
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('An issue of Western Friend magazine. Articles will be linked to the issue.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
