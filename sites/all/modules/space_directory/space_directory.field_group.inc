<?php
/**
 * @file
 * space_directory.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function space_directory_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organizer|profile2|organizer|form';
  $field_group->group_name = 'group_organizer';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organizer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Space Organizer Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_organizer_phone',
      1 => 'field_organizer_title',
      2 => 'field_organizer_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Space Organizer Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organizer field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_organizer|profile2|organizer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_space_detail|node|space|form';
  $field_group->group_name = 'group_space_detail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'space';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Detail',
    'weight' => '13',
    'children' => array(
      0 => 'field_space_media_links',
      1 => 'field_space_programs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Detail',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-space-detail field-group-fieldset',
        'description' => 'More details about your space',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_space_detail|node|space|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_space_price|node|space|default';
  $field_group->group_name = 'group_space_price';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'space';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pricing',
    'weight' => '8',
    'children' => array(
      0 => 'field_space_costs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pricing',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-space-price field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_space_price|node|space|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_space_profile_admin|node|space|form';
  $field_group->group_name = 'group_space_profile_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'space';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Admin',
    'weight' => '17',
    'children' => array(
      0 => 'field_space_managers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Profile Admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-space-profile-admin field-group-fieldset',
        'description' => 'Assign people to be able to manage the space profile. Those who have been given the "space leader" role can be assigned here to be listed as associated with this space.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_space_profile_admin|node|space|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Detail');
  t('Pricing');
  t('Profile Admin');
  t('Space Organizer Details');

  return $field_groups;
}
