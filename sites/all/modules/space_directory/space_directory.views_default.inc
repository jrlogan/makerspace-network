<?php
/**
 * @file
 * space_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function space_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'capabilities_specific';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Space Capablities Comparison';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Specific Comparison';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'matrix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['xconfig'] = array(
    'field' => 'title',
    'sort' => 'asc',
    'class' => '',
  );
  $handler->display->display_options['style_options']['yconfig'] = array(
    'field' => 'field_space_capabilities',
    'sort' => 'asc',
    'class' => '',
  );
  $handler->display->display_options['style_options']['hide_empty_columns'] = TRUE;
  $handler->display->display_options['style_options']['hide_empty_rows'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Space Capabilities Summary */
  $handler->display->display_options['fields']['field_space_capabilities']['id'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['field'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_space_capabilities']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'none',
    'separator' => ' » ',
  );
  $handler->display->display_options['fields']['field_space_capabilities']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_space_capabilities']['delta_offset'] = '0';
  /* Sort criterion: Content: Space Capabilities Summary (field_space_capabilities) */
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['id'] = 'field_space_capabilities_tid';
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['field'] = 'field_space_capabilities_tid';
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'space' => 'space',
  );
  /* Filter criterion: Content: Space Type (field_space_type) */
  $handler->display->display_options['filters']['field_space_type_tid']['id'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['filters']['field_space_type_tid']['field'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['operator_id'] = 'field_space_type_tid_op';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['label'] = 'space type';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['operator'] = 'field_space_type_tid_op';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['identifier'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_type_tid']['vocabulary'] = 'space_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    9 => '9',
    2 => '2',
    17 => '17',
    21 => '21',
    23 => '23',
    7 => '7',
    26 => '26',
    6 => '6',
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'space_capabilities';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Space Capabilities Summary */
  $handler->display->display_options['fields']['field_space_capabilities']['id'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['field'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_space_capabilities']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_space_capabilities']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'none',
    'separator' => ' » ',
  );
  $handler->display->display_options['fields']['field_space_capabilities']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_space_capabilities']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'space' => 'space',
  );
  /* Filter criterion: Content: Space Type (field_space_type) */
  $handler->display->display_options['filters']['field_space_type_tid']['id'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['filters']['field_space_type_tid']['field'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['operator_id'] = 'field_space_type_tid_op';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['label'] = 'space type';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['operator'] = 'field_space_type_tid_op';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['identifier'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_type_tid']['vocabulary'] = 'space_type';
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    27 => '27',
    10 => '10',
    12 => '12',
    22 => '22',
    11 => '11',
    8 => '8',
    25 => '25',
    18 => '18',
    20 => '20',
    19 => '19',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'space_capabilities';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'comparison/specific';
  $export['capabilities_specific'] = $view;

  $view = new view();
  $view->name = 'makerspace_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Makerspace List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Makerspace List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_space_logo' => 'field_space_logo',
    'title' => 'title',
    'field_space_location' => 'field_space_location',
    'body' => 'body',
    'field_space_capabilities' => 'field_space_capabilities',
    'nid' => 'nid',
    'field_space_pricing' => 'field_space_pricing',
    'field_space_membership_app' => 'field_space_membership_app',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_space_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_space_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_space_capabilities' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_space_pricing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_space_membership_app' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Space Logo */
  $handler->display->display_options['fields']['field_space_logo']['id'] = 'field_space_logo';
  $handler->display->display_options['fields']['field_space_logo']['table'] = 'field_data_field_space_logo';
  $handler->display->display_options['fields']['field_space_logo']['field'] = 'field_space_logo';
  $handler->display->display_options['fields']['field_space_logo']['label'] = '';
  $handler->display->display_options['fields']['field_space_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_space_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_space_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Space Location */
  $handler->display->display_options['fields']['field_space_location']['id'] = 'field_space_location';
  $handler->display->display_options['fields']['field_space_location']['table'] = 'field_data_field_space_location';
  $handler->display->display_options['fields']['field_space_location']['field'] = 'field_space_location';
  $handler->display->display_options['fields']['field_space_location']['exclude'] = TRUE;
  /* Field: Content: Space Type */
  $handler->display->display_options['fields']['field_space_type']['id'] = 'field_space_type';
  $handler->display->display_options['fields']['field_space_type']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['fields']['field_space_type']['field'] = 'field_space_type';
  $handler->display->display_options['fields']['field_space_type']['label'] = 'Membership';
  $handler->display->display_options['fields']['field_space_type']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_space_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Space Capabilities Summary */
  $handler->display->display_options['fields']['field_space_capabilities']['id'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['field'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['label'] = 'Space Capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_space_capabilities']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Membership Information URL */
  $handler->display->display_options['fields']['field_space_membership_app']['id'] = 'field_space_membership_app';
  $handler->display->display_options['fields']['field_space_membership_app']['table'] = 'field_data_field_space_membership_app';
  $handler->display->display_options['fields']['field_space_membership_app']['field'] = 'field_space_membership_app';
  $handler->display->display_options['fields']['field_space_membership_app']['label'] = '';
  $handler->display->display_options['fields']['field_space_membership_app']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_space_membership_app']['click_sort_column'] = 'url';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'space' => 'space',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Region (field_space_region) */
  $handler->display->display_options['filters']['field_space_region_tid']['id'] = 'field_space_region_tid';
  $handler->display->display_options['filters']['field_space_region_tid']['table'] = 'field_data_field_space_region';
  $handler->display->display_options['filters']['field_space_region_tid']['field'] = 'field_space_region_tid';
  $handler->display->display_options['filters']['field_space_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_space_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['operator_id'] = 'field_space_region_tid_op';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['operator'] = 'field_space_region_tid_op';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['identifier'] = 'field_space_region_tid';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_region_tid']['vocabulary'] = 'region';
  $handler->display->display_options['filters']['field_space_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Space Type (field_space_type) */
  $handler->display->display_options['filters']['field_space_type_tid_1']['id'] = 'field_space_type_tid_1';
  $handler->display->display_options['filters']['field_space_type_tid_1']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['filters']['field_space_type_tid_1']['field'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_space_type_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_type_tid_1']['expose']['operator_id'] = 'field_space_type_tid_1_op';
  $handler->display->display_options['filters']['field_space_type_tid_1']['expose']['label'] = 'Membership Type';
  $handler->display->display_options['filters']['field_space_type_tid_1']['expose']['operator'] = 'field_space_type_tid_1_op';
  $handler->display->display_options['filters']['field_space_type_tid_1']['expose']['identifier'] = 'field_space_type_tid_1';
  $handler->display->display_options['filters']['field_space_type_tid_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_space_type_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_type_tid_1']['vocabulary'] = 'space_type';
  $handler->display->display_options['filters']['field_space_type_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Space Capabilities Summary (field_space_capabilities) */
  $handler->display->display_options['filters']['field_space_capabilities_tid']['id'] = 'field_space_capabilities_tid';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['field'] = 'field_space_capabilities_tid';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_space_capabilities_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_capabilities_tid']['expose']['operator_id'] = 'field_space_capabilities_tid_op';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['expose']['label'] = 'Capabilities';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['expose']['operator'] = 'field_space_capabilities_tid_op';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['expose']['identifier'] = 'field_space_capabilities_tid';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_space_capabilities_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => '1',
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_capabilities_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_space_capabilities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['vocabulary'] = 'space_capabilities';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['hierarchy'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'directory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Directory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['makerspace_list'] = $view;

  $view = new view();
  $view->name = 'space_capablities_comparison';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Space Capablities Comparison';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comparison';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'matrix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['xconfig'] = array(
    'field' => 'title',
    'sort' => 'asc',
    'class' => '',
  );
  $handler->display->display_options['style_options']['yconfig'] = array(
    'field' => 'field_space_capabilities',
    'sort' => 'asc',
    'class' => '',
  );
  $handler->display->display_options['style_options']['hide_empty_columns'] = TRUE;
  $handler->display->display_options['style_options']['hide_empty_rows'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<BR><a href="/comparison/detail" class="btn btn-primary btn-lg active" role="button" aria-pressed="true">Capabilities Drill Down</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Space Capabilities Summary */
  $handler->display->display_options['fields']['field_space_capabilities']['id'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['field'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['label'] = 'Space Capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_space_capabilities']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'none',
    'separator' => ' » ',
  );
  $handler->display->display_options['fields']['field_space_capabilities']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_space_capabilities']['delta_offset'] = '0';
  /* Sort criterion: Content: Space Capabilities Summary (field_space_capabilities) */
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['id'] = 'field_space_capabilities_tid';
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['field'] = 'field_space_capabilities_tid';
  $handler->display->display_options['sorts']['field_space_capabilities_tid']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'space' => 'space',
  );
  /* Filter criterion: Content: Space Type (field_space_type) */
  $handler->display->display_options['filters']['field_space_type_tid']['id'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['filters']['field_space_type_tid']['field'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_space_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['operator_id'] = 'field_space_type_tid_op';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['label'] = 'Membership Type';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['operator'] = 'field_space_type_tid_op';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['identifier'] = 'field_space_type_tid';
  $handler->display->display_options['filters']['field_space_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_type_tid']['vocabulary'] = 'space_type';
  /* Filter criterion: Content: Space Capabilities Summary (field_space_capabilities) */
  $handler->display->display_options['filters']['field_space_capabilities_tid']['id'] = 'field_space_capabilities_tid';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['field'] = 'field_space_capabilities_tid';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['value'] = array(
    88 => '88',
    2 => '2',
    26 => '26',
    4 => '4',
    127 => '127',
    1 => '1',
    7 => '7',
    17 => '17',
    3 => '3',
    22 => '22',
    9 => '9',
    6 => '6',
    119 => '119',
    21 => '21',
    141 => '141',
    114 => '114',
    142 => '142',
  );
  $handler->display->display_options['filters']['field_space_capabilities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['vocabulary'] = 'space_capabilities';
  $handler->display->display_options['filters']['field_space_capabilities_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Region (field_space_region) */
  $handler->display->display_options['filters']['field_space_region_tid']['id'] = 'field_space_region_tid';
  $handler->display->display_options['filters']['field_space_region_tid']['table'] = 'field_data_field_space_region';
  $handler->display->display_options['filters']['field_space_region_tid']['field'] = 'field_space_region_tid';
  $handler->display->display_options['filters']['field_space_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['operator_id'] = 'field_space_region_tid_op';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['operator'] = 'field_space_region_tid_op';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['identifier'] = 'field_space_region_tid';
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_space_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_space_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_region_tid']['vocabulary'] = 'region';
  $handler->display->display_options['filters']['field_space_region_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'comparison';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Capabilities';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'compare_detail');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Space Capabilities Summary */
  $handler->display->display_options['fields']['field_space_capabilities']['id'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['field'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['label'] = 'Space Capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_space_capabilities']['type'] = 'hierarchical_term_formatter';
  $handler->display->display_options['fields']['field_space_capabilities']['settings'] = array(
    'display' => 'all',
    'link' => 0,
    'wrap' => 'none',
    'separator' => ' » ',
  );
  $handler->display->display_options['fields']['field_space_capabilities']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_space_capabilities']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'comparison/detail';
  $export['space_capablities_comparison'] = $view;

  $view = new view();
  $view->name = 'space_leaders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Space Leaders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Space Leaders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'pid' => 'pid',
    'field_space_region' => 'field_space_region',
    'title' => 'title',
    'field_organizer_title' => 'field_organizer_title',
    'field_organizer_phone' => 'field_organizer_phone',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_space_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizer_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizer_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_space_managers_node']['id'] = 'reverse_field_space_managers_node';
  $handler->display->display_options['relationships']['reverse_field_space_managers_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_space_managers_node']['field'] = 'reverse_field_space_managers_node';
  $handler->display->display_options['relationships']['reverse_field_space_managers_node']['relationship'] = 'user';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'small_profile';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'user';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'user';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_space_region']['id'] = 'field_space_region';
  $handler->display->display_options['fields']['field_space_region']['table'] = 'field_data_field_space_region';
  $handler->display->display_options['fields']['field_space_region']['field'] = 'field_space_region';
  $handler->display->display_options['fields']['field_space_region']['relationship'] = 'reverse_field_space_managers_node';
  $handler->display->display_options['fields']['field_space_region']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_space_managers_node';
  /* Field: Profile: Title or Role */
  $handler->display->display_options['fields']['field_organizer_title']['id'] = 'field_organizer_title';
  $handler->display->display_options['fields']['field_organizer_title']['table'] = 'field_data_field_organizer_title';
  $handler->display->display_options['fields']['field_organizer_title']['field'] = 'field_organizer_title';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_organizer_phone']['id'] = 'field_organizer_phone';
  $handler->display->display_options['fields']['field_organizer_phone']['table'] = 'field_data_field_organizer_phone';
  $handler->display->display_options['fields']['field_organizer_phone']['field'] = 'field_organizer_phone';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['label'] = 'Contact';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Contact';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['path'] = 'user/[uid]/contact';
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = TRUE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizer' => 'organizer',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'leaders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Space Leaders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['space_leaders'] = $view;

  $view = new view();
  $view->name = 'space_members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Space Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Space Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Members are self identified and not listed by the spaces. List should be expected to be incomplete and unvetted.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'member_space';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'member' => 'member',
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Maker Interests */
  $handler->display->display_options['fields']['field_maker_interests']['id'] = 'field_maker_interests';
  $handler->display->display_options['fields']['field_maker_interests']['table'] = 'field_data_field_maker_interests';
  $handler->display->display_options['fields']['field_maker_interests']['field'] = 'field_maker_interests';
  $handler->display->display_options['fields']['field_maker_interests']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_maker_interests']['label'] = 'Interests';
  $handler->display->display_options['fields']['field_maker_interests']['delta_offset'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Flags: Entity ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Space Members */
  $handler = $view->new_display('block', 'Space Members', 'block');
  $export['space_members'] = $view;

  $view = new view();
  $view->name = 'space_program_participation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Space Program Participation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maker Exchange Participation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'space' => 'space',
  );
  /* Filter criterion: Content: Space Program Participation (field_space_programs) */
  $handler->display->display_options['filters']['field_space_programs_tid']['id'] = 'field_space_programs_tid';
  $handler->display->display_options['filters']['field_space_programs_tid']['table'] = 'field_data_field_space_programs';
  $handler->display->display_options['filters']['field_space_programs_tid']['field'] = 'field_space_programs_tid';
  $handler->display->display_options['filters']['field_space_programs_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_space_programs_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_programs_tid']['vocabulary'] = 'space_programs';

  /* Display: Block multipass */
  $handler = $view->new_display('block', 'Block multipass', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Maker Multi-pass Participation';

  /* Display: Block exchange */
  $handler = $view->new_display('block', 'Block exchange', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'space' => 'space',
  );
  /* Filter criterion: Content: Space Program Participation (field_space_programs) */
  $handler->display->display_options['filters']['field_space_programs_tid']['id'] = 'field_space_programs_tid';
  $handler->display->display_options['filters']['field_space_programs_tid']['table'] = 'field_data_field_space_programs';
  $handler->display->display_options['filters']['field_space_programs_tid']['field'] = 'field_space_programs_tid';
  $handler->display->display_options['filters']['field_space_programs_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_space_programs_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_programs_tid']['vocabulary'] = 'space_programs';
  $export['space_program_participation'] = $view;

  $view = new view();
  $view->name = 'spaces_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spaces Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap |width=100% |height=600px ]';
  $handler->display->display_options['style_options']['datasource'] = 'fields';
  $handler->display->display_options['style_options']['markers'] = 'taxonomy';
  $handler->display->display_options['style_options']['markertype'] = 'lblue';
  $handler->display->display_options['style_options']['latfield'] = 'field_space_location';
  $handler->display->display_options['style_options']['lonfield'] = 'field_space_location';
  $handler->display->display_options['style_options']['markerfield'] = 'field_space_type';
  $handler->display->display_options['style_options']['geofield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['animation'] = '2';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'nothing';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Space Logo */
  $handler->display->display_options['fields']['field_space_logo']['id'] = 'field_space_logo';
  $handler->display->display_options['fields']['field_space_logo']['table'] = 'field_data_field_space_logo';
  $handler->display->display_options['fields']['field_space_logo']['field'] = 'field_space_logo';
  $handler->display->display_options['fields']['field_space_logo']['label'] = '';
  $handler->display->display_options['fields']['field_space_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_space_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_space_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Space Location */
  $handler->display->display_options['fields']['field_space_location']['id'] = 'field_space_location';
  $handler->display->display_options['fields']['field_space_location']['table'] = 'field_data_field_space_location';
  $handler->display->display_options['fields']['field_space_location']['field'] = 'field_space_location';
  /* Field: Content: Space Capabilities Summary */
  $handler->display->display_options['fields']['field_space_capabilities']['id'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['table'] = 'field_data_field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['field'] = 'field_space_capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['label'] = 'Capabilities';
  $handler->display->display_options['fields']['field_space_capabilities']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_space_capabilities']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_space_capabilities']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_space_capabilities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_space_capabilities']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Bubble content';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title] </h3>
[field_space_logo]<br>
[field_space_capabilities] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  /* Field: Content: Space Type */
  $handler->display->display_options['fields']['field_space_type']['id'] = 'field_space_type';
  $handler->display->display_options['fields']['field_space_type']['table'] = 'field_data_field_space_type';
  $handler->display->display_options['fields']['field_space_type']['field'] = 'field_space_type';
  $handler->display->display_options['fields']['field_space_type']['label'] = '';
  $handler->display->display_options['fields']['field_space_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['spaces_map'] = $view;

  return $export;
}
