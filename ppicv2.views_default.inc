<?php
/**
 * @file
 * ppicv2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ppicv2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ppic_programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PPIC Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PPIC Team Primary Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    47 => '47',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply Filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset Filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ppic_state' => 'field_ppic_state',
    'field_ppic_specialty' => 'field_ppic_specialty',
    'field_ppic_payer' => 'field_ppic_payer',
    'title' => 'title',
    'field_ppic_payment_rating' => 'field_ppic_payment_rating',
    'field_ppic_additional_info' => 'field_ppic_additional_info',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ppic_state';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ppic_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_specialty' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_payer' => array(
      'sortable' => 1,
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
    'field_ppic_payment_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ppic_additional_info' => array(
      'sortable' => 1,
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>eCW has started a new Private Payer Incentive Consulting (PPIC) team, designed to help clients receive incentive money from a variety of private insurance companies. We need your help in spreading awareness and interest.  For more information, please see this <a href="/node/9391" target="_blank">announcement on the eKB.</a></p>
<p>See this Prezi for more information on the PPIC team and incentive programs.
<iframe src="http://prezi.com/embed/ee6032d9ace139a2b0a34a60a687ccf8053c1a2b/?bgcolor=ff…" width="550" height="400" frameBorder="0"></iframe>
</p>

<p>If you have any questions about this program before speaking with clients, please refer to the links on this page or contact <a href="mailto:ppic@eclinicalworks.com">ppic@eclinicalworks.com</a>.</p>
<br /> <p>Below is a list of insurance incentive programs put together by the eCW PPIC (Private Payer Incentive Consulting) Team.  This list will be updated on a regular basis by the PPIC team.</p>
<br />
<br />
<h1>PPIC Programs</h1>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No programs found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>&nbsp;</p>
<h2>Sorry!  Your Search returned no results.</h2>
<p>Unfortunately, there are no available incentive programs matching your search at this time.  Please contact <a href="mailto:ppic@eclinicalworks.com">ppic@eclinicalworks.com</a> with any inquiries about available incentive programs that we possibly have not updated or added added here on the eKB.</p>
<p>Thank you!</p>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_ppic_state']['id'] = 'field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['field'] = 'field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ppic_state']['delta_offset'] = '0';
  /* Field: Content: Specialty */
  $handler->display->display_options['fields']['field_ppic_specialty']['id'] = 'field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['table'] = 'field_data_field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['field'] = 'field_ppic_specialty';
  /* Field: Content: Payer */
  $handler->display->display_options['fields']['field_ppic_payer']['id'] = 'field_ppic_payer';
  $handler->display->display_options['fields']['field_ppic_payer']['table'] = 'field_data_field_ppic_payer';
  $handler->display->display_options['fields']['field_ppic_payer']['field'] = 'field_ppic_payer';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Payment Rating */
  $handler->display->display_options['fields']['field_ppic_payment_rating']['id'] = 'field_ppic_payment_rating';
  $handler->display->display_options['fields']['field_ppic_payment_rating']['table'] = 'field_data_field_ppic_payment_rating';
  $handler->display->display_options['fields']['field_ppic_payment_rating']['field'] = 'field_ppic_payment_rating';
  /* Field: Content: Additional Info */
  $handler->display->display_options['fields']['field_ppic_additional_info']['id'] = 'field_ppic_additional_info';
  $handler->display->display_options['fields']['field_ppic_additional_info']['table'] = 'field_data_field_ppic_additional_info';
  $handler->display->display_options['fields']['field_ppic_additional_info']['field'] = 'field_ppic_additional_info';
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
    'ppic_program' => 'ppic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: State (field_ppic_state) */
  $handler->display->display_options['filters']['field_ppic_state_value']['id'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['filters']['field_ppic_state_value']['field'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ppic_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['operator_id'] = 'field_ppic_state_value_op';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['operator'] = 'field_ppic_state_value_op';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['identifier'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
  );
  /* Filter criterion: Content: Specialty (field_ppic_specialty) */
  $handler->display->display_options['filters']['field_ppic_specialty_value']['id'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['table'] = 'field_data_field_ppic_specialty';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['field'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ppic_specialty_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['operator_id'] = 'field_ppic_specialty_value_op';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['label'] = 'Specialty';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['operator'] = 'field_ppic_specialty_value_op';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['identifier'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
  );
  /* Filter criterion: Content: Payment Rating (field_ppic_payment_rating) */
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['id'] = 'field_ppic_payment_rating_value';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['table'] = 'field_data_field_ppic_payment_rating';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['field'] = 'field_ppic_payment_rating_value';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['expose']['operator_id'] = 'field_ppic_payment_rating_value_op';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['expose']['label'] = 'Payment Rating';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['expose']['operator'] = 'field_ppic_payment_rating_value_op';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['expose']['identifier'] = 'field_ppic_payment_rating_value';
  $handler->display->display_options['filters']['field_ppic_payment_rating_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'ppic';
  $handler->display->display_options['menu']['title'] = 'PPIC Programs';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: PPIC Quick Program Search */
  $handler = $view->new_display('page', 'PPIC Quick Program Search', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PPIC Quick Program Search';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go!';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '2';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>
	<strong>How to use the PPIC Program Search</strong>
</p>
<ol>
	<li>Select the state where the client is located.</li>
	<li>Select the specialty of the client.</li>
	<li>Click the <strong>Go</strong> button. (This will bring you to another page that will have the available programs, payment calculators, and other additional information regarding the incentive programs.)</li>
</ol>';
  $handler->display->display_options['header']['area']['format'] = '2';
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
    'ppic_program' => 'ppic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: State (field_ppic_state) */
  $handler->display->display_options['filters']['field_ppic_state_value']['id'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['filters']['field_ppic_state_value']['field'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ppic_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['operator_id'] = 'field_ppic_state_value_op';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['operator'] = 'field_ppic_state_value_op';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['identifier'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
  );
  /* Filter criterion: Content: Specialty (field_ppic_specialty) */
  $handler->display->display_options['filters']['field_ppic_specialty_value']['id'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['table'] = 'field_data_field_ppic_specialty';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['field'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ppic_specialty_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['operator_id'] = 'field_ppic_specialty_value_op';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['label'] = 'Specialty';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['operator'] = 'field_ppic_specialty_value_op';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['identifier'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
  );
  $handler->display->display_options['path'] = 'ppic/quick-program-search';
  $handler->display->display_options['menu']['title'] = 'PPIC Programs';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: No Header */
  $handler = $view->new_display('page', 'No Header', 'page_2');
  $handler->display->display_options['display_description'] = 'List of PPIC Programs, with no header displayed at the top';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['path'] = 'ppic/programs-no-header';
  $export['ppic_programs'] = $view;

  return $export;
}
