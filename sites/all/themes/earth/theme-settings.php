<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function earth_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['earth_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('earth sample setting'),
    '#default_value' => theme_get_setting('earth_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  // Remove some of the base theme's settings.
  /* -- Delete this line if you want to turn off this setting.
  unset($form['themedev']['zen_wireframes']); // We don't need to toggle wireframes on this site.
  // */

  $form['themedev']['earth_grid_background'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Add grid background'),
    '#default_value' => theme_get_setting('earth_grid_background'),
    '#description'   => t('A grid background visualizes your grids and gutters.'),
  );

  // We are editing the $form in place, so we don't need to return anything.
}
