<?php
/**
 * @file
 * Expose the ssh authorized keys management to hostmaster.
 */

/**
 * Implements hook_hosting_feature().
 */
function aegir_ssh_hosting_feature() {
  $features = array();

  $features['ssh'] = array(
    'title' => t('SSH authorized keys management'),
    'description' => t('Allows users to upload their SSH keys to Hostmaster to get access to server_master.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'aegir_ssh',
    'group' => 'advanced',
  );

  return $features;
}
